/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gderrien <gderrien@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:11:32 by gderrien          #+#    #+#             */
/*   Updated: 2024/10/28 16:11:32 by gderrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*                                    NOTES:                                  */
/* ************************************************************************** */
/* 1) ft_count_words détermine le nombre de mots séparés par `sep`,           */
/*    utilisé pour allouer le tableau de chaînes.                             */
/* ************************************************************************** */
/* 2) ft_allocate_words extrait chaque mot avec ft_substr et le place dans    */
/*    le tableau `tab`. En cas d'échec d'allocation, ft_free_tab libère       */
/*    les éléments déjà alloués pour éviter les fuites.                       */
/* ************************************************************************** */
/* 3) ft_split alloue `new` pour les mots et utilise ft_allocate_words        */
/*    pour remplir le tableau. Retourne NULL si une allocation échoue.        */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free_tab(char **tab, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

static int	ft_count_words(char const *s, char sep)
{
	int	word_count;

	word_count = 0;
	while (*s)
	{
		while (*s == sep)
			++s;
		if (*s)
			++word_count;
		while (*s && *s != sep)
			++s;
	}
	return (word_count);
}

static int	ft_allocate_words(char **tab, char const *s, char sep)
{
	char const	*word_start;
	int			i;

	i = 0;
	while (*s)
	{
		while (*s == sep)
			++s;
		word_start = s;
		while (*s && *s != sep)
			++s;
		if (s > word_start)
		{
			tab[i] = ft_substr(word_start, 0, s - word_start);
			if (!tab[i])
			{
				ft_free_tab(tab, i);
				return (0);
			}
			i++;
		}
	}
	tab[i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	int		word_count;

	if (!s)
		return (NULL);
	word_count = ft_count_words(s, c);
	new = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!new)
		return (NULL);
	if (!ft_allocate_words(new, s, c))
		return (NULL);
	return (new);
}
