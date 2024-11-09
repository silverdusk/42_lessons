/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirao-m <rgirao-m@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 10:55:06 by rgirao-m          #+#    #+#             */
/*   Updated: 2024/02/13 09:46:03 by rgirao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length])
	{
		length++;
	}
	return (length);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	diff;

	while (*s1 != '\0')
	{
		diff = (*s1) - (*s2);
		if (diff)
		{
			return (diff);
		}
		s1++;
		s2++;
	}
	return ((*s1) - (*s2));
}

void	ft_sort_string_tab(char **tab)
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
			if (ft_strcmp(tab[idx], tab[idx + 1]) > 0)
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
