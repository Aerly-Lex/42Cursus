/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:25:35 by Dscheffn          #+#    #+#             */
/*   Updated: 2023/11/20 13:47:28 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_free_str(char **str)
{
	char	*ptr;

	while (*str)
	{
		ptr = *str;
		str++;
		free(ptr);
	}
	str = NULL;
}
