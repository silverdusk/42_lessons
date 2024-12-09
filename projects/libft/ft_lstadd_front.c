/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 19:48:04 by kmatskev          #+#    #+#             */
/*   Updated: 2024/12/09 12:27:27 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
	{
		return ;
	}
	new->next = *lst;
	*lst = new;
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
void test_lstadd_front(void)
{
    t_list *list = NULL;
    t_list *node1 = create_node("World");
    t_list *node2 = create_node("Hello");
    t_list *node3 = create_node("42");

    // Test 1: Add a node to an empty list
    printf("Test 1: Add to empty list\n");
	printf("Expected result: World -> NULL\n");
    ft_lstadd_front(&list, node1);
    print_list(list);

    // Test 2: Add a second node to the front
    printf("\nTest 2: Add second node to front\n");
	printf("Expected result: Hello -> World -> NULLL\n");
    ft_lstadd_front(&list, node2);
    print_list(list);

    // Test 3: Add a third node to the front
    printf("\nTest 3: Add third node to front\n");
	printf("Expected result: 42 -> Hello -> World -> NULL\n");
    ft_lstadd_front(&list, node3);
    print_list(list);

    // Clean up the list
    ft_lstclear(&list, del_content);
}

int main(void)
{
    test_lstadd_front();
    return 0;
} */