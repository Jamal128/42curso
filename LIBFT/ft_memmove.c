/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaatif-a <jamalch2468@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 17:58:40 by jaatif-a          #+#    #+#             */
/*   Updated: 2025/09/18 18:43:52 by jaatif-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


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
    char str[100] = "Learningisfun";
    char *first, *second;
    first = str;
    second = str;
    printf("Original string :%s\n ", str);
    
    // when overlap happens then it just ignore it
    memcpy(first + 8, first, 10);
    printf("memcpy overlap : %s\n ", str);

    // when overlap it start from first position
    memmove(second + 8, first, 10);
    printf("memmove overlap : %s\n ", str);

    return 0;
}