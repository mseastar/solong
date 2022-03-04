/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseastar <mseastar@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 00:08:49 by mseastar          #+#    #+#             */
/*   Updated: 2021/12/04 00:09:08 by mseastar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long_bonus.h"

int	ft_map_check_b(t_vars *vars)
{
	ft_map_check_wall_b(vars->map, vars);
	ft_map_check_ecr_b(vars->map, vars->objs, vars);
	if (!vars->objs->wall || vars->objs->coin < 1 || vars->objs->respawn != 1 \
	|| vars->objs->exit < 1 || ft_player_check_b(vars, '1') \
	|| ft_map_check_valid_b(vars) \
	|| ft_map_check_patrol_b(vars) || !vars->enemy || !vars->objs->valid)
		return (1);
	return (0);
}
