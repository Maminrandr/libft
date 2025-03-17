/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maminran <maminran@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 10:09:07 by maminran          #+#    #+#             */
/*   Updated: 2025/03/17 17:08:13 by maminran         ###   ########.fr       */
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
/*
#include <stdio.h>
int main()
{
	char str[] = "coucou";
	int c = 's';

	printf("%s", (char *) (ft_memset(str, c, 4)));
}
*/
