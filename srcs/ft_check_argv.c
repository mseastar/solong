/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_argv.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseastar <mseastar@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 22:21:00 by mseastar          #+#    #+#             */
/*   Updated: 2021/12/02 22:21:21 by mseastar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

int	ft_check_argv(char *str)
{
	int		i;
	char	*str_end;
	char	*str_correct;

	str_correct = ".ber";
	i = 3;
	if (ft_strlen(str) < 5)
		return (1);
	str_end = str + ft_strlen(str) - 1;
	while (i >= 0)
	{
		if (*str_end != str_correct[i])
			return (1);
		str_end--;
		i--;
	}
	return (0);
}
