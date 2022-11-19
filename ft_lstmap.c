/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <lkrief@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 01:43:52 by lkrief            #+#    #+#             */
/*   Updated: 2022/11/19 20:23:14 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*free_error_lst(t_list **lst, void (*del)(void*))
{
	ft_lstclear(lst, *del);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	**begin;
	t_list	*new;
	t_list	*tmp;

	new = NULL;
	begin = &new;
	while (lst)
	{
		tmp = ft_lstnew((*f)(lst->content));
		if (!tmp)
			return (free_error_lst(begin, *del));
		ft_lstadd_back(begin, tmp);
		lst = lst->next;
	}
	return (*begin);
}
//
// void	*plus(void *c)
// {
// 	*((char *)c) += 1;
// 	return (c);
// }

// void	rien(void *c)
// {
// 	char	*d;

// 	d = ((char *)c);
// }

// int main(void)
// {
// 	t_list	*lst;
// 	int		i = -1;
// 	char	s[] = "ABCDEFGHIJK";

// 	lst = NULL;
// 	while (++i < 10)
// 		ft_lstadd_back(&lst, ft_lstnew(s + i));
// 	ft_lstprint(ft_lstmap(lst, *plus, *rien));
// 	ft_lstprint(lst);
// }
