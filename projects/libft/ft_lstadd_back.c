/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 21:30:49 by kmatskev          #+#    #+#             */
/*   Updated: 2024/12/09 12:23:29 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
	{
		return ;
	}
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
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

// Helper function to free content
void del_content(void *content)
{
    free(content);
}

// Test function
void test_lstadd_back(void)
{
    t_list *list = NULL;
    t_list *node1 = create_node("Hello");
    t_list *node2 = create_node("World");
    t_list *node3 = create_node("42");

    // Test 1: Add a node to an empty list
    printf("Test 1: Add to empty list\n");
	printf("Expected result: Hello -> NULL\n");
    ft_lstadd_back(&list, node1);
    print_list(list);

    // Test 2: Add a second node
    printf("\nTest 2: Add second node\n");
	printf("Expected result: Hello -> World -> NULL\n");
    ft_lstadd_back(&list, node2);
    print_list(list);

    // Test 3: Add a third node
	printf("Expected result: Hello -> World -> 42 -> NULL\n");
    printf("\nTest 3: Add third node\n");
	
    ft_lstadd_back(&list, node3);
    print_list(list);

    // Clean up the list
    ft_lstclear(&list, del_content);
}

int main(void)
{
    test_lstadd_back();
    return 0;
} */