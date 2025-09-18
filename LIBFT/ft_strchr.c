/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaatif-a <jamalch2468@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 19:06:57 by jaatif-a          #+#    #+#             */
/*   Updated: 2025/09/18 19:29:44 by jaatif-a         ###   ########.fr       */
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

#include <string.h>
#include <stdio.h>
int main() 
{
   char str[] = "This is simple string";
   char* sh;

   printf("Searching for the character in 's' in the given string i.e. \"%s\"\n", str);
   sh = strchr(str, 's');

   while (sh != NULL) 
   {
       printf("Found at position- %ld\n", sh - str + 1);
       sh = strchr(sh + 1, 's');
   }
   return 0;
}