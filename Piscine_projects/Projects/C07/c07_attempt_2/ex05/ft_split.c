/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:19:54 by kmatskev          #+#    #+#             */
/*   Updated: 2024/02/15 14:25:42 by kmatskev         ###   ########.fr       */
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
		return(0);
	}
}

int ft_string_count(char *str, char *charset)
{
	
}

static int	ft_strlen(char *str)
{
	unsigned int size;

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
	return(size);
}

// int ft_new_arr_size(char *str, char *charset)
// {
// 	int size;

// 	size = ft_strlen(str) + ft_strlen(charset);
// 	return (size);
// }

char	**ft_split(char *str, char *charset)
{
	char	**newarr;
	int	i;
	int j;
	int k;
	int space_len;

	i = 0;
	j = 0;
	space_len = 0;
	if (!(newarr = malloc((ft_strlen(str)) * sizeof(char*) + 1)))
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