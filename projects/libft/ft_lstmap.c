/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 21:01:44 by kmatskev          #+#    #+#             */
/*   Updated: 2024/12/09 13:04:11 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void *))
{
	t_list	*first;
	t_list	*new;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	first = NULL;
	new_content = NULL;
	while (lst)
	{
		new_content = (*f)(lst->content);
		new = ft_lstnew(new_content);
		if (!new)
		{
			if (new_content)
				(*del)(new_content);
			ft_lstclear(&first, del);
			return (NULL);
		}
		ft_lstadd_back(&first, new);
		lst = lst->next;
	}
	return (first);
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

// Helper function to transform content to uppercase
void *to_uppercase(void *content)
{
    char *str = strdup((char *)content); // Create a new string
    if (!str)
        return NULL;
    for (size_t i = 0; str[i]; i++)
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32; // Convert to uppercase
    return str;
}

// Helper function to free content
void del_content(void *content)
{
    free(content);
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
void test_lstmap(void)
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

    // Map the list to transform content to uppercase
    printf("\nMapping the list to uppercase...\n");
    t_list *mapped_list = ft_lstmap(list, to_uppercase, del_content);

    printf("Mapped list: ");
    print_list(mapped_list);

    // Clean up both lists
    ft_lstclear(&list, del_content);
    ft_lstclear(&mapped_list, del_content);
}

int main(void)
{
    printf("Running tests for ft_lstmap...\n");
    test_lstmap();
    printf("\nAll tests completed.\n");
    return 0;
} */