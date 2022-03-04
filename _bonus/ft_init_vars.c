/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_vars.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseastar <mseastar@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 00:10:07 by mseastar          #+#    #+#             */
/*   Updated: 2021/12/04 00:10:13 by mseastar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long_bonus.h"

static int	ft_count_rows(t_vars *vars)
{
	int	row;

	row = 0;
	while (vars->map[row])
		row++;
	return (row);
}

int	ft_init_vars_b(char **map, t_vars *vars)
{
	vars->mlx = mlx_init();
	if (!vars->mlx)
		return (1);
	vars->win = mlx_new_window(vars->mlx, 1200, 1000, "Game");
	if (!vars->win)
		return (1);
	vars->map = map;
	vars->col = ft_strlen(vars->map[0]);
	vars->row = ft_count_rows(vars);
	vars->fish = malloc(sizeof (t_player));
	vars->objs = ft_init_objs_b();
	if (!vars->objs)
		return (1);
	if (!vars->fish || !vars->objs)
		return (1);
	vars->enemy = NULL;
	ft_coin_img_b(vars, "_bonus/img_bonus/img_coin_1.xpm");
	vars->coin_collected = 0;
	vars->count_steps = 0;
	return (0);
}
