/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 19:03:01 by mukibrok          #+#    #+#             */
/*   Updated: 2024/11/15 20:08:36 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

//// Helper function to print list content
//void print_list(t_list *list)
//{
//	int i = 0;
//	while (list)
//	{
//		printf("Node %d: %s\n", i++, (char *)list->content);
//		list = list->next;
//	}
//	printf("-----\n");
//}

//// Helper function to free content (example with string content)
//void free_content(void *content)
//{
//	free(content);
//}

//int main(void)
//{
//	// Test 1: ft_lstnew
//	printf("Testing ft_lstnew:\n");
//	t_list *list = ft_lstnew(strdup("first"));
//	print_list(list); // Expected: Node 0: first

//	// Test 2: ft_lstadd_front
//	printf("Testing ft_lstadd_front:\n");
//	t_list *new_node = ft_lstnew(strdup("new front"));
//	ft_lstadd_front(&list, new_node);
//	print_list(list); // Expected: Node 0: new front, Node 1: first

//	// Test 3: ft_lstsize
//	printf("Testing ft_lstsize:\n");
//	int size = ft_lstsize(list);
//	printf("List size: %d\n", size); // Expected: 2

//	// Test 4: ft_lstlast
//	printf("Testing ft_lstlast:\n");
//	t_list *last_node = ft_lstlast(list);
//	printf("Last node content: %s\n", (char *)last_node->content);

//	// Test 5: ft_lstadd_back
//	printf("Testing ft_lstadd_back:\n");
//	t_list *new_back = ft_lstnew(strdup("new back"));
//	ft_lstadd_back(&list, new_back);
//	print_list(list);

//	//// Test 6: ft_lstdelone
//	//printf("Testing ft_lstdelone:\n");
//	//ft_lstdelone(new_back, free_content); // Delete the "new back" node
//	//new_back = NULL; // Avoid dangling pointer
//	//print_list(list); // Expected: Node 0: new front, Node 1: first

//	//// Test 7: ft_lstclear
//	//printf("Testing ft_lstclear:\n");
//	//ft_lstclear(&list, free_content); // Clear the entire list
//	//if (!list)
//	//	printf("List cleared successfully.\n"); // Expected output
//	//else
//	//	printf("List was not cleared properly.\n");

//	return 0;
//}
