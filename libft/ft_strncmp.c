/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gderrien <gderrien@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:58:20 by gderrien          #+#    #+#             */
/*   Updated: 2024/11/07 16:58:20 by gderrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* NOTES:                                                                     */
/* ************************************************************************** */
/* 1) Compare les chaînes s1 et s2 jusqu'à n caractères ou jusqu'à rencontrer */
/*    un caractère nul dans l'une des chaînes.                                */
/* 2) Retourne la différence entre les premiers caractères différents,        */
/*    convertis en unsigned char, ou 0 si les chaînes sont égales sur n chars.*/
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
