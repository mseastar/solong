/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_def.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseastar <mseastar@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 00:03:55 by mseastar          #+#    #+#             */
/*   Updated: 2021/12/04 00:04:28 by mseastar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

char	*ft_strjoin_def_b(char *str1, char *str2)
{
	char	*ptr;
	char	*ptr_r;

	if (!str2)
		return (NULL);
	ptr = (char *)malloc(sizeof(char) * (ft_strlen(str1) \
	+ ft_strlen(str2) + 1));
	ptr_r = ptr;
	if (!ptr)
		return (NULL);
	while (str1 && *str1)
		*ptr++ = *str1++;
	while (*str2)
		*ptr++ = *str2++;
	*ptr = '\0';
	return (ptr_r);
}
