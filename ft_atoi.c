/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <lkrief@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 02:10:14 by lkrief            #+#    #+#             */
/*   Updated: 2022/09/25 02:10:19 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	nb;
	int	signe;

	nb = 0;
	signe = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		signe = signe * ((str[i] == '+') - (str[i] == '-'));
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		nb = 10 * nb + str[i++] - '0';
	return (signe * nb);
}
