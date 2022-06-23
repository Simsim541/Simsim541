/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_without_newline.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberri <mberri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 17:38:35 by mberri            #+#    #+#             */
/*   Updated: 2022/06/23 16:51:30 by mberri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./so_long.h"

char	*ft_strjoin_without_newline(char *s1, char *s2)
{
	char	*ptr;
	int		i;
	int		j;

	i = -1;
	j = 0;
	if (!s1 && !s2)
		return (0);
	if (!s2)
		return (ft_strdup_without_newline(s1));
	if (!s1)
		return (0);
	ptr = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!ptr)
		return (0);
	while (s1[++i])
		ptr[i] = s1[i];
	while (s2[j] && s2[i] != '\n')
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}
