/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key_hook.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseastar <mseastar@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 13:45:54 by mseastar          #+#    #+#             */
/*   Updated: 2021/12/03 21:25:31 by mseastar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../inc/so_long.h"

int	ft_key_hook(int keycode, t_vars *vars)
{
	vars->count_steps++;
	if (keycode == 13)
		ft_key_w(vars);
	else if (keycode == 0)
		ft_key_a(vars);
	else if (keycode == 1)
		ft_key_s(vars);
	else if (keycode == 2)
		ft_key_d(vars);
	else if (keycode == 53)
		ft_end_game();
	mlx_clear_window(vars->mlx, vars->win);
	if (ft_put_img(vars))
		return (1);
	return (0);
}
