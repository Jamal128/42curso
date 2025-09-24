/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaatif-a <jamalch2468@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 17:42:03 by jaatif-a          #+#    #+#             */
/*   Updated: 2025/09/23 18:06:40 by jaatif-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			i;

	i = 0;
	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;

	while (i < n)
		{
			if (*s1 != *s2)
				return (*s1  - *s2);
			++i;
			++s1;
			++s2;
		}
	return (0);
}

#include <stdio.h>
#include <string.h>

int main() {
   char str1[] = "12345678901400345678";
   char str2[] = "1234567";

   int result = memcmp(str1, str2, 10);

   if (result < 0) {
       printf("First is less than second.\n");
   } else if (result == 0) {
       printf("First is equal to second.\n");
   } else {
       printf("First is greater than second.\n");
   }
    return 0;
}