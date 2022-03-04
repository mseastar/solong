/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_patrol_move_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseastar <mseastar@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 00:04:49 by mseastar          #+#    #+#             */
/*   Updated: 2021/12/04 00:04:49 by mseastar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long_bonus.h"

int	ft_patrol_move_a_b(t_vars *vars, t_enemy *enemy)
{
	enemy->x--;
	if (ft_check_patrol_on_map_b(vars, enemy))
	{
		enemy->x++;
		return (1);
	}
	return (0);
}
