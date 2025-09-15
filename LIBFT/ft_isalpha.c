/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaatif-a <jamalch2468@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 10:28:43 by jaatif-a          #+#    #+#             */
/*   Updated: 2025/09/15 11:07:57 by jaatif-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isalpha(int c)
{
	if (c != '\0')
	{
		if (((c >= 'a' && c<= 'z')
				|| (c >= 'A' && c <= 'Z')))
		{
			return (1);
		}
	}
	return (0);
}

#include <stdio.h>
int	main()
{
	char c = 'f';
	if (isalpha(c))
	{
		printf("is alpha");
	}
	else
		printf("no alpha");
}