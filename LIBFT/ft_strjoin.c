/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaatif-a <jamalch2468@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 17:25:49 by jaatif-a          #+#    #+#             */
/*   Updated: 2025/09/27 19:47:02 by jaatif-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t	lens1;
	size_t	lens2;
	char	*catstr;

	if(!s1 || !s2)
	{
		if (!s1)
			return (ft_strdup(s2));
		else if (!s2)
			return (ft_strdup(s1));
		else
			ft_strdup("");
	}
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);

	catstr = malloc(sizeof(char) * (lens1 + lens2 + 1));

	ft_strlcpy(catstr, s1, lens1 + 1);
	ft_strlcat(catstr, s2, lens1 + lens2 + 1);
	return (catstr);
}
