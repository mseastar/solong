/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_coin_img.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseastar <mseastar@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 00:12:09 by mseastar          #+#    #+#             */
/*   Updated: 2021/12/06 18:39:04 by mseastar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long_bonus.h"

void	ft_coin_img_b(t_vars *vars, char *str)
{
	int	x;
	int	y;

	x = 1;
	y = 1;
	vars->img_coin = mlx_xpm_file_to_image(vars->mlx, str, &y, &x);
}
