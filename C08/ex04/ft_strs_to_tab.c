/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gderrien <gderrien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 14:40:07 by gderrien          #+#    #+#             */
/*   Updated: 2024/09/29 18:11:43 by gderrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	char	*copy;
	int		i;

	i = 0;
	copy = (char *)malloc((ft_strlen(str) + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	while (str[i])
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*array;
	int			i;

	i = 0;
	array = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (!array)
		return (NULL);
	while (i < ac)
	{
		array[i].size = ft_strlen(av[i]);
		array[i].str = av[i];
		array[i].copy = ft_strdup(av[i]);
		i++;
	}
	array[i].size = 0;
	array[i].str = 0;
	array[i].copy = 0;
	return (array);
}

// int	main(int argc, char **argv)
// {
// 	t_stock_str *array;
// 	int i;
// 	i = 0;
// 	array = ft_strs_to_tab(argc - 1, argv + 1);
// 	if (!array)
// 		return (1);
// 	while (array[i].str) 
// 	{
// 	printf("Original: %s\n", array[i].str);
// 	printf("Copy: %s\n", array[i].copy);
// 	printf("Size: %d\n", array[i].size);
// 		i++;
// 	}
// 	i = 0;
// 	while (array[i].str)
// 	{
// 		free(array[i].copy);
// 		i++;
// 	}
// 	free(array);
// 	return (0);
// }