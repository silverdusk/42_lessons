/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 20:44:38 by kmatskev          #+#    #+#             */
/*   Updated: 2024/12/09 12:53:52 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
	{
		return (NULL);
	}
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
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

void test_lstlast(void)
{
    t_list *list = NULL;

    // Test 1: Empty list
    printf("Test 1: Empty list\n");
    t_list *last = ft_lstlast(list);
    if (last == NULL)
        printf("Result: NULL (as expected)\n");
    else
        printf("Error: Expected NULL, got something else\n");

    // Create a list with multiple nodes
    t_list *node1 = create_node("Hello");
    t_list *node2 = create_node("World");
    t_list *node3 = create_node("42");

    ft_lstadd_back(&list, node1);
    ft_lstadd_back(&list, node2);
    ft_lstadd_back(&list, node3);

    // Print the list
    printf("\nList: ");
    print_list(list);

    // Test 2: Non-empty list
    printf("\nTest 2: Non-empty list\n");
    last = ft_lstlast(list);
    if (last != NULL)
        printf("Result: %s (as expected)\n", (char *)last->content);
    else
        printf("Error: Expected '42', got NULL\n");

    // Test 3: Single node list
    printf("\nTest 3: Single node list\n");
    t_list *single_node = create_node("Single");
    last = ft_lstlast(single_node);
    if (last != NULL)
        printf("Result: %s (as expected)\n", (char *)last->content);
    else
        printf("Error: Expected 'Single', got NULL\n");

    // Clean up
    ft_lstclear(&list, free);
    ft_lstclear(&single_node, free);
}

int main(void)
{
    printf("Running tests for ft_lstlast...\n");
    test_lstlast();
    printf("\nAll tests completed.\n");
    return 0;
} */