/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gderrien <gderrien@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:11:32 by gderrien          #+#    #+#             */
/*   Updated: 2024/10/31 10:11:32 by gderrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*									NOTES:                                    */
/* ************************************************************************** */
/* ft_striteri applique une fonction à chaque caractère d'une chaine          */
/* Cette fonction prend en parametre l'indice du caractère à traiter et       */
/* son pointeur pour traitement "à chaud" sur pointeur                        */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i ++;
	}
}
