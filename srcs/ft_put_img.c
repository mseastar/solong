/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_img.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseastar <mseastar@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 13:43:15 by mseastar          #+#    #+#             */
/*   Updated: 2021/12/02 19:55:38 by mseastar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../inc/so_long.h"

static void	ft_destroy_images(t_vars *vars)
{
	mlx_destroy_image(vars->mlx, vars->img_pixels->img);
	mlx_destroy_image(vars->mlx, vars->img_player);
	mlx_destroy_image(vars->mlx, vars->img_wall);
	mlx_destroy_image(vars->mlx, vars->img_coin);
	mlx_destroy_image(vars->mlx, vars->img_exit);
	mlx_destroy_image(vars->mlx, vars->img_respawn);
	free(vars->img_pixels);
}

int	ft_put_img(t_vars *vars)
{
	mlx_clear_window(vars->mlx, vars->win);
	vars->new_x = vars->fish->x * 50 - 50;
	vars->new_y = vars->fish->y * 50 - 50;
	ft_exit(vars);
	ft_draw_pixels(vars);
	mlx_put_image_to_window(vars->mlx, vars->win, vars->img_pixels->img, 0, 0);
	ft_init_imgs_xpm(vars);
	ft_destroy_images(vars);
	return (0);
}
