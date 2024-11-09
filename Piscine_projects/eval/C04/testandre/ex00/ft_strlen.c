/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:41:32 by adavid-s          #+#    #+#             */
/*   Updated: 2024/02/10 18:19:39 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}

int	main(void)
{
	char	str[] = "";
	size_t	comprimento;

	comprimento = ft_strlen(str);
	printf("O comprimento da string é: %zu\n", comprimento);
	return (0);
}
