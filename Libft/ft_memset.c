/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abounab <abounab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 21:15:48 by abounab           #+#    #+#             */
/*   Updated: 2023/12/09 21:58:02 by abounab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *dest, int c, size_t len)
{
	unsigned char	*copy;

	copy = (unsigned char *)dest;
	while (len--)
		*(copy++) = (unsigned char)c;
	return (dest);
}
