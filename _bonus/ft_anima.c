/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_anima.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseastar <mseastar@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 00:13:10 by mseastar          #+#    #+#             */
/*   Updated: 2021/12/06 16:55:58 by mseastar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long_bonus.h"

static void	ft_move_patr_b(t_vars *vars)
{
	t_enemy	*step;

	step = vars->enemy;
	while (step)
	{
		ft_patrol_move_b(vars, step);
		if (ft_check_player_patrol_b(vars))
			ft_end_game_b();
		step = step->next;
	}
}

int	ft_anima_b(t_vars *vars)
{
	static int	count_time;

	if (count_time == 3000)
	{
		ft_coin_img_b(vars, "_bonus/img_bonus/img_coin_2.xpm");
		if (ft_put_img_b(vars))
			return (1);
		ft_move_patr_b(vars);
	}
	else if (count_time == 6000)
	{
		ft_coin_img_b(vars, "_bonus/img_bonus/img_coin_1.xpm");
		if (ft_put_img_b(vars))
			return (1);
		ft_move_patr_b(vars);
		count_time = 0;
	}
	count_time++;
	return (0);
}
