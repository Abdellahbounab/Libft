/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abounab <abounab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 21:59:42 by abounab           #+#    #+#             */
/*   Updated: 2023/12/18 17:10:13 by abounab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	len_little;
	size_t	i;

	i = 0;
	len_little = ft_strlen(little);
	if (little[0] == '\0')
		return ((char *)big);
	while (*big && len_little <= len)
	{
		if (*big == *little && !ft_strncmp(big, little, len_little))
			return ((char *)big);
		big++;
		len--;
	}
	return (0);
}
