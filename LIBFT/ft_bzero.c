/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaatif-a <jamalch2468@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 17:34:16 by jaatif-a          #+#    #+#             */
/*   Updated: 2025/09/18 17:47:08 by jaatif-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	size_t i;
	i = 0;

	while (n > i)
	{
		((char *)s)[i] = 0;
		i++;
	}
}

#include <stdio.h>
#include <string.h>

int main () 
{
   char str[50];

   strcpy(str, "Welcome to Tutorialspoint");
   puts(str);

   ft_bzero(str, 7);
   puts(str);
   printf("%s \n", str);
   
   return(0);
}