/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igenez-y <igenez-y@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 14:46:38 by igenez-y          #+#    #+#             */
/*   Updated: 2024/09/28 14:46:39 by igenez-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	s1_len;
	size_t	total_len;

	s1_len = ft_strlen(s1) + 1;
	total_len = ft_strlen(s2) + s1_len;
	new_str = (char *)malloc(total_len * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	ft_strlcpy(new_str, s1, s1_len);
	ft_strlcat(new_str, s2, total_len);
	return (new_str);
}
