/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <lkrief@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 01:59:02 by lkrief            #+#    #+#             */
/*   Updated: 2022/09/25 01:59:03 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"
#include <stdio.h>

void	ft_lstprint(t_list *lst)
{
	while (lst)
	{
		printf("%c", *((char *)lst->content));
		if (lst->next)
			printf(" -> ");
		lst = lst->next;
	}
	printf("\n");
}
