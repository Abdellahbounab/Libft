/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abounab <abounab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 19:59:23 by abounab           #+#    #+#             */
/*   Updated: 2023/12/09 16:07:45 by abounab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_dst;
	size_t	len_src;

	i = 0;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen((char *)src);
	if (size <= len_dst)
		return (len_src + size);
	while (size > len_dst + i + 1 && src[i])
	{
		dst[i + len_dst] = src[i];
		i++;
	}
	dst[i + len_dst] = '\0';
	return (len_src + len_dst);
}

/*
	int main () {

   char string[] = "lorem";
    char buffer[15];
    char test[15];
    int size = 15;
    int r;
    int x;

   ft_memset(buffer, 0, 15);
   ft_memset(test, 0, 15);

   ft_memset(buffer, 'r', 6);
   ft_memset(test, 'r', 6);
   
   buffer[11] = 'a';
   test[11] = 'a';
   

    r = ft_strlcat(buffer,string,size);
    x = strlcat(test,string,size);


   printf("%s, length %d\n",  buffer,r);
   printf("%s, length %d\n",  test,x);

}
*/