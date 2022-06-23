/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lose_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberri <mberri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 09:32:56 by mberri            #+#    #+#             */
/*   Updated: 2022/06/21 11:25:03 by mberri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./so_long.h"

void	lose_game(t_game *game)
{
	game->walk_cnt++;
	ft_putstr("You lose :( try again :) \n");
	exit_game(game);
}