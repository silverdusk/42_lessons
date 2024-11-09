/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 17:40:42 by tlopes-p          #+#    #+#             */
/*   Updated: 2024/02/10 20:12:27 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

long	ft_strlen(char *str)
{
	long	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

long	ft_lenstrs(int size, char **strs, char *sep)
{
	long	i;
	long	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	len += ft_strlen(sep) * (size - 1);
	return (len);
}

int	ft_strcpy(char *dest, char *src, int init)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[init + i] = src[i];
		i++;
	}
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*join;
	long	i;
	int		sizeaux;

	if (size <= 0)
		return ((char *)malloc(sizeof(char)));
	join = (char *) malloc(sizeof(char) * (ft_lenstrs(size, strs, sep) + 1));
	if (!join)
		return (NULL);
	i = 0;
	sizeaux = 0;
	while (sizeaux < size)
	{
		i = i + ft_strcpy(join, strs[sizeaux], i);
		sizeaux++;
		if (sizeaux < size)
			i = i + ft_strcpy(join, sep, i);
		else if (sizeaux == size)
		{
			i++;
			join[i] = '\0';
		}
	}
	return (join);
}


/* int	main(int argc, char **argv)
{
	char	**strs;
	char	*str;

	(void)argc;
	(void)argv;
	strs = (char**)malloc(sizeof(strs) * 5);
	strs[0] = "Chopin";
	strs[1] = "000";
	strs[2] = "Mahler";
	strs[3] = "2323";
	strs[4] = "Beethoven";

	str = ft_strjoin(5, strs, ", ");
	printf("%s.\n", str);
	free(str);
	free(strs);
} */

#include <stdio.h>
int main(void)
{
	char *strs[] = {"Hello", "World!"};
	char sep[] = "...";
	int size = 2;
	char *result = ft_strjoin(size, strs, sep);
	printf("%s\n", result);
	return(0);
}
