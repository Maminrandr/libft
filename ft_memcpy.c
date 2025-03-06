/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maminran <maminran@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 14:51:52 by maminran          #+#    #+#             */
/*   Updated: 2025/03/05 15:28:26 by maminran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((char *) dest + i) = *((char *) src + i);
		i++;
	}
	*((char *) dest + i) = '\0';
	return (dest);
}
/*
int main ()
{
	char c []= "hello";
	char d [] = "cc";
	
	printf("%s",(char*)( ft_memcpy(d, c, 8)));
}
*/
