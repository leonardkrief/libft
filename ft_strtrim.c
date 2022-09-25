/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <lkrief@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 02:15:04 by lkrief            #+#    #+#             */
/*   Updated: 2022/09/25 02:15:30 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;
	char	*dst;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	i = 0;
	while (len - i - 1 >= 0 && ft_belongs(s1[len - i - 1], set))
		i++;
	len -= i * (len > 0) + 0;
	i = 0;
	while (s1[i] && ft_belongs(s1[i], set))
		i++;
	len -= i * (len > 0) + 0;
	dst = malloc(sizeof(*dst) * ((len > 0) * len + 1));
	if (!dst)
		return (NULL);
	i = 0;
	while (s1[i] && ft_belongs(s1[i], set))
		i++;
	dst[len++] = 0;
	while (--len > 0)
		dst[len - 1] = s1[i + len - 1];
	return (dst);
}