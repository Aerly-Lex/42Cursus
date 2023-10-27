/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 11:53:18 by Dscheffn          #+#    #+#             */
/*   Updated: 2023/10/24 09:54:25 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdio.h> // entfernen!
# include <stdlib.h>
#include <string.h> // entfernen (strdup)

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 1000
#endif

typedef struct s_file
{
	char	*remainder;
	int		fd;
}	t_file;

char	*get_next_line(int fd);
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstnew(void *content);

#endif
