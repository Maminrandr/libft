/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maminran <maminran@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 09:20:30 by maminran          #+#    #+#             */
/*   Updated: 2025/03/06 11:01:15 by maminran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (src == NULL || dest == NULL)
		return (dest);
	while (i < n)
	{
		*((char *) dest + i) = *((char *) src + i);
		i++;
	}
	return (dest);
}
//pas de *((char *) dest + i) = '\0' ici, sinon ca deveint comme cpy

/*
int main() {
    char str[] = "9876543210 0123456789 ";
	char dest [100];
    //memmove(str + 0, str + 2, 1); // Déplace les 1 octets de str+2 à str+0
    //printf("%s\n", str); // Affiche le résultat
	printf("%s",ft_memmove(str + 0, str + 11, 10));
	//Déplace les 10 octets de str+11 à str+0
    return 0;
}
*/
