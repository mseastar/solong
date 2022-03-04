/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseastar <mseastar@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 18:54:53 by mseastar          #+#    #+#             */
/*   Updated: 2021/12/06 21:51:26 by mseastar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# include <stdio.h>
# include <stdbool.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stddef.h>
# include "../inc/mlx.h"
# include "../inc/get_next_line.h"

typedef struct s_list
{
	char			*str;
	struct s_list	*next;
}	t_list;
typedef struct s_data
{
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}	t_data;
typedef struct s_player
{
	size_t	x;
	size_t	y;
	int		width;
	int		height;
}	t_player;
typedef struct s_objs
{
	int		wall;
	int		coin;
	int		respawn;
	int		exit;
	int		valid;
}	t_objs;
typedef struct s_vars
{
	void		*mlx;
	void		*win;
	char		**map;
	t_player	*fish;
	void		*img_player;
	t_data		*img_pixels;
	void		*img_coin;
	void		*img_wall;
	void		*img_respawn;
	void		*img_exit;
	t_objs		*objs;
	size_t		count_steps;
	size_t		col;
	size_t		row;
	size_t		new_x;
	size_t		new_y;
	int			coin_collected;
}	t_vars;
char	**ft_init_map(char *str);
t_list	*ft_lstnew(char *content);
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstdelone(t_list *lst, void (*del)(void *));
t_data	*ft_init_img(t_vars *vars, int width, int height);
int		ft_init_vars(char **map, t_vars *vars);
t_objs	*ft_init_objs(void);
void	ft_map_check_ecr(char **map, t_objs *objs, t_vars *vars);
void	ft_map_check_wall(char **map, t_vars *vars);
int		ft_map_check(t_vars *vars);
void	ft_map_check_space(char **map, t_objs *objs);
int		ft_map_check_valid(t_vars *vars);
char	**ft_map_create(t_list *map, int k);
int		ft_map_error(t_vars *vars, char **map);
int		ft_player_check(t_player *fish, char **map, char c);
void	my_mlx_pixel_put(t_data *data, int x, int y, int color);
void	ft_draw_pixels(t_vars *vars);
void	ft_put_img_in_window(t_vars *vars);
int		ft_put_img(t_vars *vars);
void	ft_key_a(t_vars *vars);
void	ft_key_d(t_vars *vars);
void	ft_key_w(t_vars *vars);
void	ft_key_s(t_vars *vars);
int		ft_end_game(void);
void	ft_coin_col(t_vars *vars);
int		ft_key_hook(int keycode, t_vars *vars);
int		ft_init_imgs_xpm(t_vars *vars);
void	ft_put_wall(t_vars *vars, size_t x, size_t y);
void	ft_put_coin(t_vars *vars, size_t x, size_t y);
void	ft_put_exit(t_vars *vars, size_t x, size_t y);
void	ft_put_respawn(t_vars *vars, size_t x, size_t y);
void	ft_exit(t_vars *vars);
char	*ft_strjoin_def(char *str1, char *str2);
int		ft_check_argv(char *str);
#endif
