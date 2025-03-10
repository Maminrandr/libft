/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maminran <maminran@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 16:17:29 by maminran          #+#    #+#             */
/*   Updated: 2025/03/10 16:58:10 by maminran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	taille;

	taille = nmemb * size;
	ptr = malloc(taille);
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	if (!ptr)
	{
		return (NULL);
	}
	ft_memset(ptr, 0, taille);
	return (ptr);
}
