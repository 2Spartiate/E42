/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  ft_lstclear.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gderrien <gderrien@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 16:27:30 by gderrien          #+#    #+#             */
/*   Updated: 2024/11/01 16:27:30 by gderrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*									NOTES:                                    */
/* ************************************************************************** */
/* 1) le but de cette fonction est quadruple:                                 */
/* - renvoyer vers une fonction del le contenu d'un maillon à effacer         */
/* - supprimer (libérer la mémoire) de la structure du maillon elle-même      */
/* - le faire également pour tous les maillons suivant de la chaine           */
/* - puis mettre le pointeur lui même du premier maillon à NULL               */
/* 2) on crée un pointeur clean pour incrémenter dessus en tte sécurité       */
/* 3) on crée un pointeur temp pour conserver l'adresse du maillon suivant    */
/* durant les incrémentation de la boucle while                               */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
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
