/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 12:43:58 by ptelo-de          #+#    #+#             */
/*   Updated: 2024/02/03 17:14:01 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	strlen;
	int	i;

	strlen = 0;
	i = 0;
	while (str[i] != '\0')
	{
		strlen++;
		i++;
	}
	return (strlen);
}

#include <stdio.h>
int main(void)
{
	char *string;
	string = "lol12";
	printf("%d", ft_strlen(string));
}

