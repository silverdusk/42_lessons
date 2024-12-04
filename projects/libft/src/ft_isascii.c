/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <matskevich.ke@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 20:44:53 by kmatskev          #+#    #+#             */
/*   Updated: 2024/11/18 20:53:23 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
