/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:39:14 by Dscheffn          #+#    #+#             */
/*   Updated: 2023/11/20 13:44:52 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_atoi(char *str) // max negative int nicht beruecksichtigt...
{
	int	counter;
	int	storage;
	int	operator;

	counter = 0;
	storage = 0;
	operator = 1;
	while ((str[counter] >= 9 && str[counter] <= 13) || str[counter] == 32)
		counter++;
	if (str[counter] == '-')
	{
		operator *= -1;
		counter++;
	}
	else if (str[counter] == '+')
		counter++;
	while (str[counter])//(str[counter] >= '0' && str[counter] <= '9')
	{
		if ((ft_isdigit(str[counter])) == 0)
			ft_error();
		storage *= 10;
		storage += str[counter] - '0';
		counter++;
	}
	return (storage * operator);
}
