/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maminran <maminran@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 12:18:41 by maminran          #+#    #+#             */
/*   Updated: 2025/03/16 12:18:41 by maminran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_intlen(size_t number)
{
	size_t	len;
	if (number <= 0)
		len = 1;
	else
		len = 0;
	while (number)
	{
		len ++;
		number /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*str;
	size_t			len;
	unsigned int	num;

	if (n < 0)
		num = -n;
	num = n;
	len = ft_intlen(n);
	str = (char *)malloc((len + 1) * sizeof (char));
	if (!str)
	{
		return (NULL);
	}
	str[len] = '\0';
	if (n < 0)
        str[0] = '-';
	while (len && str[len] != '-') 
	{
		str[len] = (num % 10) + '0';
		num /= 10;
		len--; //tokony mitovy ny asany satria anaty boucle ray
	}
	return (str);
}
