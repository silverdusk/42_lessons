/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:39:56 by kmatskev          #+#    #+#             */
/*   Updated: 2024/12/09 12:29:59 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!lst || !del)
	{
		return ;
	}
	while ((*lst) != NULL)
	{
		temp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = temp;
	}
	*lst = NULL;
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
void test_lstclear(void)
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

    // Clear the list
    printf("\nClearing the list...\n");
    ft_lstclear(&list, del_content);

    // Verify the list is empty
    if (list == NULL)
        printf("List cleared successfully.\n");
    else
        printf("List not cleared properly.\n");
}

int main(void)
{
    test_lstclear();
    return 0;
} */
