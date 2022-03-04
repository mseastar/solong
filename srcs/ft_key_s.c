/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseastar <mseastar@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 20:21:34 by mseastar          #+#    #+#             */
/*   Updated: 2021/11/26 20:21:34 by mseastar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

void	ft_key_s(t_vars *vars)
{
	vars->fish->y += 1;
	if (ft_player_check(vars->fish, vars->map, '1'))
	{
		vars->fish->y -= 1;
		vars->count_steps--;
	}
	else
		printf("%zu\n", vars->count_steps);
}
