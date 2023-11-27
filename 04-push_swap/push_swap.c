/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:41:37 by Dscheffn          #+#    #+#             */
/*   Updated: 2023/11/27 14:35:48 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// gcc $(find . -name '*.c') -g

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;
	int		size;

	a = NULL;
	b = NULL;
	if (argc == 1)
		exit(1);
	a = stack_creator(argc, argv);
	// // for testing puprose
	t_list *a_ptr = a;
	printf("Before swap:\n");
	while (a_ptr != NULL)
	{
		printf("%d~", a_ptr->nbr);
		a_ptr = a_ptr->next;
	}
	if (sort_check(a) == 1)
		return (write(1, "It's already sorted\n", 21), 1);
	else
	{
		size = ft_lstsize(a);
		insert_index(&a, size);
		algo(&a, &b);
	}
	printf("\nAfter swap:\n");
	a_ptr = b;
	while (a_ptr)
	{
		printf("%d~%d\n", a_ptr->nbr, a_ptr->index);
		a_ptr = a_ptr->next;
	}
	// liberator_stack(&a);
	return (0);
}
