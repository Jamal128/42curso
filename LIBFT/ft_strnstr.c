/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaatif-a <jamalch2468@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 18:18:32 by jaatif-a          #+#    #+#             */
/*   Updated: 2025/09/27 19:44:59 by jaatif-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *str,const char * to_find, size_t len)
{
	size_t		find_len;

	find_len = ft_strlen(to_find);

	if (find_len == 0)
		return ((char *)str);
	
	while (*str && find_len <= len)
	{
		if(*str == *to_find && (ft_strncmp(str, to_find, find_len) == 0))
			return ((char *)str);
		str++;
		len--;
	}
	return (0);
}
