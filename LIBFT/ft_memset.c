/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaatif-a <jamalch2468@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 16:51:40 by jaatif-a          #+#    #+#             */
/*   Updated: 2025/09/27 19:42:19 by jaatif-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *str, int c, size_t n)
{
	unsigned char *s;
	size_t			i;

	i = 0;
	s = (unsigned char *)str;

	while (i < n)
	{
		s[i] = c;
		i++;
	}
	return (str);
}
