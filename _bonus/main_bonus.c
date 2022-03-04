/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseastar <mseastar@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 00:03:36 by mseastar          #+#    #+#             */
/*   Updated: 2021/12/06 18:02:01 by mseastar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long_bonus.h"

int	main(int argc, char **argv)
{
	char		**map;
	t_vars		vars;

	if (argc != 2)
	{
		perror("File not found!\n");
		return (0);
	}
	map = ft_init_map_b(argv[1]);
	if (ft_map_error_b(&vars, map))
		return (0);
	if (ft_put_img_b(&vars))
		return (0);
	mlx_hook(vars.win, 2, 1L << 1, ft_key_hook_b, &vars);
	mlx_hook(vars.win, 17, 1L << 0, ft_end_game_b, &vars);
	mlx_loop_hook(vars.mlx, ft_anima_b, &vars);
	mlx_loop(vars.mlx);
	return (0);
}
