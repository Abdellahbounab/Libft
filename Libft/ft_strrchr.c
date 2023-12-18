/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abounab <abounab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 20:56:33 by abounab           #+#    #+#             */
/*   Updated: 2023/12/15 16:59:03 by abounab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*copy;

	copy = (char *)s;
	i = ft_strlen(copy);
	while (i >= 0)
	{
		if (copy[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (0);
}
