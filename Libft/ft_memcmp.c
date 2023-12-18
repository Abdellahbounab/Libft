/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abounab <abounab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 21:18:41 by abounab           #+#    #+#             */
/*   Updated: 2023/12/15 17:43:26 by abounab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	int	i;

	i = 0;
	if (!n)
		return (n);
	while (--n && *(unsigned char *)str1 == *(unsigned char *)str2) 
	{
		str1++;
		str2++;
	}
	return ((int)(*(unsigned char *)str1 - *(unsigned char *)str2));
}
