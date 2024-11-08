/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gderrien <gderrien@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:11:32 by gderrien          #+#    #+#             */
/*   Updated: 2024/10/17 13:11:32 by gderrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlen_internal(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

static	int	ft_is_in_set_internal(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i ++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		i;
	size_t		j;
	size_t		size;
	char		*result;

	if (!s1 || !set)
		return (NULL);
	size = ft_strlen_internal(s1);
	i = 0;
	j = 0;
	while (ft_is_in_set_internal(s1[i], set))
		i ++;
	while ((ft_is_in_set_internal(s1[size - 1], set)) && (size > i))
		size --;
	result = malloc(size - i + 1);
	if (!result)
		return (NULL);
	while (i < size)
	{
		result[j] = s1[i];
		i ++;
		j ++;
	}
	result[j] = '\0';
	return (result);
}
