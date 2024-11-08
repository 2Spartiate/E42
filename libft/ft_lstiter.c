/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  ft_lstiter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gderrien <gderrien@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 16:27:30 by gderrien          #+#    #+#             */
/*   Updated: 2024/11/01 16:27:30 by gderrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*									NOTES:                                    */
/* ************************************************************************** */
/* 1) le but de cette fonction est d'appliquer la fonction f à chaque contenu */
/* des maillons d'une liste                                                   */
/* 2) on crée un pointeur process pour incrémenter dessus en tte sécurité     */
/* 3) on applique la fonction f() sans valeur de retour à chaque content      */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*process;

	process = lst;
	while (process)
	{
		f(process -> content);
		process = process->next;
	}
}
