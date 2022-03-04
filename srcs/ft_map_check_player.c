/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_check_player.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseastar <mseastar@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 13:44:25 by mseastar          #+#    #+#             */
/*   Updated: 2021/11/28 13:44:25 by mseastar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../inc/so_long.h"

int	ft_player_check(t_player *fish, char **map, char c)
{
	int	i;
	int	j;

	i = 0;
	while (i < fish->height)
	{
		j = 0;
		while (j < fish->width)
		{
			if (map[fish->y + i][fish->x + j] == c)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
