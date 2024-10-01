/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gderrien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:25:39 by gderrien          #+#    #+#             */
/*   Updated: 2024/09/26 17:44:52 by gderrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C08_EX01_FT_BOOLEAN_H
#define C08_EX01_FT_BOOLEAN_H

#include <unistd.h>
#define TRUE 1
#define FALSE 0
#define EVEN_MSG "I have an even number of arguments.\n"
#define ODD_MSG "I have an odd number of arguments.\n"
#define SUCCESS 0
#define EVEN(n) (n % 2 == 0)

typedef int	t_bool;

#endif