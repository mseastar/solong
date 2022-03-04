/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_img.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseastar <mseastar@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 13:52:10 by mseastar          #+#    #+#             */
/*   Updated: 2021/12/01 17:57:15 by mseastar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../inc/so_long.h"

t_data	*ft_init_img(t_vars *vars, int width, int height)
{
	t_data	*img;

	img = malloc(sizeof(t_data));
	if (!img)
		return (NULL);
	img->img = mlx_new_image(vars->mlx, width, height);
	img->addr = mlx_get_data_addr(img->img, &img->bits_per_pixel, \
		&img->line_length, &img->endian);
	return (img);
}
