/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maminran <maminran@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 15:03:58 by maminran          #+#    #+#             */
/*   Updated: 2025/03/19 00:21:13 by maminran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (ft_strlen(s) < start)
		len = 0;
	if ((ft_strlen(s) - start) < len)
		len = ft_strlen(s) - start;
	if (start <= ft_strlen(s))
	{
		str = malloc(sizeof(char) * (len + 1));
		if (!str)
			return (NULL);
		while (i < len && s[start + i] != '\0')
		{
			str[i] = s[start + i];
			i++;
		}
	}
	else
		str = malloc(sizeof(char));
	str[i] = '\0';
	return (str);
}
