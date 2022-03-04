/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key_w.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseastar <mseastar@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 00:10:01 by mseastar          #+#    #+#             */
/*   Updated: 2021/12/06 16:52:13 by mseastar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long_bonus.h"

void	ft_key_w_b(t_vars *vars)
{
	vars->count_steps++;
	vars->fish->y -= 1;
	if (ft_player_check_b(vars, '1'))
	{
		vars->fish->y += 1;
		vars->count_steps--;
	}
}
