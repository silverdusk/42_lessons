/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourlot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 16:47:32 by hbourlot          #+#    #+#             */
/*   Updated: 2024/01/24 17:09:54 by hbourlot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)

{
	char	variavel;

	variavel = 'a';
	while (variavel >= 'a' && variavel <= 'z')
	{
		write(1, &variavel, 1);
		variavel++;
	}
}
// int main(){
// 	ft_print_alphabet();
// }
