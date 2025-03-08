/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maminran <maminran@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 11:50:49 by maminran          #+#    #+#             */
/*   Updated: 2025/03/06 12:36:27 by maminran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_slen(const char *s)
{
	size_t	i;

	i = 0;
	if (s == NULL)
		return (0);
	while (s [i] != '\0')
		i++;
	return (i);
}
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;


	i = 0;
	if (src == NULL || dst == NULL)
		return (0);
	src_len = ft_slen(src);
	if (size == 0)
		return (src_len);
	while (src[i] != '\0' && (i < size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}
/*
int main ()
{
	char str [] = "01234567";
	char dest [] = "0";
	int	slen;

	slen = ft_slen(str);
	printf("%zu\n",ft_strlcpy(dest,str,slen));
	printf("%zu", ft_slen(dest));
}
*/
