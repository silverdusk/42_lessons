/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:56:03 by kmatskev          #+#    #+#             */
/*   Updated: 2024/12/09 12:45:39 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
	{
		return ;
	}
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/* #include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Helper function to create a new node with string content
t_list *create_node(const char *str)
{
    char *content = strdup(str); // Dynamically allocate content
    if (!content)
        return NULL;
    return ft_lstnew(content);
}

// Helper function to print a string (for iteration)
void print_content(void *content)
{
    printf("%s ", (char *)content);
}

// Helper function to transform content to uppercase
void to_uppercase(void *content)
{
    char *str = (char *)content;
    for (size_t i = 0; str[i]; i++)
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32; // Convert to uppercase
}

// Helper function to print the linked list
void print_list(t_list *list)
{
    while (list)
    {
        printf("%s -> ", (char *)list->content);
        list = list->next;
    }
    printf("NULL\n");
}

// Test function
void test_lstiter(void)
{
    t_list *list = NULL;

    // Create a list with multiple nodes
    t_list *node1 = create_node("hello");
    t_list *node2 = create_node("world");
    t_list *node3 = create_node("42");

    ft_lstadd_back(&list, node1);
    ft_lstadd_back(&list, node2);
    ft_lstadd_back(&list, node3);

    printf("Original list: ");
    print_list(list);

    // Test 1: Print each content
    printf("\nTest 1: Printing contents using ft_lstiter:\n");
    ft_lstiter(list, print_content);
    printf("\n");

    // Test 2: Transform content to uppercase
    printf("\nTest 2: Transforming contents to uppercase using ft_lstiter:\n");
    ft_lstiter(list, to_uppercase);
    print_list(list);

    // Clean up the list
    ft_lstclear(&list, free);
}

int main(void)
{
    printf("Running tests for ft_lstiter...\n");
    test_lstiter();
    test_edge_cases();
    printf("\nAll tests completed.\n");
    return 0;
} */