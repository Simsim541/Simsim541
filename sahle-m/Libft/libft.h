/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberri <mberri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:34:55 by mberri            #+#    #+#             */
/*   Updated: 2022/06/23 18:28:23 by mberri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

char	*ft_itoa(int n);
void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *str, int c, size_t len);
char	*ft_strdup(const char *string);
int		ft_strlen(const char *str);
void	*ft_calloc(size_t count, size_t size);
char	*ft_substring(char *s, int start, int len);
#endif
