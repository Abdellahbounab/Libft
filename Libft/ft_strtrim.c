/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abounab <abounab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 17:39:43 by abounab           #+#    #+#             */
/*   Updated: 2023/12/18 22:03:40 by abounab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_setted(char c, const char *set)
{
	while (*set)
		if (c == *set)
			return (1);
	else
		set++;
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	end;
	size_t	start;
	size_t	i;

	i = 0;
	start = 0;
	end = ft_strlen((char *)s1);
	if (!*s1)
		return (ft_strdup(""));
	while (is_setted(s1[start], set) && s1[start])
		start++;
	while (start != end && is_setted(s1[--end], set))
		;
	trim = (char *) malloc (sizeof(char) * (end - start + 1) + 1);
	if (!trim)
		return (0);
	while (s1[start] && start <= end)
	{
		trim[i] = s1[start];
		start++;
		i++;
	}
	trim[i] = 0;
	return (trim);
}
