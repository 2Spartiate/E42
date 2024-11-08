/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gderrien <gderrien@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:10:47 by gderrien          #+#    #+#             */
/*   Updated: 2024/10/16 16:10:47 by gderrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* Recherche la première occurrence du caractère c dans la chaîne s.          */
/* - s : chaîne de caractères où effectuer la recherche                       */
/* - c : caractère à rechercher, réduit à un unsigned char                    */
/* Retourne un pointeur vers la première occurrence de c, ou NULL si non      */
/* trouvé. Si c est '\0', retourne un pointeur vers le caractère nul final.   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	target;
	char			*ptr;

	target = (unsigned char)c;
	ptr = (char *)s;
	while (*ptr)
	{
		if (*ptr == target)
			return (ptr);
		ptr++;
	}
	if (target == '\0')
		return (ptr);
	return (NULL);
}
