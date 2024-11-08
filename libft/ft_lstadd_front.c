/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
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
/* 2) le but de cette fonction est de mettre chaque élément devant les        */
/* précédents dans la liste.                                                  */
/* 3) en conséquences le paramètre next de new pointe vers l'adresse de       */
/* l'ancien premier élément de la liste                                       */
/* 4) Puis on réassigne le pointeur de la liste avec celui du nouvel element  */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
