/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gderrien <gderrien@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:11:32 by gderrien          #+#    #+#             */
/*   Updated: 2024/10/29 10:11:32 by gderrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* Convertit un entier (int) en chaîne de caractères (char *) avec gestion    */
/* du signe pour les entiers négatifs.                                        */
/* - n : l'entier à convertir                                                 */
/* Retourne un pointeur vers une nouvelle chaîne contenant la représentation  */
/* de n, ou NULL si l'allocation échoue.                                      */
/* ************************************************************************** */
/* NOTES :                                                                    */
/* 1) Converti n en long pour éviter les problèmes de dépassement de signe    */
/*    en cas de minimum d'int (INT_MIN).                                      */
/* 2) Si num est négatif, place le signe '-' en début de chaîne.              */
/* 3) Calcule la longueur nécessaire pour l'allocation avec ft_numlen.        */
/* 4) Remplit la chaîne depuis la fin pour chaque chiffre (modulo 10).        */
/* 5) Ajoute '\0' pour terminer la chaîne et gérer le cas spécial n=0.        */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(long n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		count;
	long	num;
	int		start_index;

	num = (long)n;
	count = ft_numlen(num);
	result = malloc(count + 1);
	if (!result)
		return (NULL);
	result[count] = '\0';
	start_index = 0;
	if (num < 0)
	{
		result[0] = '-';
		num = -num;
		start_index = 1;
	}
	while (count > start_index)
	{
		result[--count] = (num % 10) + '0';
		num /= 10;
	}
	return (result);
}
