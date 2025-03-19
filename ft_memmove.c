/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maminran <maminran@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 09:20:30 by maminran          #+#    #+#             */
/*   Updated: 2025/03/18 23:48:10 by maminran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if ((!dest && !src))
		return (NULL);
	if (dest < src)
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else if (dest >= src)
	{
		i = n;
		while (i > 0)
		{
			i--;
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		}
	}
	return (dest);
}
/*
int	main(void) {
	char str[] = "ABC HELLOWORLD 0123456789 ";
	char dest [100];
	//memmove(str + 0, str + 2, 1); // Déplace les 1 octets de str+2 à str+0
	//printf("%s\n", str); // Affiche le résultat
	printf("%s",ft_memmove(str + 4, str + 11, 10));
	//Déplace les 10 octets de str+11 à str+0
	return (0);
}
*/
