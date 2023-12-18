/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abounab <abounab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 15:55:00 by abounab           #+#    #+#             */
/*   Updated: 2023/12/18 22:02:06 by abounab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	s_len;

	i = 0;
	s_len = ft_strlen((char *)s) - start;
	if (ft_strlen((char *)s) < start || !len || !*s)
		return (ft_strdup(""));
	if (s_len > len)
		s_len = len;
	sub = (char *) malloc (sizeof(char) * s_len + 1);
	if (!sub || !s)
		return (0);
	while (i < s_len && ft_strlen((char *)s) > start + i)
	{
		*(sub + i) = *((char *)s + start + i);
		i++;
	}
	*(sub + i) = 0;
	return (sub);
}
