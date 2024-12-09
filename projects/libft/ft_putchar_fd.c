/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:44:56 by kmatskev          #+#    #+#             */
/*   Updated: 2024/12/09 14:00:44 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/* #include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

// Test function for ft_putchar_fd
void test_putchar_fd(void)
{
    printf("Running tests for ft_putchar_fd...\n");

    // Test 1: Write to standard output (fd = 1)
    printf("Test 1: Writing to standard output (fd = 1):\n");
    ft_putchar_fd('A', 1); // Should print 'A' to the terminal
    printf("\n");

    // Test 2: Write to standard error (fd = 2)
    printf("Test 2: Writing to standard error (fd = 2):\n");
    ft_putchar_fd('B', 2); // Should print 'B' to the terminal's error stream
    printf("\n");

    // Test 3: Write to a file
    printf("Test 3: Writing to a file (fd = file descriptor):\n");
    int fd = open("test_output.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
    if (fd == -1)
    {
        perror("Failed to open file");
        return;
    }
    ft_putchar_fd('C', fd); // Should write 'C' to the file
    close(fd);
    printf("Check the contents of 'test_output.txt'.\n");

    printf("All tests completed.\n");
}

int main(void)
{
    test_putchar_fd();
    return 0;
} */