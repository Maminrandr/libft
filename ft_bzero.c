/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maminran <maminran@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 11:43:54 by maminran          #+#    #+#             */
/*   Updated: 2025/03/05 15:27:57 by maminran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*cast;
	size_t	i;

	cast = (char *) s;
	i = 0;
	while (i < n)
	{
		cast[i] = 0;
		i++;
	}
}
/*
int	main ()
{
	char str [] = "kkkkasdf";
	
	ft_bzero(str,2);
	for (int i = 0; i < 10; i++)
	{
		printf("%c",str[i]);
	}	
}
*/
