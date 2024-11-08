/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gderrien <gderrien@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:10:28 by gderrien          #+#    #+#             */
/*   Updated: 2024/10/17 13:10:28 by gderrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* Recherche la première occurrence du caractère c dans les n premiers        */
/* octets de la zone mémoire pointée par s.                                   */
/* - s : pointeur vers la zone mémoire à parcourir                            */
/* - c : caractère à rechercher, converti en unsigned char                    */
/* - n : nombre d'octets à examiner                                           */
/* Retourne pointeur vers l'octet correspondant, ou NULL si c non trouvé.     */
/* ************************************************************************** */
/* version simplifiée de strnstr, car recherche par caractère sans gestion    */
/* des fins de chaines terminées par '\0'                                     */
/* ************************************************************************** */
/* IMPORTANT:                                                                 */
/* 1) toute manipulation de pointeur necessite la creation d'un nouveau       */
/* pointeur si le prototype est un void *                                     */
/* 2) toute manipulation d'octets, ascii ou non, peut etre faite              */
/* malgre tout en specifiant un (char)                                        */
/* 3) il faut egalement s''assurer, lorsquon travaille avec des octets,       */
/* que la valeur recue en int, si elle est negative, soit convertie en        */
/* unsigned char (valeur absolue)                                             */
/* 4) while (n--) <= tant que lon peut decrementer n sans atteindre 0         */
/* 5) return (void *)ptr; <== on re-specifie (cast) le nouveau pointeur       */
/* en void avant de le retourner pour se conformer au prototype               */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	uc;

	ptr = (unsigned char *)s;
	uc = (unsigned char)c;
	while (n--)
	{
		if (*ptr == uc)
			return ((void *)ptr);
		ptr++;
	}
	return (NULL);
}
