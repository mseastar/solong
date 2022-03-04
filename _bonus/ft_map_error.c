/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseastar <mseastar@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 18:37:34 by mseastar          #+#    #+#             */
/*   Updated: 2021/12/06 18:37:34 by mseastar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long_bonus.h"

int	ft_map_error_b(t_vars *vars, char **map)
{
	if (!map)
	{
		perror("Error, map create problem.\n");
		return (1);
	}
	else if (ft_init_vars_b(map, vars))
	{
		printf("Error, vars init problem.\n");
		return (1);
	}
	else if (ft_map_check_b(vars))
	{
		printf("MAP ERROR!\n");
		return (1);
	}
	return (0);
}
