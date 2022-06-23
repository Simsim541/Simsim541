/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   win_game.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberri <mberri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 09:32:20 by mberri            #+#    #+#             */
/*   Updated: 2022/06/21 11:25:59 by mberri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	win_game(t_game *final)
{
	final->walk_cnt++;
	ft_putstr("congratulations you finish game with :");
	ft_putnbr(final->walk_cnt);
	ft_putstr(" step\n");
	exit(0);
}
