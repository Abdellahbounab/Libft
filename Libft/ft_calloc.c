/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abounab <abounab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 19:55:55 by abounab           #+#    #+#             */
/*   Updated: 2023/12/17 19:35:21 by abounab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void			*array;

	if ((int)num < 0 && (int)size < 0)
		return (NULL);
	array = malloc (size * num);
	if (!array)
		return (NULL);
	ft_bzero(array, size * num);
	return (array);
}
