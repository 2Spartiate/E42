/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gderrien <gderrien@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:27:30 by gderrien          #+#    #+#             */
/*   Updated: 2024/10/17 15:27:30 by gderrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* Convertit la chaîne de caractères str en entier (int).                     */
/* - str : chaîne de caractères à convertir                                   */
/* Ignore les espaces initiaux, puis gère un signe facultatif et              */
/* continue jusqu'à la première occurrence d'un caractère non numérique.      */
/* Retourne l'entier correspondant, ou 0 si aucun chiffre n'est rencontré.    */
/* ************************************************************************** */
/* IMPORTANT :                                                                */
/* 1) On utilise sign = 1 ou -1 pour gérer le signe de l'entier.              */
/* 2) La boucle while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))   */
/* permet d'ignorer les espaces, incluant tabulation et autres blancs.        */
/* 3) str[i] - '0' convertit un caractère en sa valeur numérique.             */
/* 4) Accumule les chiffres dans result en les multipliant par 10.            */
/* 5) return (result * sign) applique le signe avant de retourner le résultat.*/
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i ++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
