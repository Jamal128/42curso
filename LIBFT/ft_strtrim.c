/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaatif-a <jamalch2468@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 18:20:36 by jaatif-a          #+#    #+#             */
/*   Updated: 2025/09/27 19:48:48 by jaatif-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	int		trimstart;
	int		trimend;
	char	*result;

	if (!s1 || !set)
		return (0);
	trimstart = 0;
	trimend = ft_strlen(s1);
	
	
	while(s1[trimstart] && ft_strchr(set, s1[trimstart]))
		trimstart++;
	while (trimend > trimstart && ft_strchr(set, s1[trimend - 1]))
		trimend--;
	result = malloc(sizeof(char) * (trimend - trimstart + 1));
	if (!result)
		return (NULL);
	result = ft_memcpy(result, (s1 + trimstart), (trimend - trimstart));
	return (result);
}
