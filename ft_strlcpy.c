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
static	void	*ft_sncpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (src == NULL || dest == NULL)
		return (NULL);
	while (i < n)
	{
		*((char *) dest + i) = *((char *) src + i);
		i++;
	}
	*((char *) dest + i) = '\0';
	return (dest);
}
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;


	i = 0;
	if (src == NULL || dst == NULL)
		return (0);
	size = ft_slen(src);
	while (src[i] != '\0' && (i < size - 1))
	{
		memcpy(dst, src, size);
		i++;
	}
	return (size);
}

int main ()
{
	char str [] = "0123456789";
	char dest [] = "hello";
	printf("%zu\n",strlcpy(dest,str,1));
	printf("%s",dest);
}