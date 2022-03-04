/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_imgs_xpm.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseastar <mseastar@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 00:10:12 by mseastar          #+#    #+#             */
/*   Updated: 2021/12/04 00:10:13 by mseastar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long_bonus.h"

int	ft_init_imgs_xpm_b(t_vars *vars)
{
	int		x;
	int		y;
	void	*(*f)(void *, char *, int *, int *);

	f = mlx_xpm_file_to_image;
	x = vars->fish->width;
	y = vars->fish->height;
	if (vars->count_steps % 2)
		vars->img_player = f(vars->mlx, "img/img_player1.xpm", &x, &y);
	else
		vars->img_player = f(vars->mlx, "img/img_player2.xpm", &x, &y);
	vars->img_wall = f(vars->mlx, "img/img_wall.xpm", &x, &y);
	vars->img_exit = f(vars->mlx, "img/img_exit.xpm", &x, &y);
	vars->img_respawn = f(vars->mlx, "img/img_respawn.xpm", &x, &y);
	if (!vars->img_player || !vars->img_exit || \
	!vars->img_wall || !vars->img_respawn)
		return (1);
	ft_put_img_in_window_b(vars);
	mlx_put_image_to_window(vars->mlx, vars->win, vars->img_player, \
	(int)(vars->fish->x * 50 - vars->new_x), \
	(int)(vars->fish->y * 50 - vars->new_y));
	return (0);
}
