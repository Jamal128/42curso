/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaatif-a <jamalch2468@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 18:18:32 by jaatif-a          #+#    #+#             */
/*   Updated: 2025/09/23 19:00:48 by jaatif-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n == 0)
		return (0);
	while (*s1 == *s2 && n > 1 && *s1)
	{
		s1++;
		s2++;
		n--;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

char *ft_strnstr(char *str, char * to_find, size_t len)
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

#include <stdio.h>
#include <string.h>

int main(){
   char str[] = "It is better to live one day as a King";
   char target[] = "is";
   char *p = ft_strnstr(str, target,5);

   if (p)
        printf("'%s' is present in the given string \"%s\" at position %ld", target, str, p-str);
   else
        printf("%s is not present \"%s\"", target, str);

    return 0;
}