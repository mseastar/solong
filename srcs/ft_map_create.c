/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_create.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseastar <mseastar@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 22:09:16 by mseastar          #+#    #+#             */
/*   Updated: 2021/12/06 17:50:56 by mseastar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

char	**ft_map_create(t_list *map, int k)
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
