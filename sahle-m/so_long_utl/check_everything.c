/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_everything.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberri <mberri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 13:24:51 by mberri            #+#    #+#             */
/*   Updated: 2022/06/23 19:07:55 by mberri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./so_long.h"

void	check_all(t_game *j)
{
	int	i;

	i = 0;
	while (j->str[i])
	{
		if (j->str[i] != '1' && j->str[i] != '0' && j->str[i] != 'V'
			&& j->str[i] != 'P' && j->str[i] != 'C' && j->str[i] != 'E')
		{
			print_error("Unknown Character in map !?\n");
		}
		i++;
	}
}

char	*ft_remove(char *str)
{
	char	*line;
	//char	*freed;
	int		size;
	int		i;

	i = 0;
	size = ft_strlen(str);
	if (str[size - 1] > 32)
		size = size - 1;
	else
		size = size - 2;
	while (str[i] && str[i] != '1' && (str[i] == '\t' || str[i] == ' '))
		i++;
	while(str[size] && str[size] != '1' && (str[size] == '\t' || str[size] == ' '))
			size--;
	size++;
	size = size - i;
	line = ft_substring(str, i, size);
	return(line);
}

int ft_check(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 32)
			return (1);
		i++;
	}
	return (0);
}