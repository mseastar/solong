CC = gcc

FLAGS = -Wall -Wextra -Werror

FLAGS_MLX = -framework OpenGL -framework AppKit

RM = rm -rf

AR = ar rcs

MAKE = make
# ------------------------------------------------------------------------------

NAME = 		so_long
NAME_B = 	so_long_bonus

SRCS =  	srcs/ft_coin_col.c srcs/ft_draw_pixels.c srcs/ft_end_game.c srcs/ft_init_img.c \
			srcs/ft_init_imgs_xpm.c srcs/ft_init_map.c srcs/ft_init_objs.c srcs/ft_init_vars.c \
			srcs/ft_key_a.c srcs/ft_key_d.c srcs/ft_key_s.c srcs/ft_key_w.c srcs/ft_key_hook.c \
			srcs/ft_lstclear.c srcs/ft_lstdelone.c srcs/ft_lstnew.c srcs/ft_map_check.c \
			srcs/ft_map_check_ecr.c srcs/ft_map_check_player.c srcs/ft_map_check_wall.c \
			srcs/my_mlx_pixels_put.c srcs/ft_put_img_in_window.c \
			srcs/ft_put_img.c srcs/ft_exit.c gnl/get_next_line.c gnl/get_next_line_utils.c \
			srcs/ft_map_check_valid.c srcs/ft_put_objs_on_map.c srcs/ft_map_create.c srcs/ft_strjoin_def.c \
			srcs/ft_check_argv.c srcs/ft_map_error.c srcs/main.c


SRCS_B =	_bonus/ft_init_map.c _bonus/ft_lstnew_bonus.c _bonus/ft_lstclear.c _bonus/ft_lstdelone.c \
            _bonus/ft_check_argv.c _bonus/ft_strjoin_def.c _bonus/ft_map_create.c _bonus/ft_init_vars.c _bonus/ft_init_objs.c \
			_bonus/ft_map_check.c _bonus/ft_map_check_wall.c _bonus/ft_map_check_ecr.c _bonus/ft_map_check_player.c \
			 _bonus/ft_map_check_valid.c _bonus/ft_map_check_patrol.c _bonus/ft_init_patrol.c \
			_bonus/ft_put_img.c _bonus/ft_exit.c _bonus/ft_coin_col.c _bonus/ft_end_game.c _bonus/ft_draw_pixels.c \
			_bonus/my_mlx_pixels_put.c _bonus/ft_init_img.c _bonus/ft_init_imgs_xpm.c _bonus/ft_put_img_in_window.c \
			_bonus/ft_put_objs_on_map.c _bonus/ft_key_hook.c _bonus/ft_key_w.c _bonus/ft_key_a.c _bonus/ft_key_s.c \
			_bonus/ft_key_d.c gnl/get_next_line.c gnl/get_next_line_utils.c _bonus/ft_anima.c _bonus/ft_patrol_img.c  \
			_bonus/ft_patrol_move_w.c _bonus/ft_patrol_move.c _bonus/ft_patrol_move_a.c _bonus/ft_patrol_move_s.c  \
			_bonus/ft_patrol_move_d.c _bonus/ft_coin_img.c _bonus/ft_check_player_patrol.c _bonus/ft_check_patrol_on_map_b.c \
			_bonus/ft_itoa.c _bonus/ft_map_error.c _bonus/main_bonus.c


OBJS = ${SRCS:%.c=%.o}

OBJS_B = ${SRCS_B:%.c=%.o}

HEAD = inc/so_long.h

HEAD_B = inc/so_long_bonus.h

LIB = so_long.a

LIB_B = so_long_b.a

#D_SRCS = srcs
#D_INC = includes

# ------------------------------------------------------------------------------
%.o :		%.c ${HEAD}
			${CC} ${FLAGS} -c -o $@ $<

${NAME}: 	${OBJS} ${HEAD}
			${AR} ${LIB} $?
			${MAKE} -C mlx
			${CC} ${FLAGS_MLX} mlx/libmlx.a ${LIB} -o ${NAME}

all:		${NAME}

clean:
			${RM} ${OBJS} ${OBJS_B}

fclean:		clean
			${RM} ${NAME} ${NAME_B} ${LIB} ${LIB_B}
			${MAKE} clean -C mlx

re:			fclean all


bonus:		${HEAD_B} ${SRCS_B_MAIN}
			make OBJS="${OBJS_B}" HEAD="${HEAD_B}" LIB="${LIB_B}" NAME="${NAME_B}" all
# ------------------------------------------------------------------------------

# ------------------------------------------------------------------------------

.PHONY: re all clean fclean bonus
