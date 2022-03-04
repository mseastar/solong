/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_patrol_img.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseastar <mseastar@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 00:04:51 by mseastar          #+#    #+#             */
/*   Updated: 2021/12/06 14:22:53 by mseastar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long_bonus.h"

void	ft_patrol_img_b(t_vars *vars)
{
	t_enemy	*step;
	int		width;
	int		height;

	width = 3;
	height = 3;
	step = vars->enemy;
	while (step)
	{
		if (vars->coin_collected)
			vars->img_enemy = mlx_xpm_file_to_image(vars->mlx, \
			"_bonus/img_bonus/img_enemy1.xpm", &width, &height);
		else
			vars->img_enemy = mlx_xpm_file_to_image(vars->mlx, \
			"_bonus/img_bonus/img_enemy2.xpm", &width, &height);
		mlx_put_image_to_window(vars->mlx, vars->win, vars->img_enemy, \
		(int)(step->x * 50 - vars->new_x), (int)(step->y * 50 - vars->new_y));
		if (ft_check_player_patrol_b(vars))
			ft_end_game_b();
		step = step->next;
	}
	mlx_destroy_image(vars->mlx, vars->img_enemy);
}
