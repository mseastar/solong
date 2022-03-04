/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_check_patrol.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseastar <mseastar@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 00:08:20 by mseastar          #+#    #+#             */
/*   Updated: 2021/12/06 14:31:00 by mseastar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long_bonus.h"

int	ft_map_check_patrol_b(t_vars *vars)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (vars->map[i])
	{
		j = 0;
		while (vars->map[i][j])
		{
			if (vars->map[i][j] == '7')
			{
				if (ft_init_patrol_b(vars, j, i))
					return (1);
				vars->map[i][j] = '0';
			}
			j++;
		}
		i++;
	}
	return (0);
}
