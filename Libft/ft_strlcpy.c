/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abounab <abounab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 18:59:37 by abounab           #+#    #+#             */
/*   Updated: 2023/12/09 21:52:27 by abounab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_src;

	len_src = ft_strlen((char *)src);
	i = 0;
	if (size > i)
	{
		while (i < size - 1 && src[i])
		{
			dst[i] = (char)src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len_src);
}
