/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaatif-a <jamalch2468@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 19:06:57 by jaatif-a          #+#    #+#             */
/*   Updated: 2025/09/27 19:42:22 by jaatif-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *str, int search)
{

	while(*str)
	{
		if (*str == search)
			return (char *)str;
		str++;
	}
	if (search == '\0')
		return ((char *)str);
	return (0);
}
