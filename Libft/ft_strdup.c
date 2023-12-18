/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abounab <abounab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 18:40:52 by abounab           #+#    #+#             */
/*   Updated: 2023/12/16 17:57:53 by abounab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strdup(const char *s1)
{
	char	*copy;
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen((char *)s1);
	copy = (char *) malloc(sizeof(char) * len + 1);
	if (!copy)
		return (NULL);
	while (s1[i])
	{
		copy[i] = (char)s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
