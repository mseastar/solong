/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_objs_on_map.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseastar <mseastar@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 00:04:39 by mseastar          #+#    #+#             */
/*   Updated: 2021/12/04 00:04:39 by mseastar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long_bonus.h"

void	ft_put_wall_b(t_vars *vars, size_t x, size_t y)
{
	mlx_put_image_to_window(vars->mlx, vars->win, \
	vars->img_wall, (int)(x - vars->new_x), (int)(y - vars->new_y));
}

void	ft_put_coin_b(t_vars *vars, size_t x, size_t y)
{
	mlx_put_image_to_window(vars->mlx, vars->win, \
	vars->img_coin, (int)(x - vars->new_x), (int)(y - vars->new_y));
}

void	ft_put_exit_b(t_vars *vars, size_t x, size_t y)
{
	mlx_put_image_to_window(vars->mlx, vars->win, \
	vars->img_exit, (int)(x - vars->new_x), (int)(y - vars->new_y));
}

void	ft_put_respawn_b(t_vars *vars, size_t x, size_t y)
{
	mlx_put_image_to_window(vars->mlx, vars->win, \
	vars->img_respawn, (int)(x - vars->new_x), (int)(y - vars->new_y));
}
