/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abounab <abounab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 17:07:36 by abounab           #+#    #+#             */
/*   Updated: 2023/12/15 18:22:30 by abounab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	size_t	total_len;
	size_t	i;

	i = 0;
	total_len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	joined = (char *) malloc(sizeof(char) * total_len + 1);
	if (!joined)
		return (NULL);
	while (i < total_len)
	{
		if (*s1)
			*(joined + i) = *((char *)s1++);
		else
			*(joined + i) = *((char *)s2++);
		i++;
	}
	*(joined + i) = 0;
	return (joined);
}
