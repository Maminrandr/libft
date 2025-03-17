/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maminran <maminran@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 19:23:28 by maminran          #+#    #+#             */
/*   Updated: 2025/03/17 16:13:19 by maminran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char tolupper(unsigned int index, char c)
{
    (void)index; // 
    return (char)toupper(c);
}

int main() {
    char str[] = "bonjour";
    char *result = ft_strmapi(str, tolupper);

    if (result)
    {
        printf("Résultat : %s\n", result);
        free(result);
    }
    else
    {
        printf("Erreur d'allocation mémoire.\n");
    }

    return 0;
}