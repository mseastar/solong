/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_patrol_on_map_b.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseastar <mseastar@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 18:39:31 by mseastar          #+#    #+#             */
/*   Updated: 2021/12/06 18:39:31 by mseastar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long_bonus.h"

int	ft_check_patrol_on_map_b(t_vars *vars, t_enemy *enemy)
{
	size_t	i;
	size_t	j;

	i = -1;
	while (++i < enemy->width)
	{
		j = -1;
		while (++j < enemy->height)
		{
			if (vars->map[enemy->y + i][enemy->x + j] == '1')
				return (1);
		}
	}
	return (0);
}
