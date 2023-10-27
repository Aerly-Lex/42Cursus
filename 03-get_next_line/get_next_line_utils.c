/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 11:23:23 by Dscheffn          #+#    #+#             */
/*   Updated: 2023/10/23 16:31:58 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	current = *lst;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	while (current->next)
	{
		current = current->next;
	}
	current->next = new;
}

t_list	*ft_lstnew(void *content)
{
	t_list	*str;

	str = malloc(sizeof(t_list));
	if (str == NULL)
		return (NULL);
	str->content = content;
	str->next = NULL;
	return (str);
}
