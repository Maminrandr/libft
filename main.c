/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maminran <maminran@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 19:23:28 by maminran          #+#    #+#             */
/*   Updated: 2025/03/12 15:51:12 by maminran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

int main()
{
    const char *str1 = "Hello world 42 split!";
    char **result1 = ft_split(str1, ' ');

    printf("Test 1:\n");
    for (int i = 0; result1[i] != NULL; i++)
    {
        printf("Word %d: %s\n", i, result1[i]);
        free(result1[i]); // Libérer chaque mot
    }
    free(result1); // Libérer le tableau de mots

    const char *str2 = "";
    char **result2 = ft_split(str2, ' ');

    printf("\nTest 2:\n");
    if (result2 && result2[0] == NULL)
        printf("Result is empty\n");

    free(result2); // Libérer le tableau de mots

    return 0;
}
