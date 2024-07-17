/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relvan <relvan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:24:42 by relvan            #+#    #+#             */
/*   Updated: 2023/10/30 18:25:03 by relvan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <unistd.h>
# include <stdlib.h>

char	*get_next_line(int fd);
char	*ft_read_fd(char *str, int fd);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_getline_fd(char *str);
char	*ft_update_fd(char *str);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *s);
#endif