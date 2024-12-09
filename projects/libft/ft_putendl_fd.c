/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:59:55 by kmatskev          #+#    #+#             */
/*   Updated: 2024/12/09 14:04:37 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{
		ft_putstr_fd(s, fd);
		ft_putchar_fd('\n', fd);
	}
}

/* #include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

// Test function for ft_putendl_fd
void test_putendl_fd(void)
{
    printf("Running tests for ft_putendl_fd...\n");

    // Test 1: Write to standard output (fd = 1)
    printf("Test 1: Writing to standard output (fd = 1):\n");
    ft_putendl_fd("Hello, World!", 1); // "Hello, World!\n"
    printf("\n");

    // Test 2: Write to standard error (fd = 2)
    printf("Test 2: Writing to standard error (fd = 2):\n");
    ft_putendl_fd("Error message", 2); // "Error message\n" to stderr
    printf("\n");

    // Test 3: Write to a file
    printf("Test 3: Writing to a file (fd = file descriptor):\n");
    int fd = open("test_output.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
    if (fd == -1)
    {
        perror("Failed to open file");
        return;
    }
    ft_putendl_fd("File output test", fd); // "File output test\n"
    close(fd);
    printf("Check the contents of 'test_output.txt'.\n");

    // Test 4: NULL string
    printf("Test 4: Passing a NULL string:\n");
    ft_putendl_fd(NULL, 1); // Should not print anything or crash

    printf("All tests completed.\n");
}

int main(void)
{
    test_putendl_fd();
    return 0;
} */