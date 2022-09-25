/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <lkrief@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 01:57:38 by lkrief            #+#    #+#             */
/*   Updated: 2022/09/25 01:57:57 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*begin;
	t_list	*before;

	if (lst && *lst && del)
	{
		begin = *lst;
		while (begin)
		{
			before = begin;
			begin = begin->next;
			ft_lstdelone(before, *del);
		}
		*lst = NULL;
	}
}
