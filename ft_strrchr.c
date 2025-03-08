/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maminran <maminran@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 11:07:39 by maminran          #+#    #+#             */
/*   Updated: 2025/03/08 11:07:39 by maminran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    size_t len = ft_strlen(s);

    while (len > 0)
	{
        if (s[len - 1] == (char)c)
            return (char *)(s + len - 1);
        len--;
    }
    if (s[len] == (char)c)
	{
        return (char *)(s + len);
	}
	return NULL;
}
/*
int main() {
    const char *str = "coucou oi";
    char *ptr = ft_strrchr(str, 'c');

    if (ptr) {
        printf("Trouvé : %s\n", ptr);
    } else {
        printf("Caractere non trouve\n");
    }
    return 0;
}
*/
