/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gderrien <gaetan.derrien@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:11:24 by gderrien          #+#    #+#             */
/*   Updated: 2024/09/23 11:48:59 by gderrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length])
	{
		length++;
	}
	return (length);
}

int	ft_is_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_length;
	long	number;

	if (!ft_is_valid_base(base))
		return ;
	base_length = ft_strlen(base);
	number = nbr;
	if (number < 0)
	{
		write(1, "-", 1);
		number = -number;
	}
	if (number >= base_length)
	{
		ft_putnbr_base(number / base_length, base);
	}
	write(1, &base[number % base_length], 1);
}

/*
int main() {
    ft_putnbr_base(42, "0123456789"); // Affiche 42
    write(1, "\n", 1);
    ft_putnbr_base(-42, "0123456789"); // Affiche -42
    write(1, "\n", 1);
    ft_putnbr_base(42, "01"); // Affiche 101010
    write(1, "\n", 1);
    ft_putnbr_base(42, "0123456789ABCDEF"); // Affiche 2A
    write(1, "\n", 1);
    ft_putnbr_base(42, "poneyvif"); // Affiche vn
    write(1, "\n", 1);
    ft_putnbr_base(42, "pon+eyvif"); // Ne fait rien (base invalide)
    write(1, "\n", 1);
    return 0;
}
*/