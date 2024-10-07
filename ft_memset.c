/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igenez-y <igenez-y@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 14:42:01 by igenez-y          #+#    #+#             */
/*   Updated: 2024/09/28 14:42:04 by igenez-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*mholder;

	mholder = (unsigned char *)s;
	while (n > 0)
	{
		*mholder = (unsigned char)c;
		mholder++;
		n--;
	}
	return (s);
}
