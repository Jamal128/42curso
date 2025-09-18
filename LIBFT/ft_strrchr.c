/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaatif-a <jamalch2468@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 19:32:50 by jaatif-a          #+#    #+#             */
/*   Updated: 2025/09/18 19:53:17 by jaatif-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *str, int search)
{
	size_t	len;

	len = 0;

	while (str[len])
		len++;
	while (len-- > 0)
	{
		if (str[len] == (unsigned char)search)
		{
			return ((char *)(str+len));
		}
	}
	if (search == '\0')
		return ((char *)(str+len));
	return (0);
}

#include <stdio.h>
#include <string.h>

int main() {
   const char str[] = "Tutorialspoint";
   const char ch = 'n';

   char* ptr = ft_strrchr(str, ch);

   if (ptr) {
       printf("Last occurrence of '%c' in \"%s\" is at index %ld\n", ch, str, ptr - str);
   } else {
       printf("'%c' is not present in \"%s\"\n", ch, str);
   }

   return 0;
}