/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaatif-a <jamalch2468@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 19:03:08 by jaatif-a          #+#    #+#             */
/*   Updated: 2025/09/18 19:05:57 by jaatif-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

#include <ctype.h>
#include <stdio.h>

int main()
{
    char ch = 'M';
    printf("Original Character: %c\n", ch);
    // convert ch to lowercase
    ch=ft_tolower(ch);
    printf("After using tolower: %c", ch);

    return 0;
}