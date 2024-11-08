/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gderrien <gderrien@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:25:41 by gderrien          #+#    #+#             */
/*   Updated: 2024/10/15 12:25:41 by gderrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* Copie n octets de la source *src vers la destination *dest.                */
/*                                                                            */
/* Si dest et src sont NULL avec n > 0, la fonction retourne NULL pour éviter */
/* un crash.                                                                  */
/*                                                                            */
/* Retourne le pointeur vers dest.                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	while (n-- > 0)
		*d++ = *s++;
	return (dest);
}
