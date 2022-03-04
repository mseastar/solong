/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_create.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseastar <mseastar@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 00:07:23 by mseastar          #+#    #+#             */
/*   Updated: 2021/12/04 00:07:23 by mseastar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long_bonus.h"

char	**ft_map_create_b(t_list *map, int k)
{
	int		i;
	int		j;
	char	**map_r;

	map_r = malloc(sizeof(char *) * (k + 1));
	i = 0;
	while (map)
	{
		j = 0;
		map_r[i] = malloc(sizeof (char) * ft_strlen(map->str) + 1);
		while ((map->str)[j] && (map->str)[j] != '\n')
		{
			map_r[i][j] = (map->str)[j];
			j++;
		}
		if (map->str[j] == '\n')
			map_r[i][j++] = '\0';
		map_r[i][j] = '\0';
		i++;
		map = map->next;
	}
	map_r[i] = NULL;
	return (map_r);
}
