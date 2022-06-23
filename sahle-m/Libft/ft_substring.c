/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substring.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberri <mberri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:57:43 by mberri            #+#    #+#             */
/*   Updated: 2022/06/23 18:28:16 by mberri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substring(char *s, int start, int len)
{
	char			*str;
	int	i;
	int			j;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		return (ft_calloc(1, sizeof(char)));
	if (ft_strlen(s) - start > len)
		str = (char *)malloc(len + 1 * sizeof(char));
	else
		str = (char *)malloc(((ft_strlen(s) - start) + 1) * sizeof(char));
	if (!str)
		return (0);
	while (s[i])
	{
		if (i >= start && j < len)
			str[j++] = s[i];
		i++;
	}
	str[j] = '\0';
	return (str);
}
