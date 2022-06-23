/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberri <mberri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 13:17:15 by mberri            #+#    #+#             */
/*   Updated: 2022/06/23 16:03:17 by mberri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	exit_game(t_game *bomb)
{
	
	mlx_destroy_image(bomb->mlx, bomb->image.dr0);
	mlx_destroy_image(bomb->mlx, bomb->image.dr1);
	mlx_destroy_image(bomb->mlx, bomb->image.f1);
	mlx_destroy_image(bomb->mlx, bomb->image.f2);
	mlx_destroy_image(bomb->mlx, bomb->image.f3);
	mlx_destroy_image(bomb->mlx, bomb->image.land);
	mlx_destroy_image(bomb->mlx, bomb->image.p1);
	mlx_destroy_image(bomb->mlx, bomb->image.p2);
	mlx_destroy_image(bomb->mlx, bomb->image.vil);
	mlx_destroy_image(bomb->mlx, bomb->image.wall);
	mlx_destroy_window(bomb->mlx, bomb->window);
	free(bomb->str);
	exit(0);
}

void	game_init(t_game *g, char *map)
{
	g->mlx = mlx_init();
	g->image = xpm_to_image(g->mlx);
	read_map(g, map);
	general_check(g);
	g->window = mlx_new_window(g->mlx, g->wid * 64, g->hei * 64, "so_long");
	set_img(g);
}

int	key_press(int keycode, t_game *tap)
{
	if (keycode == KEY_ESC)
		exit_game(tap);
	if (keycode == KEY_W)
		move_up(tap);
	if (keycode == KEY_S)
		move_down(tap);
	if (keycode == KEY_D)
		move_right(tap);
	if (keycode == KEY_A)
		move_left(tap);
	return (0);
}

int	render_frame(t_game *game)
{
	set_img(game);
	return (1);
}

int	main(int ac, char *av[])
{
	t_game	game;

	if (ac != 2)
		print_error("Map not found :(");
	game_init(&game, av[1]);
	mlx_loop_hook(game.mlx, render_frame, &game);
	mlx_hook(game.window, KEY_EVENT_PRESS, 0, &key_press, &game);
	mlx_hook(game.window, 17, 0, &destroy_notify, &game);
	mlx_loop(game.mlx);
	return (0);
}
