/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:54:00 by kmatskev          #+#    #+#             */
/*   Updated: 2024/12/09 14:09:48 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}

/* #include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

// Helper function to test ft_putstr_fd
void test_putstr_fd(const char *test_name, char *s, int fd)
{
    printf("Test: %s\n", test_name);
    printf("Input string: %s\nOutput: ", s ? s : "NULL");
    ft_putstr_fd(s, fd);
    printf("\n\n");
}

// Test function for ft_putstr_fd
void run_putstr_fd_tests(void)
{
    printf("Running tests for ft_putstr_fd...\n");

    // Test 1: Normal string to standard output
    test_putstr_fd("Normal string to stdout", "Hello, World!", 1);

    // Test 2: Empty string
    test_putstr_fd("Empty string", "", 1);

    // Test 3: NULL string
    test_putstr_fd("NULL string", NULL, 1);

    // Test 4: Write to standard error
    printf("Test: Writing to standard error (fd = 2):\n");
    ft_putstr_fd("Error message", 2);
    printf("\n\n");

    // Test 5: Write to a file
    printf("Test: Writing to a file (fd = file descriptor):\n");
    int fd = open("test_output.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
    if (fd == -1)
    {
        perror("Failed to open file");
        return;
    }
    ft_putstr_fd("File output test", fd);
    close(fd);
    printf("Check the contents of 'test_output.txt'.\n");

    printf("All tests completed.\n");
}

int main(void)
{
    run_putstr_fd_tests();
    return 0;
} */