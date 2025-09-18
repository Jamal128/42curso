/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaatif-a <jamalch2468@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 18:58:53 by jaatif-a          #+#    #+#             */
/*   Updated: 2025/09/18 19:02:53 by jaatif-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

// C program to demonstrate
// example of toupper() function.
#include <ctype.h>
#include <stdio.h>

int main()
{
    char ch;

    ch = 'z';
    printf("%c in uppercase is represented as %c",
           ch, ft_toupper(ch));

    return 0;
}