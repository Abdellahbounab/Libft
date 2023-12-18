/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abounab <abounab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 22:20:23 by abounab           #+#    #+#             */
/*   Updated: 2023/12/15 18:27:45 by abounab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*count_bits(int n, int *cmpt, int negative)
{
	int		counter;
	char	*num;

	counter = 0;
	if (negative == -1)
		counter++;
	if (n == 0)
		counter++;
	while (n)
	{
		counter++;
		n /= 10;
	}
	*cmpt = counter + 1;
	num = (char *) malloc (sizeof(char) * counter + 1);
	if (!num)
		return (NULL);
	num[counter] = 0;
	return (num);
}

static void	num_str(int len, char *str, int number, int neg)
{
	while (--len >= 0)
	{
		str[len] = (number % 10) + '0';
		number /= 10;
	}
	if (neg == -1)
		str[0] = '-';
}

static void	special_num(int n, char *str)
{
	int		i;
	char	*max;

	i = 0;
	max = "-2147483648";
	if (n == 0)
		str[i] = '0';
	else
	{
		while (max[i])
		{
			str[i] = max[i];
			i++;
		}
	}
}

char	*ft_itoa(int n)
{
	char	*strnum;
	int		counter;
	int		neg;

	counter = 0;
	neg = 1;
	if (n == -2147483648)
		neg *= -1;
	else if (n < 0)
	{
		n *= -1;
		neg *= -1;
	}
	strnum = count_bits(n, &counter, neg);
	if (!strnum)
		return (NULL);
	if (n == -2147483648 || n == 0)
		special_num(n, strnum);
	else
		num_str(counter - 1, strnum, n, neg);
	return (strnum);
}
