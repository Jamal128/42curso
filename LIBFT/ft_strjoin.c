/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaatif-a <jamalch2468@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 17:25:49 by jaatif-a          #+#    #+#             */
/*   Updated: 2025/09/24 18:18:06 by jaatif-a         ###   ########.fr       */
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

int	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;

	i = 0;
	dest_len = 0;
	src_len = 0;
	while (dest[dest_len] && dest_len < size)
		dest_len++;
	while (src[src_len])
		src_len++;
	if (dest_len >= size)
		return (size + src_len);
	while (src[i] && (i + dest_len + 1 < size))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	if (dest_len + i < size)
		dest[dest_len + i] = '\0';
	return (src_len + dest_len);
}


char *ft_strjoin(char const *s1, char const *s2)
{
	size_t	lens1;
	size_t	lens2;
	char	*catstr;

	if(!s1 || !s2)
	{
		if (!s1)
			return (ft_strdup(s2));
		else if (!s2)
			return (ft_strdup(s1));
		else
			ft_strdup("");
	}
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);

	catstr = malloc(sizeof(char) * (lens1 + lens2 + 1));

	ft_strlcpy(catstr, s1, lens1 + 1);
	ft_strlcat(catstr, s2, lens1 + lens2 + 1);
	return (catstr);
}

#include <stdio.h>
int main()
{
	char *s1 = "golden";
	char *s2 = " retriever";

	printf("%s", ft_strjoin(s1, s2));
	return (0);
}