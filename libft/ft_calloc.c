/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gderrien <gderrien@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:39:27 by gderrien          #+#    #+#             */
/*   Updated: 2024/11/07 15:39:27 by gderrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* NOTES:                                                                     */
/* ************************************************************************** */
/* 1) Vérifie si count * size dépasse SIZE_MAX pour éviter un débordement,    */
/*    si oui, retourne NULL pour indiquer une erreur.                         */
/* 2) Utilise ft_bzero_internal pour remplir la mémoire allouée avec des zéros*/
/*    en cas de succès de l'allocation.                                       */
/* ************************************************************************** */

#include "libft.h"

static	void	*ft_bzero_internal(void *ptr, size_t num)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char *)ptr;
	i = 0;
	while (i < num)
	{
		p[i] = 0;
		i++;
	}
	return (ptr);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	mem = malloc(count * size);
	if (mem)
		ft_bzero_internal(mem, (count * size));
	return (mem);
}
