/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maminran <maminran@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 10:27:58 by maminran          #+#    #+#             */
/*   Updated: 2025/03/10 12:01:43 by maminran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	if (c == '\0')
		return ((char *)s + i);
	return (NULL);
}
/*
int	main(void)
{
	const char	*str = "coucou toi";
	char		*ptr;

	ptr = ft_strchr(str, 'o');
	if (ptr)
		printf("Trouve : %s\n", ptr);
	else
		printf("Non trouvé\n");
	return (0);
}
*/
