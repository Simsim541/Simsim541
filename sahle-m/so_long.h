/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberri <mberri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 13:17:00 by mberri            #+#    #+#             */
/*   Updated: 2022/06/23 16:58:31 by mberri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include "mlx.h"
# include "./gnl/get_next_line.h"
# include "./Libft/libft.h"

# define KEY_EVENT_PRESS		02
# define KEY_EVENT_RELEASE		03

# define KEY_ESC	53
# define KEY_W	13
# define KEY_A	0
# define KEY_D	2
# define KEY_S	1

typedef struct s_img{
	void	*wall;
	void	*p1;
	void	*p2;
	void	*land;
	void	*f1;
	void	*f2;
	void	*f3;
	void	*vil;
	void	*dr0;
	void	*dr1;
}t_img;

typedef struct s_game{
	void	*mlx;
	void	*window;
	int		wid;
	int		hei;
	char	*str;
	int		x;
	int		y;
	t_img	image;
	int		walk_cnt;
	int		all_col;
	int		collect_cnt;
}t_game;

//so_long_util.c
char	*ft_strdup_without_newline(char *string);
char	*ft_strjoin_without_newline(char *s1, char *s2);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		win_game(t_game *final);
void	lose_game(t_game *game);
void	print_error(char *str);
int		destroy_notify(t_game *game);
void	put_player(t_game *game, int w, int h);
void	put_door(t_game *game, int w, int h);
void	put_enemy(t_game *game, int w, int h);
void	put_wall(t_game *game, int w, int h);
void	put_collectible(t_game *game, int w, int h);
void	check_all(t_game *str);
int 	ft_check(char *str);
char	*ft_remove(char *str);
//map.c
void	read_map(t_game *game, char *filename);
void	check_wall(t_game *check);
void	check_params(t_game *param);
void	general_check(t_game *j);
int		ft_ft_ft(char *str);

//image.c
t_img	xpm_to_image(void *mlx);
void	put_img(t_game *gg, int w, int h);
void	set_img(t_game *game);

//key.c
void	move_up(t_game *game);
void	move_down(t_game *game);
void	move_right(t_game *game);
void	move_left(t_game *game);

//so_long.c
void	game_init(t_game *g, char *map);
int		exit_game(t_game *bomb);
int		key_press(int keycode, t_game *tap);
int		render_frame(t_game *game);
#endif