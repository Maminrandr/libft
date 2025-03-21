/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maminran <maminran@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 10:09:07 by maminran          #+#    #+#             */
/*   Updated: 2025/03/21 07:36:54 by maminran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*cast;
	size_t	i;

	i = 0;
	cast = (char *) s;
	while (i < n)
	{
		cast[i] = c;
		i++;
	}
	return (s);
}
