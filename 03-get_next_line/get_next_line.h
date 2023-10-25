/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 11:53:18 by Dscheffn          #+#    #+#             */
/*   Updated: 2023/10/25 14:42:38 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdio.h> // entfernen!
# include <stdlib.h>
# include <string.h> // entfernen (strdup)

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 500000
# endif

char	*get_next_line(int fd);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strchr(char *s, int c);
char	*line_grabber(char *remainder);
char	*remainder_refresh(char *remainder);

#endif
