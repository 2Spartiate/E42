/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gderrien <gderrien@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:11:32 by gderrien          #+#    #+#             */
/*   Updated: 2024/11/07 10:11:32 by gderrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*                                  NOTES:                                    */
/* ************************************************************************** */
/* Cette fonction écrit l'entier n dans le descripteur de fichier fd.         */
/* Elle évite toute allocation dynamique en générant directement chaque       */
/* caractère du nombre à partir de ses chiffres.                              */
/* - Si n est négatif, elle écrit le signe '-' et inverse n pour continuer.   */
/* - Si n est le minimum des entiers, il est traité directement (-2147483648) */
/* La récursivité permet d'obtenir chaque chiffre dans le bon ordre.          */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	c = (n % 10) + '0';
	write(fd, &c, 1);
}
