/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaatif-a <jamalch2468@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 17:19:36 by jaatif-a          #+#    #+#             */
/*   Updated: 2025/09/23 17:52:39 by jaatif-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *str, int c, size_t n)
{
	unsigned char *s;
	unsigned char to_find;
	size_t			i;

	i = 0;
	s = (unsigned char*)str;
	to_find = (unsigned char)c;

	while (n > i)
	{
		if (s[i] == to_find)
		{
			return(s + i);
		}
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int main() {
   const char str1[] = "abcdef";
   const char ch = 'd';

   char* result = (char*)ft_memchr(str1, ch, strlen(str1));

   if (result != NULL) {
       printf("'%c' found at position %ld\n", ch, result - str1);
   } else {
       printf("'%c' not found in the string\n", ch);
   }

   return 0;
}