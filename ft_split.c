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

static size_t	ft_find_c(const char *str ,char c)
{
	size_t	count;
	size_t	word;

	count = 0;
	word = 0;
	while (*str)
	{
		if (*str != c && word == 0)
		{
			word = 1;
			count++;
		}
		else if (*str == c)
			word = 0;
		str++;
	}
	return (count);
}
static char *ft_strncpy(char *dest, const char *src, size_t n)
{
    size_t i = 0;
    while (i < n && src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}
static	void	ft_free(char **tab, int letter)
{
	while (letter >= 0)
	{
		free (tab[letter - 1]);
	}
	free(tab);
}

char    **ft_split(const char *s, char c)
{
	size_t	words;
	char	**str;
	size_t	new_len;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	words = ft_find_c(s, c);
	str = (char **)malloc(sizeof(char *) *(words + 1));
	if (!str)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			const char	*begin;

			begin = s;
			while (*s && *s != c)
				s++;
			new_len = s - begin;
			str[i] = (char *)malloc(sizeof(char) * (new_len + 1));
			if (!str[i])
			{
				ft_free(str, i);
				return (NULL);
			}
			ft_strncpy(str[i], begin, new_len);
			str[i][new_len] = '\0';
			i++;
		}
	}
	str[i] = NULL;
	return (str);
}
