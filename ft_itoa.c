/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igenez-y <igenez-y@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 16:33:47 by igenez-y          #+#    #+#             */
/*   Updated: 2024/09/30 11:54:01 by igenez-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	get_digits(int n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*str_n;
	size_t		digits;
	long int	num;

	num = n;
	digits = get_digits(n);
	if (n < 0)
	{
		num *= -1;
		digits++;
	}
	str_n = (char *)malloc(sizeof(char) * (digits + 1));
	if (str_n == NULL)
		return (NULL);
	str_n[digits] = 0;
	while (digits--)
	{
		str_n[digits] = num % 10 + '0';
		num = num / 10;
	}
	if (n < 0)
		str_n[0] = '-';
	return (str_n);
}
