/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 18:12:36 by psimoes           #+#    #+#             */
/*   Updated: 2024/02/13 20:46:05 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		count;
	char	*dest;

	if (size == 0)
		return ("");
	dest = (char *)malloc(sizeof(strs));
	count = 0;
	i = -1;
	while (++i < size)
	{
		j = -1;
		while (strs[i][++j] != '\0')
			dest[count++] = strs[i][j];
		j = -1;
		while (sep[++j] != '\0' && i < size - 1)
			dest[count++] = sep[j];
	}
	dest[count] = '\0';
	return (dest);
}

int	main(void)
{
	char	*strs[4];

	strs[0] = "This";
	strs[1] = "is";
	strs[2] = "a";
	strs[3] = "test!";
	printf("%s\n", ft_strjoin(0, strs, " q"));
	return (0);
}

