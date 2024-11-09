/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 20:06:40 by kmatskev          #+#    #+#             */
/*   Updated: 2024/02/12 15:09:45 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_strsize(int size, char **strs)
{
	int	strsize;
	int	i;

	strsize = 0;
	i = 0;
	while (i < size)
	{
		strsize += ft_strlen(strs[i]);
		i++;
	}
	return (strsize);
}

int	ft_nearrsize(int size, char **strs, char *sep)
{
	int	sepsize;
	int	strsize;

	sepsize = ft_strlen(sep);
	strsize = ft_strsize(size, strs);
	return (strsize + (sepsize * (size - 1)) + 1);
}

void	ft_appendstr(char *newarr, long *index, char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		newarr[(*index)++] = str[i++];
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*empstr;
	char	*newarr;
	long	index;
	int		i;

	if (size == 0)
	{
		empstr = (char *)malloc(1);
		empstr[0] = '\0';
		return (empstr);
	}
	newarr = (char *)malloc((ft_nearrsize(size, strs, sep)) * sizeof(char) + 1);
	index = 0;
	i = 0;
	while (i < size)
	{
		ft_appendstr(newarr, &index, strs[i]);
		if (i < size - 1)
		{
			ft_appendstr(newarr, &index, sep);
		}
		i++;
	}
	newarr[index] = '\0';
	return (newarr);
}

// #include <stdio.h>
// int main(void)
// {
// 	char *strs[] = {"Hello", "World!"};
// 	char sep[] = "...";
// 	int size = 2;
// 	char *result = ft_strjoin(size, strs, sep);
// 	printf("%s\n", result);
// 	return(0);
// }