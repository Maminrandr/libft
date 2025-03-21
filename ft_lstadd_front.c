/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maminran <maminran@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 09:08:40 by maminran          #+#    #+#             */
/*   Updated: 2025/03/21 14:48:50 by maminran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

int main ()
{
	t_list *first = ft_lstnew("first");
	t_list *second = ft_lstnew("second");


	ft_lstadd_front(&first, second);
	printf("\n\n==>>{%s}\n\n", first->content);
}