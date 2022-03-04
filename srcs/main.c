/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseastar <mseastar@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 13:42:03 by mseastar          #+#    #+#             */
/*   Updated: 2021/12/06 18:13:15 by mseastar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../inc/so_long.h"

int	main(int argc, char **argv)
{
	char		**map;
	t_vars		vars;

	if (argc != 2)
		return (0);
	map = ft_init_map(argv[1]);
	if (ft_map_error(&vars, map))
		return (0);
	if (ft_put_img(&vars))
		return (0);
	mlx_hook(vars.win, 2, 1L << 1, ft_key_hook, &vars);
	mlx_hook(vars.win, 17, 1L << 0, ft_end_game, &vars);
	mlx_loop(vars.mlx);
	return (0);
}
