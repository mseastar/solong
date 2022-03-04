/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_img.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseastar <mseastar@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 00:04:44 by mseastar          #+#    #+#             */
/*   Updated: 2021/12/06 16:25:54 by mseastar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long_bonus.h"

static void	ft_destroy_images(t_vars *vars)
{
	mlx_destroy_image(vars->mlx, vars->img_pixels->img);
	mlx_destroy_image(vars->mlx, vars->img_player);
	mlx_destroy_image(vars->mlx, vars->img_wall);
	mlx_destroy_image(vars->mlx, vars->img_exit);
	mlx_destroy_image(vars->mlx, vars->img_respawn);
	free(vars->img_pixels);
}

int	ft_put_img_b(t_vars *vars)
{
	char	*count_steps;

	count_steps = ft_itoa(vars->count_steps);
	mlx_clear_window(vars->mlx, vars->win);
	vars->new_x = (vars->fish->x - 1) * 50;
	vars->new_y = (vars->fish->y - 1) * 50;
	ft_exit_b(vars);
	ft_draw_pixels_b(vars);
	mlx_put_image_to_window(vars->mlx, vars->win, vars->img_pixels->img, 0, 0);
	ft_init_imgs_xpm_b(vars);
	ft_destroy_images(vars);
	ft_patrol_img_b(vars);
	mlx_string_put(vars->mlx, vars->win, 95, 45, 1111111, count_steps);
	free(count_steps);
	return (0);
}
