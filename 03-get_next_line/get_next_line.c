/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dscheffn <dscheffn@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 11:56:03 by Dscheffn          #+#    #+#             */
/*   Updated: 2023/10/24 10:15:50 by Dscheffn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*buffer;

	buffer = *lst;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	while (buffer->next)
	{
		buffer = buffer->next;
	}
	buffer->next = new;
}

// int	ft_strlen_n(char *buffer)
// {
// 	int	counter;

// 	counter = 0;
// 	while (buffer[counter] != '\n' && buffer[counter] != '\0' )
// 		counter++;
// 	return (counter);
// }

void	*reader(int fd, t_list **head)
{
	char	*buffer;
	char	*tmp;
	int		byte_size;
	int		i;
	int		start;

	i = 0;
	start = 0;
	while (buffer[i] != '\0')
	{
		byte_size = read(fd, buffer, BUFFER_SIZE);
		j = 0;
		tmp = ft_lstnew(tmp); //malloc(sizeof(char *) * ft_strlen_n(buffer) + 2);
		if (!tmp)
			return (0);
		while (buffer[i + j] != '\n')
		{
			tmp[j] = buffer[j];
			j++;
		}
		tmp[j++] = '\n';
		tmp[j++] = '\0';
		head->content = tmp;
		free(tmp);
		i += j;
	}
}

char	*get_next_line(int fd)
{
	static t_file	*head;
	char			*line;
	char			*tmp;

	if (head == 0)
		reader(fd, &head);
		// head = 0;
		// head = malloc(sizeof(t_list));
	if (!head)
		return (0);

	line = head->content;
	tmp = head;
	if (head->next == NULL)
		free(head)
	else
	{
		head = head->next;
		free(tmp);
	}
	return (line);
}

#include <fcntl.h>
// return Number of bytes read on success
// return 0 on reaching the end of file
// return -1 on error
// return -1 on signal interrupt

	// line = ft_get_line(left_str);
	// left_str = ft_new_left_str(left_str);

int	main(void)
{
	char	*line;
	int		i = 1;
	// int		fd1;
	// int		fd2;
	int		fd3;
	// fd1 = open("tests/test.txt", O_RDONLY);
	// fd2 = open("tests/test1.txt", O_RDONLY);
	fd3 = open("tests/test2.txt", O_RDONLY);

	while (i < 8)
	{
	// 	// line = get_next_line(fd1);
	// 	// printf("line1-%d: %s", i, line);
	// 	// free(line);
	// 	// line = get_next_line(fd2);
	// 	// printf("line2-%d: %s", i, line);
	// 	// free(line);
		line = get_next_line(fd3);
		printf("line3-%d: %s", i, line);
		free(line);
		i++;
	}
	// close(fd1);
	// close(fd2);
	close(fd3);
	return (0);
}
