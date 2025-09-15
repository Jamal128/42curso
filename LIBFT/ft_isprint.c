/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaatif-a <jamalch2468@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 11:22:31 by jaatif-a          #+#    #+#             */
/*   Updated: 2025/09/15 11:25:20 by jaatif-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isalpha(int c)
{
	if (c != '\0')
	{
		if (c >= 32 && c <= 126)
		{
			return (1);
		}
	}
	return (0);
}

#include <stdio.h>
int	main()
{
	char c = '-';
	if (isalpha(c))
	{
		printf("is print");
	}
	else
		printf("no print");
}