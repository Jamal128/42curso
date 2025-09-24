/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaatif-a <jamalch2468@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 17:58:40 by jaatif-a          #+#    #+#             */
/*   Updated: 2025/09/24 16:41:38 by jaatif-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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


void	*ft_memmove(void *dest_s, const void *src_s, size_t n)
{
	unsigned char		*d;
	const unsigned char *s;

	if (!dest_s || !src_s)
		return (NULL);

	d = (unsigned char *)dest_s;
	s = (unsigned char *)src_s;
	
	if (d < s)
		return(ft_memcpy(d, s, n));
	while (n-- > 0)
	{
		d[n] = s[n];
	}
	return (d);
}

#include <stdio.h> 
#include <string.h> 

int main() 
{ 
	char dest_str[] = "Tutorialspoint"; 
	char src_str[] = "Tutors";

	puts("source string [src_str] before memmove:-"); 
	puts(dest_str); 

	/* Copies contents from source to destination */
	ft_memmove(dest_str, src_str, sizeof(src_str)); 

	puts("\nsource string [src_str] after memmove:-"); 
	puts(dest_str); 
	return 0; 
}