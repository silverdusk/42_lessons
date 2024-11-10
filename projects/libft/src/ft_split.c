/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <matskevich.ke@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:19:54 by kmatskev          #+#    #+#             */
/*   Updated: 2024/11/10 20:40:59 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_char_check(char c)
{
	if ((c == ' ') || (c >= '\t' && c <= '\r'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

static int	ft_strlen(char *str)
{
	unsigned int	size;

	size = 0;
	while (*str)
	{
		if (ft_char_check(*str))
		{
			str++;
		}
		else
		{
			size++;
			while (*str && !ft_char_check(*str))
			{
				str++;
			}
		}
	}
	return (size);
}

char	**ft_split(char *str)
{
	char	**newarr;
	int		i;
	int		j;
	int		k;
	int		space_len;

	i = 0;
	j = 0;
	space_len = 0;
	if (!(newarr = malloc((ft_strlen(str)) * sizeof( char*) + 1)))
	{
		return (0);
	}
	while (str[i] && j < ft_strlen(str))
	{
		while (str[i] && ft_char_check(str[i]))
		{
			i++;
		}
		while (str[i] && !ft_char_check(str[i]))
		{
			space_len++;
			i++;
		}
		if (!(newarr[j] = malloc((space_len * sizeof(char)) + 1)))
		{
			return (0);
		}
		k = 0;
		while (space_len)
		{
			newarr[j][k++] = str[i - space_len--];
		}
		newarr[j++][k] = '\0';
	}
	return (newarr);
}
