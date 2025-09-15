/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaatif-a <jamalch2468@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 11:15:41 by jaatif-a          #+#    #+#             */
/*   Updated: 2025/09/15 11:21:40 by jaatif-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isalpha(int c)
{
	if (c != '\0')
	{
		if (c >= 0 || c <= 127)
		{
			return (1);
		}
	}
	return (0);
}

#include <stdio.h>
int	main()
{
	char c = '0';
	if (isalpha(c))
	{
		printf("is ascii");
	}
	else
		printf("no ascii");
}