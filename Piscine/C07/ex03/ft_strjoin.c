/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gderrien <gaetan.derrien@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 11:19:00 by gderrien          #+#    #+#             */
/*   Updated: 2024/09/25 12:27:00 by gderrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_str_length(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int	ft_compute_final_length(char **strings, int size, int sep_length)
{
	int	final_length;
	int	index;

	final_length = 0;
	index = 0;
	while (index < size)
	{
		final_length += ft_str_length(strings[index]);
		if (index < size - 1)
			final_length += sep_length;
		index++;
	}
	return (final_length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		full_length;
	int		index;
	char	*result;

	if (size == 0)
	{
		result = malloc(1);
		if (result)
			result[0] = '\0';
		return (result);
	}
	full_length = ft_compute_final_length(strs, size, ft_str_length(sep));
	result = malloc(full_length + 1);
	if (!result)
		return (NULL);
	result[0] = '\0';
	index = 0;
	while (index < size)
	{
		ft_strcat(result, strs[index]);
		if (index < size - 1)
			ft_strcat(result, sep);
		index++;
	}
	return (result);
}

/*
#include <stdio.h>

int	main(void)
{
	// Définir un tableau de chaînes de caractères
	char *strings[] = {"Hello", "world", "ecole", "42"};
	// Nombre d'éléments dans le tableau
	int size = 4;
	// Séparateur entre les chaînes
	char *separator = ", ";
	// Appeler la fonction ft_strjoin
	char *result = ft_strjoin(size, strings, separator);

	// Afficher le résultat
	if (result)
	{
		printf("Result: %s\n", result);
		// Libérer la mémoire allouée
		free(result);
	}
	else
	{
		printf("Memory allocation failed.\n");
	}

	return 0;
}
*/