/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirao-m <rgirao-m@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 10:55:06 by rgirao-m          #+#    #+#             */
/*   Updated: 2024/02/13 09:45:48 by rgirao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		rep;
	int		idx;
	char	*tmp;
	int		count;

	count = 0;
	while (tab[count])
		++count;
	rep = 0;
	while (rep < count)
	{
		idx = 0;
		while (idx + 1 < count)
		{
			if (cmp(tab[idx], tab[idx + 1]) > 0)
			{
				tmp = tab[idx];
				tab[idx] = tab[idx + 1];
				tab[idx + 1] = tmp;
			}
			idx++;
		}
		rep++;
	}
}
