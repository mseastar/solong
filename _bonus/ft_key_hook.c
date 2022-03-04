/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key_hook.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseastar <mseastar@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 00:10:03 by mseastar          #+#    #+#             */
/*   Updated: 2021/12/04 00:10:03 by mseastar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long_bonus.h"

int	ft_key_hook_b(int keycode, t_vars *vars)
{
	if (keycode == 13)
		ft_key_w_b(vars);
	else if (keycode == 0)
		ft_key_a_b(vars);
	else if (keycode == 1)
		ft_key_s_b(vars);
	else if (keycode == 2)
		ft_key_d_b(vars);
	else if (keycode == 53)
		ft_end_game_b();
	if (ft_put_img_b(vars))
		return (1);
	return (0);
}
