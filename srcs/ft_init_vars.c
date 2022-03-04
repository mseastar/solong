/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_vars.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseastar <mseastar@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 13:46:52 by mseastar          #+#    #+#             */
/*   Updated: 2021/12/03 15:09:31 by mseastar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../inc/so_long.h"

static int	ft_count_rows(t_vars *vars)
{
	int	row;

	row = 0;
	while (vars->map[row])
		row++;
	return (row);
}

int	ft_init_vars(char **map, t_vars *vars)
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
	if (!vars->fish)
		return (1);
	vars->objs = ft_init_objs();
	if (!vars->objs)
		return (1);
	vars->coin_collected = 0;
	vars->count_steps = 0;
	return (0);
}
