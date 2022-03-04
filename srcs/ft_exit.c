/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseastar <mseastar@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 22:19:05 by mseastar          #+#    #+#             */
/*   Updated: 2021/12/03 20:51:21 by mseastar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

void	ft_exit(t_vars *vars)
{
	if (ft_player_check(vars->fish, vars->map, 'C'))
		ft_coin_col(vars);
	if (ft_player_check(vars->fish, vars->map, 'E' ) && !vars->coin_collected)
		ft_end_game();
	return ;
}
