/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:58:16 by Dscheffn          #+#    #+#             */
/*   Updated: 2023/11/27 14:34:09 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algo(t_list **a, t_list **b)
{
	int		range;
	int		i;
	t_list	*ptr;

	range = 1;
	i = 0;
	ptr = *a;
	while (ptr)
	{
		if (ptr->index == i)
			pb(a, b), rb(b);
		else if (ptr->index < (i + range))
			pb(a, b);
		else
			ra(a);
		i++;
		ptr = *a;
	}
}
// range = sqrt(n) * 1.4 // heuristic-methode...
// i = 0
