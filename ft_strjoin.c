/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maminran <maminran@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 16:22:55 by maminran          #+#    #+#             */
/*   Updated: 2025/03/17 11:40:05 by maminran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char	*ft_strcat(char *dest, const char *src)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		*(dest + i) = src[j];
		i++;
		j++;
	}
	*(dest + i) = '\0';
	return (dest);
}

static char	*ft_strcpy(char *dest, const char *src)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;

	join = malloc((ft_strlen(s1) + ft_strlen(s2)) + sizeof(char));
	if (!join)
	{
		return (NULL);
	}
	ft_strcpy(join, s1);
	ft_strcat(join, s2);
	return (join);
}

/*int main()
{
	char	*join;

	char	str1 [] = "hello ";
	char	str2 [] = "world";
	join = ft_strjoin(str1,str2);
	if (!join)
		return (0);
	else
	{
		printf("%s", join);
		free(join);
	}
}
*/
