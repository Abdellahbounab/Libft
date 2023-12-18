/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abounab <abounab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 16:48:40 by abounab           #+#    #+#             */
/*   Updated: 2023/12/10 15:46:52 by abounab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (!dst && !src)
		return (0);
	if (dst <= src)
		return (ft_memcpy(dst, src, n));
	while (n--)
		*((unsigned char *)dst + n) = *((unsigned char *)src + n);
	return (dst);
}
