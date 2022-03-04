/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_check_valid.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseastar <mseastar@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 22:09:55 by mseastar          #+#    #+#             */
/*   Updated: 2021/12/02 22:10:54 by mseastar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

int	ft_map_check_valid(t_vars *vars)
{
	size_t	strlen;
	int		i;

	i = 0;
	strlen = ft_strlen(vars->map[0]);
	while (vars->map[++i])
		if (ft_strlen(vars->map[i]) != strlen)
			return (1);
	return (0);
}
