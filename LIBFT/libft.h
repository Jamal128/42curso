/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaatif-a <jamalch2468@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 16:59:55 by jaatif-a          #+#    #+#             */
/*   Updated: 2025/09/24 18:15:37 by jaatif-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H 
#include <stdlib.h>

int		ft_isalpha(int c);
int		ft_isdigit(int n);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_strlen(const char *str);
int	ft_tolower(int c);
int	ft_toupper(int c);

void	*ft_memset(void *str, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest_s, const void *src_s, size_t n);
void	*ft_memmove(void *dest_s, const void *src_s, size_t n);

char *ft_strchr(const char *str, int search);
int	ft_strlcat(char *dest, const char *src, size_t size);
int	ft_strlcpy(char *dest, const char *src, size_t size);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
char *ft_strrchr(const char *str, int search);
void *strnstr(const char *str, const char * to_find, size_t len);
char	*ft_strdup(const char *str);


#endif