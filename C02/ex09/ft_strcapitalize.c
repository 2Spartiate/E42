/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gderrien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:18:52 by gderrien          #+#    #+#             */
/*   Updated: 2024/09/17 12:18:54 by gderrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

int	is_lower(char c)
{
	if ((c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

int	is_upper(char c)
{
	if ((c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

int	is_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = 0;
	new_word = 1;
	while (str[i])
	{
		if (is_num(str[i]) || is_alpha(str[i]))
		{
			if (new_word && is_lower(str[i]))
				str[i] -= 32;
			else if (!new_word && is_upper(str[i]))
				str[i] += 32;
			new_word = 0;
		}
		else
			new_word = 1;
		i++;
	}
	return (str);
}
