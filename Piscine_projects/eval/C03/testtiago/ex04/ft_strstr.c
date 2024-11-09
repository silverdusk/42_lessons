/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:27:24 by tiagosan          #+#    #+#             */
/*   Updated: 2024/02/03 20:36:31 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	*ft_strstr(char *str, char *tofind)
{
	char	*return_ptr;
	int		i;

	if (*tofind == '\0')
		return (str);
	while (*str != '\0')
	{
		return_ptr = str;
		i = 0;
		while (*str == tofind[i] && *str != '\0')
		{
			str++;
			i++;
		}
		if (tofind[i] == '\0')
			return (return_ptr);
		str = return_ptr;
		str++;
	}
	return (0);
}

#include <stdio.h>
int main(){
	char str[] = "42 1337 Network 2021 piscine Benguerir Khouribga";
	char find[] = "";
	printf("%s", ft_strstr(str, find));
}
