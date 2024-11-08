/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  ft_lstdelone.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gderrien <gderrien@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:27:30 by gderrien          #+#    #+#             */
/*   Updated: 2024/11/07 15:27:30 by gderrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* NOTES:                                                                     */
/* ************************************************************************** */
/* 1) Libère le contenu d'un maillon via la fonction del fournie en paramètre */
/*    puis libère le maillon lui-même.                                        */
/* 2) Vérifie que lst et del ne sont pas NULL avant de les utiliser.          */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}
