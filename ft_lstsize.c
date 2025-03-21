/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maminran <maminran@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 14:41:04 by maminran          #+#    #+#             */
/*   Updated: 2025/03/21 14:56:40 by maminran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst && lst->next != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
int	main(void)
{
	t_list	*un;
	t_list	*deux;
	t_list	*trois;
	t_list	*quatre;
	t_list	*cinq;

	un = ft_lstnew("first");
	deux = ft_lstnew("second");
	trois = ft_lstnew("third");
	quatre = ft_lstnew("forth");
	cinq = ft_lstnew("fifth");
	un->next = deux;
	deux->next =trois;
	trois->next =quatre;
	quatre->next = cinq;
	cinq->next = un; 
	int i = ft_lstsize(un);

	printf("\n\n{%d}\n\n",i);
}
