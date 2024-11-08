/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gderrien <gderrien@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:11:32 by gderrien          #+#    #+#             */
/*   Updated: 2024/10/31 10:11:32 by gderrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*									NOTES:                                    */
/* ************************************************************************** */
/* écrire un caractère dans un fichier déjà ouvert, fd étant le descripteur   */
/* comme la chaine est transmise en pointeur, on vérifie si *s est non-null   */
/* on rajoute un saut de ligne en plus                                        */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i] != '\0')
	{
		write (fd, &s[i], 1);
		i ++;
	}
	write (fd, "\n", 1);
}
