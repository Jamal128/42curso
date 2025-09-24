/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaatif-a <jamalch2468@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 19:33:57 by jaatif-a          #+#    #+#             */
/*   Updated: 2025/09/24 17:25:05 by jaatif-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

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

int	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	n;

	i = 0;
	if (size == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	n = size - 1;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[i])
		i++;
	return (i);
}

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

#include <stdio.h>
int	main()
{
	char gg[] = "Hola Que Tal";
	char *res = ft_substr(gg, 0, 12);
	printf("%s", res);
}