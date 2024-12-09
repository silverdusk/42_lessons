/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 14:03:07 by kmatskev          #+#    #+#             */
/*   Updated: 2024/12/09 14:07:44 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nbr;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = (unsigned int)(-n);
	}
	else
		nbr = (unsigned int)n;
	if (nbr >= 10)
		ft_putnbr_fd(nbr / 10, fd);
	ft_putchar_fd((char)(nbr % 10 + '0'), fd);
}

/* #include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

// Helper function to test ft_putnbr_fd
void test_putnbr_fd(const char *test_name, int n, int fd)
{
    printf("Test: %s\n", test_name);
    printf("Input number: %d\nOutput: ", n);
    ft_putnbr_fd(n, fd);
    printf("\n\n");
}

// Test function for ft_putnbr_fd
void run_putnbr_fd_tests(void)
{
    printf("Running tests for ft_putnbr_fd...\n");

    // Test 1: Positive number
    test_putnbr_fd("Positive number", 12345, 1);

    // Test 2: Negative number
    test_putnbr_fd("Negative number", -67890, 1);

    // Test 3: Zero
    test_putnbr_fd("Zero", 0, 1);

    // Test 4: Largest positive int
    test_putnbr_fd("Largest positive int", 2147483647, 1);

    // Test 5: Smallest negative int
    test_putnbr_fd("Smallest negative int", -2147483648, 1);

    // Test 6: Write to standard error
    printf("Test: Writing to standard error (fd = 2):\n");
    ft_putnbr_fd(42, 2);
    printf("\n\n");

    // Test 7: Write to a file
    printf("Test: Writing to a file (fd = file descriptor):\n");
    int fd = open("test_output.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
    if (fd == -1)
    {
        perror("Failed to open file");
        return;
    }
    ft_putnbr_fd(12345, fd);
    close(fd);
    printf("Check the contents of 'test_output.txt'.\n");

    printf("All tests completed.\n");
}

int main(void)
{
    run_putnbr_fd_tests();
    return 0;
} */