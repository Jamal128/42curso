/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaatif-a <jamalch2468@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 10:44:13 by jaatif-a          #+#    #+#             */
/*   Updated: 2025/09/15 11:10:21 by jaatif-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isdigit(int n)
{
	if (n != '\0')
	{
		if (n >= '0' && n<= '9')
		{
			return (1);
		}
	}
	return (0);
}

#include <stdio.h>
int	main()
{
	char c = 'c';
	if (isdigit(c))
	{
		printf("is digit");
	}
	else
		printf("no digit");
}