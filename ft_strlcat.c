/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maminran <maminran@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 09:56:57 by maminran          #+#    #+#             */
/*   Updated: 2025/03/10 10:52:08 by maminran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size <= dst_len)
		return (size + src_len);
	i = 0;
	while (src[i] && (dst_len + i + 1) < size)
	{
		dest[dst_len + i] = src[i];
		i++;
	}
	dest[dst_len + i] = '\0';
	return (dst_len + src_len);
}
/*
int main() {
    char str[] = "hello";
	char dest [100] = "world";
    //memmove(str + 0, str + 2, 1); // Déplace les 1 octets de str+2 à str+0
    //printf("%s\n", str); // Affiche le résultat
	printf("%zu",ft_strlcat(dest, str, 40));
	//Déplace les 10 octets de str+11 à str+0
    return 0;
}
*/