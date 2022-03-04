/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseastar <mseastar@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 00:12:03 by mseastar          #+#    #+#             */
/*   Updated: 2021/12/04 00:12:03 by mseastar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long_bonus.h"

void	ft_exit_b(t_vars *vars)
{
	if (ft_player_check_b(vars, 'C'))
		ft_coin_col_b(vars);
	if (ft_player_check_b(vars, 'E' ) && !vars->coin_collected)
		ft_end_game_b();
}
