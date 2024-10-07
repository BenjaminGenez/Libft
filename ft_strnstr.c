/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igenez-y <igenez-y@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 14:49:13 by igenez-y          #+#    #+#             */
/*   Updated: 2024/09/30 10:05:57 by igenez-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	lenstr;

	lenstr = ft_strlen(little);
	if (!*little)
		return ((char *)big);
	while (*big && len > 0)
	{
		if (!(ft_strncmp(big, little, lenstr)) && len >= lenstr)
		{
			return ((char *)big);
		}
		big++;
		len--;
	}
	return (NULL);
}
