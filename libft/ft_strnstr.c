/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gderrien <gderrien@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:34:59 by gderrien          #+#    #+#             */
/*   Updated: 2024/10/16 17:34:59 by gderrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* Recherche la première occurrence de la sous-chaîne needle dans haystack,   */
/* en parcourant au maximum len caractères.                                   */
/* - haystack : chaîne principale où effectuer la recherche                   */
/* - needle : sous-chaîne à rechercher                                        */
/* - len : nombre maximum de caractères à parcourir dans haystack             */
/* Retourne pointeur vers le début de needle dans haystack, ou NULL si pas    */
/* trouvé. Si needle est vide, retourne haystack.                             */
/* ************************************************************************** */
/* (char *)&haystack[i]:                                                      */
/* adresse du caractère à l'indice i dans la chaîne haystack                  */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)&haystack[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
