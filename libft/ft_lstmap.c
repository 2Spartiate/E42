/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  ft_lstmap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gderrien <gderrien@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:27:30 by gderrien          #+#    #+#             */
/*   Updated: 2024/11/07 17:27:30 by gderrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*									NOTES:                                    */
/* ************************************************************************** */
/* 1) le but de cette fonction est d'appliquer la fonction f à chaque contenu */
/* des maillons d'une liste, MAIS dans une nouvelle liste                     */
/* 2) pour chaque nouvel élément on doit effectuer un malloc sinon un del()   */
/* 3) le del() est un pointeur vers une fonction variable hors scope ici      */
/* 4) On utilise pour ce faire:                                               */
/* - ft_lstnew() pour la gestion du malloc de chaque élément                  */
/* - ft_lstclear() en cas d'échec de malloc                                   */
/* - ft_lstadd_back() pour affecter le nouvel élément au bout de la nouvelle  */
/* liste (conforme à la logique du reste de la fonction ft_lstmap()           */
/* ************************************************************************** */
/* del(new_content) => si une allocation échoue on free le maillon            */
/* pour éviter les fuites de mémoire si un élément ne peut pas être créé      */
/* ************************************************************************** */

#include "libft.h"

static void	ft_lstclear_internal(t_list **lst, void (*del)(void*))
{
	t_list	*clean;
	t_list	*temp;

	clean = *lst;
	while (clean)
	{
		temp = clean->next;
		del(clean->content);
		free(clean);
		clean = temp;
	}
	*lst = NULL;
}

static t_list	*ft_lstnew_internal(void *content)
{
	t_list	*new_element;

	new_element = malloc(sizeof(t_list));
	if (!new_element)
		return (NULL);
	new_element->content = content;
	new_element->next = NULL;
	return (new_element);
}

static void	ft_lstadd_back_internal(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last->next)
		last = last->next;
	last->next = new;
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*new_elem;
	void	*new_content;

	result = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_elem = ft_lstnew_internal(new_content);
		if (!new_elem)
		{
			del(new_content);
			ft_lstclear_internal(&result, del);
			return (NULL);
		}
		ft_lstadd_back_internal(&result, new_elem);
		lst = lst->next;
	}
	return (result);
}
