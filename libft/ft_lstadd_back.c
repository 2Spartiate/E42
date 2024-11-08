/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gderrien <gderrien@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 13:27:30 by gderrien          #+#    #+#             */
/*   Updated: 2024/11/01 13:27:30 by gderrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*									NOTES:                                    */
/* ************************************************************************** */
/* 1) t_list est un alias de s_list défini dans libft.h                       */
/* 2) le but de cette fonction est de mettre chaque élément en dernier dans   */
/* la liste.                                                                  */
/* 3) Si *lst est vide alors on crée le premier élément de la liste           */
/* 4) en incrémentant dans une liste ayant la même addresse, on en trouve la  */
/* fin, sans incrémenter dans la structure d'origine                          */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
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
