/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gderrien <gderrien@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:11:32 by gderrien          #+#    #+#             */
/*   Updated: 2024/10/31 10:11:32 by gderrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*									NOTES:                                    */
/* ************************************************************************** */
/* ft_strmapi applique une fonction à chaque caractère d'une chaine           */
/* Cette fonction prend en parametre la chaine et l'indice du caractère       */
/* à traiter                                                                  */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_strlen_internal(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t				len;
	char				*result;
	unsigned int		i;

	if (!s || !f)
		return (NULL);
	len = ft_strlen_internal(s);
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = f(i, s[i]);
		i ++;
	}
	result[i] = '\0';
	return (result);
}
