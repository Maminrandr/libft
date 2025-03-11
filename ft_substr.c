/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maminran <maminran@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 15:03:58 by maminran          #+#    #+#             */
/*   Updated: 2025/03/11 16:20:49 by maminran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	slen;
	size_t	i;

	i = 0;
	slen = ft_strlen(s);
	if (slen > len)
		str = malloc(len + 1);
	else
		str = malloc(slen + 1);
	if (!str)
	{
		return (NULL);
	}
	while (start <= len)
	{
		*(str + i) = *((char *)s + start);
		start++;
		i++;	
	}
	str[i] = '\0';
	return (str);
}
