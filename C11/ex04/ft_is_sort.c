/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gderrien <gaetan.derrien@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 10:32:14 by gderrien          #+#    #+#             */
/*   Updated: 2024/10/02 11:19:58 by gderrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	croissant;
	int	decroissant;

	croissant = 1;
	decroissant = 1;
	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			croissant = 0;
		if (f(tab[i], tab[i + 1]) < 0)
			decroissant = 0;
		i++;
	}
	return (croissant || decroissant);
}
