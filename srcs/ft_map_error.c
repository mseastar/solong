/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseastar <mseastar@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 18:36:52 by mseastar          #+#    #+#             */
/*   Updated: 2021/12/06 18:36:56 by mseastar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

int	ft_map_error(t_vars *vars, char **map)
{
	if (!map)
	{
		perror("Error, map create problem.\n");
		return (1);
	}
	else if (ft_init_vars(map, vars))
	{
		printf("Error, vars init problem.\n");
		return (1);
	}
	else if (ft_map_check(vars))
	{
		printf("MAP ERROR!\n");
		return (1);
	}
	return (0);
}
