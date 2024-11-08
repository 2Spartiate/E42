/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gderrien <gderrien@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 11:27:30 by gderrien          #+#    #+#             */
/*   Updated: 2024/11/01 11:27:30 by gderrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*									NOTES:                                    */
/* ************************************************************************** */
/* 1) t_list est un alias de s_list défini dans libft.h                       */
/* (sa déclaration en interne implique que content est le premier élément)    */
/* 2) content est initialisé avec la variable reçue en argument               */
/* 3) next est l'élément suivant de la liste, qui est initialisé à NULL       */
/* (ce qui n'implique PAS que content est le dernier élement de la liste car  */
/* les éléments suivants peuvent être ajoutés à différentes positions)        */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_element;

	new_element = malloc(sizeof(t_list));
	if (!new_element)
		return (NULL);
	new_element->content = content;
	new_element->next = NULL;
	return (new_element);
}
