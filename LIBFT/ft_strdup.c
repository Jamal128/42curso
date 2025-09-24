/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaatif-a <jamalch2468@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 19:26:07 by jaatif-a          #+#    #+#             */
/*   Updated: 2025/09/24 17:19:59 by jaatif-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		size;
	char	*ptr;

	size = ft_strlen(str);
	ptr = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	ft_memcpy(ptr, str, size);
	ptr[size] = '\0';
	return (ptr);
}