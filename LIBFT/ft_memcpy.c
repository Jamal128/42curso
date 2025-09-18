/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaatif-a <jamalch2468@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 17:49:48 by jaatif-a          #+#    #+#             */
/*   Updated: 2025/09/18 18:44:07 by jaatif-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest_s, const void *src_s, size_t n)
{
	size_t	i;

	i = 0;
	
	if (dest_s == NULL || src_s == NULL)
		return (NULL);
	while (n > i)
	{
		((char *)dest_s)[i] = ((const char *)src_s)[i];
		i++;
	}
	return (dest_s);
}
