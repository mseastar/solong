/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_patrol_move.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseastar <mseastar@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 00:04:50 by mseastar          #+#    #+#             */
/*   Updated: 2021/12/04 00:05:08 by mseastar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long_bonus.h"

static int	ft_check_patrol_on_map(t_vars *vars, t_enemy *enemy, int c)
{
	if ((c == 0 && !ft_patrol_move_w_b(vars, enemy)) || \
	(c == 1 && !ft_patrol_move_a_b(vars, enemy)) || \
	(c == 2 && !ft_patrol_move_s_b(vars, enemy)) || \
	(c == 3 && !ft_patrol_move_d_b(vars, enemy)))
		return (0);
	return (1);
}

void	ft_patrol_move_b(t_vars *vars, t_enemy *enemy)
{
	int	i;

	i = rand() % 4;
	while (ft_check_patrol_on_map(vars, enemy, i))
		i = rand() % 4;
}
