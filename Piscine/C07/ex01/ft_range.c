/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gderrien <gaetan.derrien@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:34:00 by gderrien          #+#    #+#             */
/*   Updated: 2024/09/25 10:50:00 by gderrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*buffer;
	int	index;

	if (min >= max)
		return (NULL);
	range = max - min;
	buffer = malloc(range * sizeof(int));
	if (!buffer)
		return (NULL);
	index = 0;
	while (index < range)
	{
		buffer[index] = min + index;
		index++;
	}
	return (buffer);
}
