/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_pixels.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseastar <mseastar@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 00:12:07 by mseastar          #+#    #+#             */
/*   Updated: 2021/12/04 00:12:07 by mseastar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long_bonus.h"

static void	ft_draw_50(t_vars *vars, int y, int x)
{
	int	count_x;
	int	count_y;

	count_y = -1;
	while (++count_y < 50)
	{
		count_x = -1;
		while (++count_x < 50)
		{
			if (count_x + (x * 50) >= 1200 || count_y + (y * 50) >= 1000)
				return ;
			my_mlx_pixel_put_b(vars->img_pixels, count_x + (x * 50), \
			count_y + (y * 50), 0x000000FF);
		}
	}
}

void	ft_draw_pixels_b(t_vars *vars)
{
	size_t	i;
	size_t	j;
	int		x;
	int		y;

	y = -1;
	vars->img_pixels = ft_init_img_b(vars, 1200, 1000);
	if (!vars->img_pixels)
		return ;
	i = vars->fish->y - 1;
	while (++y <= (int)(vars->row - vars->fish->y))
	{
		x = -1;
		j = vars->fish->x - 1;
		while (++x <= (int)(vars->col - vars->fish->x))
		{
			if (vars->map[i][j] != '1')
				ft_draw_50(vars, y, x);
			j++;
		}
		i++;
	}
}
