/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseastar <mseastar@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 19:35:43 by mseastar          #+#    #+#             */
/*   Updated: 2021/11/27 15:42:32 by mseastar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

size_t	ft_strlen(const char *s1)
{
	size_t	i;

	i = 0;
	while (s1[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *str1, char *str2)
{
	char	*ptr;
	char	*ptr_r;
	char	*str_p;

	if (!str2)
		return (NULL);
	if (!str1)
	{
		str1 = (char *)malloc(1);
		str1[0] = '\0';
	}
	ptr = (char *)malloc(sizeof(char) * (ft_strlen(str1) \
			+ ft_strlen(str2) + 1));
	ptr_r = ptr;
	if (!ptr)
		return (NULL);
	str_p = str1;
	while (str1 && *str1)
		*ptr++ = *str1++;
	while (*str2)
		*ptr++ = *str2++;
	*ptr = '\0';
	free(str_p);
	return (ptr_r);
}

char	*ft_strchr(const char *str, int c)
{
	size_t	i;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i])
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i++;
	}
	if (str[i] == (char)c)
		return ((char *)&str[i]);
	return ((char *)('\0'));
}
