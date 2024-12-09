/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 20:14:36 by kmatskev          #+#    #+#             */
/*   Updated: 2024/12/09 13:19:34 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	unsigned int	i;

	if (!lst)
	{
		return (0);
	}
	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

/* #include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

// Helper function to create a new node with string content
t_list *create_node(const char *str)
{
    char *content = strdup(str); // Dynamically allocate content
    if (!content)
        return NULL;
    return ft_lstnew(content);
}

// Helper function to free content
void del_content(void *content)
{
    free(content);
}

// Test function for ft_lstsize
void test_lstsize(void)
{
    t_list *list = NULL;

    // Test 1: Empty list
    printf("Test 1: Empty list\n");
    int size = ft_lstsize(list);
    if (size == 0)
        printf("Result: Size is 0 (as expected)\n");
    else
        printf("Test failed: Expected size 0, got %d\n", size);

    // Test 2: Single node list
    printf("\nTest 2: Single node list\n");
    t_list *node1 = create_node("Node 1");
    ft_lstadd_back(&list, node1);
    size = ft_lstsize(list);
    if (size == 1)
        printf("Result: Size is 1 (as expected)\n");
    else
        printf("Test failed: Expected size 1, got %d\n", size);

    // Test 3: List with multiple nodes
    printf("\nTest 3: List with multiple nodes\n");
    t_list *node2 = create_node("Node 2");
    t_list *node3 = create_node("Node 3");
    ft_lstadd_back(&list, node2);
    ft_lstadd_back(&list, node3);
    size = ft_lstsize(list);
    if (size == 3)
        printf("Result: Size is 3 (as expected)\n");
    else
        printf("Test failed: Expected size 3, got %d\n", size);

    // Clean up
    ft_lstclear(&list, del_content);
    printf("\nAll tests completed.\n");
}

int main(void)
{
    printf("Running tests for ft_lstsize...\n");
    test_lstsize();
    return 0;
} */