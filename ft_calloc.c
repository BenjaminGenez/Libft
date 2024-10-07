/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igenez-y <igenez-y@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 14:30:47 by igenez-y          #+#    #+#             */
/*   Updated: 2024/09/28 14:30:55 by igenez-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*alloc;

	alloc = malloc(count * size);
	if (alloc == NULL)
		return (NULL);
	ft_bzero(alloc, count * size);
	return (alloc);
}
