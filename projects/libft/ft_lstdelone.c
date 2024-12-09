/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:24:12 by kmatskev          #+#    #+#             */
/*   Updated: 2024/12/09 12:43:37 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
	{
		return ;
	}
	del(lst->content);
	free(lst);
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
void test_lstdelone(void)
{
    t_list *list = NULL;

    // Create a list with multiple nodes
    t_list *node1 = create_node("Hello");
    t_list *node2 = create_node("World");
    t_list *node3 = create_node("42");

    ft_lstadd_back(&list, node1);
    ft_lstadd_back(&list, node2);
    ft_lstadd_back(&list, node3);

    printf("Initial list: ");
    print_list(list);

    // Remove the second node ("World")
    printf("\nDeleting the second node ('World')...\n");
    t_list *node_to_delete = node1->next; // Get the second node
    node1->next = node_to_delete->next;  // Skip over the deleted node
    ft_lstdelone(node_to_delete, del_content);

    printf("List after deletion: ");
    print_list(list);

    // Clean up the remaining list
    ft_lstclear(&list, del_content);
}

int main(void)
{
    printf("Running test for ft_lstdelone...\n");
    test_lstdelone();
    printf("Test completed.\n");
    return 0;
} */