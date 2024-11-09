/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karocha- <karocha-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 19:51:30 by karocha-          #+#    #+#             */
/*   Updated: 2024/01/28 16:31:11 by karocha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}

/*int main()
{
//From web to check if correct.
char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *p_alp;
p_alp = alpha;

char special[] = "ABC abc áéíóú àèìòù âêîôû äëïöü \'\"(){}[]!?@#$&* wxyz WXYZ";
char *p_spe;
p_spe = special;

char empty[] = "";
char *p_emp;
p_emp = empty;

printf("-----\n1 = String contains only alphabetical chars
\n0 = String doesn't contain only alphabetical chars\n\n");
printf("%s = %d\n", alpha, ft_str_is_alpha(p_alp));
printf("%s = %d\n", special, ft_str_is_alpha(p_spe));
printf("Empty = %d\n-----\n", ft_str_is_alpha(p_emp));


return (0);
}*/
