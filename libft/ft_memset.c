/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gderrien <gderrien@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:18:02 by gderrien          #+#    #+#             */
/*   Updated: 2024/10/15 11:18:02 by gderrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* Cette fonction initialise la mémoire à partir du pointeur *ptr, avec la    */
/* valeur value sur une longueur de num octets                                */
/* ************************************************************************** */
/* On converti *ptr en 'unsigned char *p' pour pouvoir incrémenter en octets  */
/* p[i] = (unsigned char)value; s'assure que la valeur utilisée est en octets */
/* Retourne le pointeur d'origine pour vérifier la mémoire modifiée           */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char *)ptr;
	i = 0;
	while (i < num)
	{
		p[i] = (unsigned char)value;
		i++;
	}
	return (ptr);
}
