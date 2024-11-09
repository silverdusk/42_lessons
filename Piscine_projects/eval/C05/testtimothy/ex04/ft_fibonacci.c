/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 16:48:54 by thopgood          #+#    #+#             */
/*   Updated: 2024/02/04 14:26:15 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Create a function ft_fibonacci that returns the n-th element of the Fibonacci
sequence,
	the first element being at the 0 index. We’ll consider that the Fibonacci
sequence starts like this: 0, 1, 1, 2.
Overflows must not be handled, the function return will be undefined.
Here’s how it should be prototyped :
int	ft_fibonacci(int index);
Obviously, ft_fibonacci has to be recursive.
If the index is less than 0, the function should return -1

*/

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index <= 1)
		return (index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

 #include <stdio.h>

int	main(void)
{
	for (int i = -2; i < 20; i++)
		printf("%d index -> %d\n", i, ft_fibonacci(i));
} 