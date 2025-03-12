/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maminran <maminran@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 16:01:14 by maminran          #+#    #+#             */
/*   Updated: 2025/03/12 16:27:48 by maminran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	
	str = malloc(sizeof (int) * sizeof(n) + 1);
	if (!str)
	{
		return (NULL);
	}
	while (n)
	{
		if (n)
		{
			/* code */
		}
	}
}
