/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberri <mberri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 20:24:43 by mberri            #+#    #+#             */
/*   Updated: 2022/06/21 11:38:31 by mberri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	move_up(t_game *game)
{
	int	i;

	i = 0;
	while (i++ < ft_strlen(game->str))
	{
		if (game->str[i] == 'P')
			break ;
	}
	if (game->str[i - game->wid] == 'C')
		game->collect_cnt++;
	if (game->str[i - game->wid] == 'E' && game->all_col == game->collect_cnt)
		win_game(game);
	if (game->str[i - game->wid] == 'V')
		lose_game(game);
	if (game->str[i - game->wid] != '1' && game->str[i - game->wid] != 'E')
	{
		game->str[i] = '0';
		game->str[i - game->wid] = 'P';
		game->walk_cnt++;
		ft_putstr("move number: ");
		ft_putnbr(game->walk_cnt);
		ft_putchar('\n');
		set_img(game);
	}
}

void	move_down(t_game *game)
{
	int	i;

	i = 0;
	while (i++ < ft_strlen(game->str))
	{
		if (game->str[i] == 'P')
			break ;
	}
	if (game->str[i + game->wid] == 'C')
		game->collect_cnt++;
	if (game->str[i + game->wid] == 'E' && game->all_col == game->collect_cnt)
		win_game(game);
	if (game->str[i + game->wid] == 'V')
		lose_game(game);
	if (game->str[i + game->wid] != '1' && game->str[i + game->wid] != 'E')
	{
		game->str[i] = '0';
		game->str[i + game->wid] = 'P';
		game->walk_cnt++;
		ft_putstr("move number: ");
		ft_putnbr(game->walk_cnt);
		ft_putchar('\n');
		set_img(game);
	}
}

void	move_left(t_game *game)
{
	int	i;

	i = 0;
	while (i++ < ft_strlen(game->str))
	{
		if (game->str[i] == 'P')
			break ;
	}
	if (game->str[i - 1] == 'C')
		game->collect_cnt++;
	if (game->str[i - 1] == 'E' && game->all_col == game->collect_cnt)
		win_game(game);
	if (game->str[i - 1] == 'V')
		lose_game(game);
	if (game->str[i - 1] != '1' && game->str[i - 1] != 'E')
	{
		game->str[i] = '0';
		game->str[i - 1] = 'P';
		game->walk_cnt++;
		game->y = 1;
		ft_putstr("move number: ");
		ft_putnbr(game->walk_cnt);
		ft_putchar('\n');
		set_img(game);
	}
}

void	move_right(t_game *game)
{
	int	i;

	i = 0;
	while (i++ < ft_strlen(game->str))
	{
		if (game->str[i] == 'P')
			break ;
	}
	if (game->str[i + 1] == 'C')
		game->collect_cnt++;
	if (game->str[i + 1] == 'E' && game->all_col == game->collect_cnt)
		win_game(game);
	if (game->str[i + 1] == 'V')
		lose_game(game);
	if (game->str[i + 1] != '1' && game->str[i + 1] != 'E')
	{
		game->str[i] = '0';
		game->str[i + 1] = 'P';
		game->walk_cnt++;
		game->y = 2;
		ft_putstr("move number: ");
		ft_putnbr(game->walk_cnt);
		ft_putchar('\n');
		set_img(game);
	}
}
