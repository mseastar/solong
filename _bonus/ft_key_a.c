/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseastar <mseastar@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 00:10:06 by mseastar          #+#    #+#             */
/*   Updated: 2021/12/06 16:52:36 by mseastar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long_bonus.h"

void	ft_key_a_b(t_vars *vars)
{
	vars->count_steps++;
	vars->fish->x -= 1;
	if (ft_player_check_b(vars, '1'))
	{
		vars->fish->x += 1;
		vars->count_steps--;
	}
}
