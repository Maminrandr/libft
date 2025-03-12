/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maminran <maminran@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 10:27:32 by maminran          #+#    #+#             */
/*   Updated: 2025/03/12 15:50:51 by maminran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t debut;
	size_t fin;
	size_t str_len;

	debut = 0;
	fin = ft_strlen(s1);
	while (s1[debut] && ft_strchr(set, s1[debut]))
		debut++;
	while (fin > debut && ft_strchr(set, s1[fin - 1]))
		fin--;
	str_len = fin - debut;
	if (str_len == 0)
	{
		return (ft_substr(s1, 0, 0));
	}
	return (ft_substr(s1, debut, str_len));
}