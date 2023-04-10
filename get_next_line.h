/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhodara <akhodara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:36:25 by akhodara          #+#    #+#             */
/*   Updated: 2023/01/04 17:39:55 by akhodara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

# include <stdlib.h>
# include <unistd.h>

size_t	ft_strlen(char *str);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nitem, size_t size);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strchr(const char *string, int searchedChar );
char	*ft_read_file(int fd, char *str);
char	*ft_first_line(char *str);
char	*ft_goto_next(char *str);
char	*get_next_line(int fd);

#endif
