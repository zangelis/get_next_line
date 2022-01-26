/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zangelis <zangelis@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 08:01:06 by zangelis          #+#    #+#             */
/*   Updated: 2022/01/25 08:55:18 by zangelis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

char	*ft_strjoin(char *buffer, char *more_buffer)
{
	size_t	i;
	size_t	j;
	size_t	length;
	char	*str;

	if (!buffer)
	{
		buffer = (char *)malloc(1 * sizeof(char));
		buffer[0] = '\0';
	}
	if (!buffer || !more_buffer)
		return (NULL);
	length = ft_strlen(buffer) + ft_strlen(more_buffer);
	str = malloc(sizeof(char) * (length + 1));
	if (!str)
		return (NULL);
	i = -1;
	j = 0;
	while (buffer[++i] != '\0')
		str[i] = buffer[i];
	while (more_buffer[j] != '\0')
		str[i++] = more_buffer[j++];
	str[length] = '\0';
	free(buffer);
	return (str);
}

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			return ((char *)(str + i));
		i++;
	}
	return (NULL);
}
