/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gderrien <gderrien@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 12:27:30 by gderrien          #+#    #+#             */
/*   Updated: 2024/11/01 12:27:30 by gderrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*									NOTES:                                    */
/* ************************************************************************** */
/* 1) t_list est un alias de s_list défini dans libft.h                       */
/* 2) le pointeur *lst est une copie du pointeur à traiter, ce qui permet de  */
/* l'incrémenter pour calculer la taille de la liste                          */
/* 3) "tant que lst est non-NULL" (si le pointeur est NULL, c'est le dernier  */
/* élément de la liste)                                                       */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
