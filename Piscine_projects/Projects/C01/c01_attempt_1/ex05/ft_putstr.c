/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 12:27:36 by kmatskev          #+#    #+#             */
/*   Updated: 2024/01/29 19:32:33 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	write(1, str, i);
}

/*
#include <stdio.h>
int	main(void)
{
	char	str1[] = "Hello world!";
	char	str2[] = "";
	char	str3[] = "\n";

	printf("Test with text:\n");
	ft_putstr(str1);
	printf("Test with empty string:\n");
	ft_putstr(str2);
	printf("Test with new line:\n");
	ft_putstr(str3);
}
*/