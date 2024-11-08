/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gderrien <gaetan.derrien@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 09:31:21 by gderrien          #+#    #+#             */
/*   Updated: 2024/09/17 10:27:51 by gderrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				swap = tab [i];
				tab[i] = tab [i + 1];
				tab [i + 1] = swap;
			}
			i++;
		}
		size--;
	}
}
//
//int	main(void)
//{
//	int		tab[6];
//	int		size;
//	int		j;
//	char	affich;
//
//	tab[0] = 7;
//	tab[1] = 6;
//	tab[2] = 3;
//	tab[3] = 4;
//	tab[4] = 2;
//	tab[5] = 5;
//	size = 6;
//	ft_sort_int_tab(tab, size);
//	j = 0;
//	while (j < size)
//	{
//		affich = tab[j] + '0';
//		write(1, &affich, 1);
//		if (j < size - 1)
//		{
//			write(1, ", ", 2);
//		}
//		j++;
//	}
//	write(1, "\n", 1);
//	return (0);
//}