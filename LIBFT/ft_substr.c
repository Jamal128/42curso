/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaatif-a <jamalch2468@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 19:33:57 by jaatif-a          #+#    #+#             */
/*   Updated: 2025/09/27 19:43:06 by jaatif-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int		len_of_s;
	char	*substring;

	len_of_s = ft_strlen(s);

	if (!s)
		return (NULL);
	if (start > len_of_s)
		return (ft_strdup(""));

	substring = (char *)malloc((len + 1) * sizeof(char));
	if (!substring)
		return (NULL);
	ft_strlcpy(substring, (s + start), len);
	return (substring);
}
