/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_duplicates.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:36:07 by Dscheffn          #+#    #+#             */
/*   Updated: 2023/11/20 11:05:41 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Check if duplicates are in the Stack
// if True, it calls for liberation and exits
void	ft_duplicates(t_list *a)
{
	t_list	*ptr;

	while (a)
	{
		ptr = a->next;
		while (ptr)
		{
			if (a->nbr == ptr->nbr)
				liberator_stack(&a);
			ptr = ptr->next;
		}
		a = a->next;
	}
}
