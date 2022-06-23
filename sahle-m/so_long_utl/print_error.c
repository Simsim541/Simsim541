/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberri <mberri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 13:17:32 by mberri            #+#    #+#             */
/*   Updated: 2022/06/21 11:25:07 by mberri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./so_long.h"

void	print_error(char *str)
{
	write(1, "Error\n", 6);
	ft_putstr(str);
	exit(0);
}

int	destroy_notify(t_game *game)
{
	ft_putstr("EXITED SUCCESFULLY\n");
	exit_game(game);
	return (1);
}
