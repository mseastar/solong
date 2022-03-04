/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_map_ber.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseastar <mseastar@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 20:53:11 by mseastar          #+#    #+#             */
/*   Updated: 2021/12/06 17:42:13 by mseastar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../inc/so_long.h"

static int	ft_pull_list(t_list *map, t_list *map_step, int fh1, int *i)
{
	while (map_step)
	{
		map_step->next = ft_lstnew(get_next_line(fh1));
		if (!map_step->next)
		{
			ft_lstclear(&map, &free);
			return (1);
		}
		else if (!(map_step->next->str))
		{
			ft_lstdelone(map_step->next, &free);
			map_step->next = NULL;
			break ;
		}
		map_step = map_step->next;
		(*i)++;
	}
	if (map_step->str[ft_strlen(map_step->str) - 1] == '\n')
		return (1);
	return (0);
}

char	**ft_init_map(char *str)
{
	int		fh1;
	t_list	*map;
	t_list	*map_step;
	char	**map_r;
	int		i;

	if (ft_check_argv(str))
		return (NULL);
	i = 1;
	str = ft_strjoin_def("map/", str);
	fh1 = open(str, O_RDONLY);
	if (fh1 < 0)
		return (NULL);
	map = ft_lstnew(get_next_line(fh1));
	if (!map)
		return (NULL);
	map_step = map;
	if (ft_pull_list(map, map_step, fh1, &i))
		return (NULL);
	map_r = ft_map_create(map, i);
	ft_lstclear(&map, &free);
	close(fh1);
	free(str);
	return (map_r);
}
