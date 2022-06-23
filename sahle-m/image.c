/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   image.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberri <mberri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 16:06:53 by mberri            #+#    #+#             */
/*   Updated: 2022/06/21 11:23:25 by mberri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

t_img	xpm_to_image(void	*mlx)
{
	t_img	pic;
	int		height;
	int		width;

	pic.wall = mlx_xpm_file_to_image(mlx, "./Image/Wall.xpm", &width, &height);
	pic.p1 = mlx_xpm_file_to_image(mlx, "./Image/Player1.xpm", &width, &height);
	pic.p2 = mlx_xpm_file_to_image(mlx, "./Image/Player2.xpm", &width, &height);
	pic.f1 = mlx_xpm_file_to_image(mlx, "./Image/fire1.xpm", &width, &height);
	pic.f2 = mlx_xpm_file_to_image(mlx, "./Image/fire2.xpm", &width, &height);
	pic.f3 = mlx_xpm_file_to_image(mlx, "./Image/fire3.xpm", &width, &height);
	pic.dr0 = mlx_xpm_file_to_image(mlx, "./Image/Door0.xpm", &width, &height);
	pic.dr1 = mlx_xpm_file_to_image(mlx, "./Image/Door1.xpm", &width, &height);
	pic.vil = mlx_xpm_file_to_image(mlx, "./Image/enemy.xpm", &width, &height);
	pic.land = mlx_xpm_file_to_image(mlx, "./Image/land.xpm", &width, &height);
	return (pic);
}

void	put_img(t_game *gg, int w, int h)
{
	mlx_put_image_to_window(gg->mlx, gg->window, gg->image.land,
		w * 64, h * 64);
	if (gg->str[h * gg->wid + w] == '1')
		put_wall(gg, w, h);
	else if (gg->str[h * gg->wid + w] == 'P')
	{
		put_player(gg, w, h);
	}
	else if (gg->str[h * gg->wid + w] == 'C')
	{
		put_collectible(gg, w, h);
	}
	else if (gg->str[h * gg->wid + w] == 'E')
	{
		put_door(gg, w, h);
	}
	else if (gg->str[h * gg->wid + w] == 'V')
	{
		put_enemy(gg, w, h);
	}
}

void	set_img(t_game *game)
{
	int		height;
	int		width;
	char	*str;

	height = 0;
	str = NULL;
	mlx_clear_window(game->mlx, game->window);
	while (height < game->hei)
	{
		width = 0;
		while (width < game->wid)
		{
			str = ft_itoa(game->walk_cnt);
			mlx_string_put(game->mlx, game->window, 50, 0, 0x0000FF00,
				"Moves:");
			mlx_string_put(game->mlx, game->window, 120, 0, 0xFF0000, str);
			free(str);
			put_img(game, width, height);
			width++;
		}
		height++;
	}
}
