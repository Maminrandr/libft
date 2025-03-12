/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maminran <maminran@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 15:03:58 by maminran          #+#    #+#             */
/*   Updated: 2025/03/12 15:18:00 by maminran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
    char *str;
    size_t i;

    if (!s)
        return NULL;
    str = (char *)malloc(len + 1);
    if (!str)
        return NULL;
    i = 0;
    while (i < len && s[start + i] != '\0')
    {
        str[i] = s[start + i];
        i++;
    }
    str[i] = '\0';
    return (str);
}