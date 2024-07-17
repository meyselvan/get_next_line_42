/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relvan <relvan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:08:49 by relvan            #+#    #+#             */
/*   Updated: 2023/10/30 18:21:22 by relvan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char *dest, char *src)
{
	char	*new_str;
	size_t	i;
	size_t	j;
	int		len;

	if (!dest)
	{
		dest = (char *)malloc(sizeof(char));
		dest[0] = 0;
	}
	len = ft_strlen(dest) + ft_strlen(src) + 1;
	new_str = (char *)malloc(sizeof(char) * len);
	if (!new_str)
		return (NULL);
	i = -1;
	j = 0;
	while (dest[++i] != '\0')
		new_str[i] = dest[i];
	while (src[j] != '\0')
		new_str[i++] = src[j++];
	new_str[i] = '\0';
	free(dest);
	return (new_str);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strchr(const char *str, int c)
{
	char	i;

	i = (char)c;
	if (!str)
		return (0);
	if (i == '\0')
		return ((char *)str);
	while (*str)
	{
		if (*str == i)
			return ((char *)str);
		str++;
	}
	return (0);
}
