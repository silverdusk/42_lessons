/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:39:46 by kmatskev          #+#    #+#             */
/*   Updated: 2024/12/09 13:16:48 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
	{
		return (NULL);
	}
	new->content = content;
	new->next = NULL;
	return (new);
}

/* #include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Helper function to free content
void del_content(void *content)
{
    free(content);
}

// Test function for ft_lstnew
void test_lstnew(void)
{
    printf("Running tests for ft_lstnew...\n");

    // Test 1: Create a node with valid content
    char *content1 = strdup("Hello, World!");
    t_list *node1 = ft_lstnew(content1);
    if (node1 && node1->content == content1 && node1->next == NULL)
        printf("Test1 passed:\n");
		printf("Node created with content '%s'\n", (char *)node1->content");
    else
        printf("Test1 failed: Node not created correctly\n");

    // Clean up node1
    if (node1)
    {
        free(node1->content);
        free(node1);
    }

    // Test 2: Create a node with NULL content
    t_list *node2 = ft_lstnew(NULL);
    if (node2 && node2->content == NULL && node2->next == NULL)
        printf("Test 2 passed: Node created with NULL content\n");
    else
        printf("Test 2 failed: Node not created correctly\n");

    // Clean up node2
    if (node2)
        free(node2);

    printf("All tests completed.\n");
}

int main(void)
{
    test_lstnew();
    return 0;
} */