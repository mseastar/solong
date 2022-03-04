/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_objs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseastar <mseastar@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 00:10:09 by mseastar          #+#    #+#             */
/*   Updated: 2021/12/04 00:10:09 by mseastar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long_bonus.h"

t_objs	*ft_init_objs_b(void)
{
	t_objs	*objs;

	objs = malloc(sizeof(t_objs));
	if (!objs)
		return (NULL);
	objs->coin = 0;
	objs->wall = 0;
	objs->exit = 0;
	objs->respawn = 0;
	objs->valid = 1;
	return (objs);
}
