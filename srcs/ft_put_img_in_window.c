/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_images.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseastar <mseastar@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 13:44:04 by mseastar          #+#    #+#             */
/*   Updated: 2021/12/03 15:31:00 by mseastar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../inc/so_long.h"

static void	ft_put_wcer(t_vars *vars, size_t i, size_t j)
{
	if (vars->map[i][j] == '1')
		ft_put_wall(vars, j * 50, i * 50);
	else if (vars->map[i][j] == 'C')
		ft_put_coin(vars, j * 50, i * 50);
	else if (vars->map[i][j] == 'E')
		ft_put_exit(vars, j * 50, i * 50);
	else if (vars->map[i][j] == 'P')
		ft_put_respawn(vars, j * 50, i * 50);
}

void	ft_put_img_in_window(t_vars *vars)
{
	size_t	i;
	size_t	j;
	int		x;
	int		y;

	y = -1;
	i = vars->fish->y - 1;
	while (++y <= (int)(vars->row - vars->fish->y))
	{
		x = -1;
		j = vars->fish->x - 1;
		if (y >= 20)
			break ;
		while (++x <= (int)(vars->col - vars->fish->x))
		{
			if (x >= 24)
				break ;
			ft_put_wcer(vars, i, j);
			j++;
		}
		i++;
	}
}
