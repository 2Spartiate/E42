/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gderrien <gderrien@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 12:55:30 by gderrien          #+#    #+#             */
/*   Updated: 2024/11/01 12:55:30 by gderrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*									NOTES:                                    */
/* ************************************************************************** */
/* 1) t_list est un alias de s_list défini dans libft.h                       */
/* 2) le pointeur *lst est une copie du pointeur à traiter, ce qui permet de  */
/* l'incrémenter pour calculer la taille de la liste                          */
/* 3) "tant que lst->next est non-NULL" (si le pointeur suivant est NULL,     */
/* le suivant est le dernier élément)                                         */
/* 4) on renvoit un pointeur, pas l'élément lui-même                          */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
