/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseastar <mseastar@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 18:51:39 by mseastar          #+#    #+#             */
/*   Updated: 2021/12/06 18:51:57 by mseastar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_BONUS_H
# define SO_LONG_BONUS_H

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
}				t_data;
typedef struct s_player
{
	size_t	x;
	size_t	y;
	size_t	width;
	size_t	height;
}	t_player;

typedef struct s_enemy
{
	size_t			x;
	size_t			y;
	size_t			width;
	size_t			height;
	struct s_enemy	*next;
}	t_enemy;
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
	void		*img_exit;
	void		*img_enemy;
	void		*img_respawn;
	t_objs		*objs;
	t_enemy		*enemy;
	size_t		count_steps;
	size_t		col;
	size_t		row;
	size_t		new_x;
	size_t		new_y;
	int			coin_collected;
}				t_vars;
char	**ft_init_map_b(char *str);
int		ft_check_argv_b(char *str);
char	*ft_strjoin_def_b(char *str1, char *str2);
char	**ft_map_create_b(t_list *map, int k);
t_list	*ft_lstnew_b(char *content);
void	ft_lstclear_b(t_list **lst, void (*del)(void *));
void	ft_lstdelone_b(t_list *lst, void (*del)(void *));
int		ft_init_vars_b(char **map, t_vars *vars);
t_objs	*ft_init_objs_b(void);
int		ft_map_check_b(t_vars *vars);
void	ft_map_check_wall_b(char **map, t_vars *vars);
void	ft_map_check_ecr_b(char **map, t_objs *objs, t_vars *vars);
void	ft_map_check_space_b(char **map, t_objs *objs);
int		ft_player_check_b(t_vars *vars, char c);
int		ft_map_check_valid_b(t_vars *vars);
int		ft_map_check_patrol_b(t_vars *vars);
int		ft_init_patrol_b(t_vars *vars, size_t x, size_t y);
int		ft_put_img_b(t_vars *vars);
void	ft_exit_b(t_vars *vars);
void	ft_coin_col_b(t_vars *vars);
int		ft_end_game_b(void);
void	ft_draw_pixels_b(t_vars *vars);
t_data	*ft_init_img_b(t_vars *vars, int width, int height);
void	my_mlx_pixel_put_b(t_data *data, int x, int y, int color);
int		ft_init_imgs_xpm_b(t_vars *vars);
void	ft_put_img_in_window_b(t_vars *vars);
void	ft_put_wall_b(t_vars *vars, size_t x, size_t y);
void	ft_put_exit_b(t_vars *vars, size_t x, size_t y);
void	ft_put_coin_b(t_vars *vars, size_t x, size_t y);
void	ft_put_respawn_b(t_vars *vars, size_t x, size_t y);
int		ft_key_hook_b(int keycode, t_vars *vars);
void	ft_key_w_b(t_vars *vars);
void	ft_key_a_b(t_vars *vars);
void	ft_key_s_b(t_vars *vars);
void	ft_key_d_b(t_vars *vars);
int		ft_anima_b(t_vars *vars);
void	ft_patrol_img_b(t_vars *vars);
void	ft_patrol_move_b(t_vars *vars, t_enemy *enemy);
int		ft_patrol_move_w_b(t_vars *vars, t_enemy *enemy);
int		ft_patrol_move_a_b(t_vars *vars, t_enemy *enemy);
int		ft_patrol_move_s_b(t_vars *vars, t_enemy *enemy);
int		ft_patrol_move_d_b(t_vars *vars, t_enemy *enemy);
void	ft_coin_img_b(t_vars *vars, char *str);
int		ft_check_player_patrol_b(t_vars *vars);
int		ft_check_patrol_on_map_b(t_vars *vars, t_enemy *enemy);
char	*ft_itoa(size_t n);
int		ft_map_error_b(t_vars *vars, char **map);
#endif
