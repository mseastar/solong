/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_check_wall.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseastar <mseastar@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 13:44:11 by mseastar          #+#    #+#             */
/*   Updated: 2021/12/02 20:07:25 by mseastar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../inc/so_long.h"

void	ft_map_check_wall(char **map, t_vars *vars)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if ((i == 0 || i == vars->row - 1 || j == 0 || \
			j == ft_strlen(map[0]) - 1) && map[i][j] != '1')
				return ;
			j++;
		}
		i++;
	}
	vars->objs->wall = 1;
}
