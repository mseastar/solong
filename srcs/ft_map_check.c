/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseastar <mseastar@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 13:44:28 by mseastar          #+#    #+#             */
/*   Updated: 2021/12/10 15:31:34 by mseastar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../inc/so_long.h"

int	ft_map_check(t_vars *vars)
{
	ft_map_check_wall(vars->map, vars);
	ft_map_check_ecr(vars->map, vars->objs, vars);
	if (!vars->objs->wall || vars->objs->coin < 1 || vars->objs->respawn != 1 \
		|| vars->objs->exit < 1 \
		|| ft_player_check(vars->fish, vars->map, '1') \
		|| ft_map_check_valid(vars) || vars->objs->valid == 0)
		return (1);
	return (0);
}
