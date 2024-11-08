/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gderrien <gderrien@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:51:43 by gderrien          #+#    #+#             */
/*   Updated: 2024/11/07 14:51:43 by gderrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* Copie n octets de *src vers *dest, en tenant compte des chevauchements.    */
/*                                                                            */
/* Si dest et src sont NULL avec n > 0, retourne NULL pour éviter un crash.   */
/*                                                                            */
/* Si dest est avant src en mémoire, appelle ft_memcpy pour optimiser.        */
/* Retourne le pointeur vers dest.                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;

	if (!dest && !src)
		return (NULL);
	s = (const unsigned char *)src;
	d = (unsigned char *)dest;
	if (d < s)
		return (ft_memcpy(dest, src, n));
	while (n--)
		d[n] = s[n];
	return (dest);
}
