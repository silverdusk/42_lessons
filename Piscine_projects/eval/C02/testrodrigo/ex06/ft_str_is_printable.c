/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 11:13:39 by rmateus-          #+#    #+#             */
/*   Updated: 2024/02/03 14:26:04 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 32 && str[a] <= 126)
			a++;
		else
			return (0);
	}
	return (1);
}

#include <stdio.h>

int main(void)
{
    char	str1[] = "Hello, World!";
    char	str2[] = "Hi\t\t";
    char	str3[] = "";

    printf("%s: %d\n", str1, ft_str_is_printable(str1));
    printf("%s: %d\n", str2, ft_str_is_printable(str2));
    printf("%s: %d\n", str3, ft_str_is_printable(str3));

    return 0;
}
