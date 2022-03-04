/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_patrol.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseastar <mseastar@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 00:10:08 by mseastar          #+#    #+#             */
/*   Updated: 2021/12/06 16:40:54 by mseastar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long_bonus.h"

void	ft_lstadd_back_b(t_enemy **lst, t_enemy *new)
{
	t_enemy	*lst2;

	if (!*lst)
		*lst = new;
	else
	{
		lst2 = *lst;
		while (lst2->next)
			lst2 = lst2->next;
		lst2->next = new;
	}
}

int	ft_init_patrol_b(t_vars *vars, size_t x, size_t y)
{
	t_enemy	*step;

	step = malloc(sizeof (t_enemy));
	step->width = 2;
	step->height = 2;
	step->x = x;
	step->y = y;
	step->next = NULL;
	ft_lstadd_back_b(&vars->enemy, step);
	if (ft_check_patrol_on_map_b(vars, step))
		return (1);
	return (0);
}
