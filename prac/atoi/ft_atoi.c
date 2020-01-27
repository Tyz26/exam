/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaatjie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 10:01:32 by tbaatjie          #+#    #+#             */
/*   Updated: 2020/01/24 11:13:57 by tbaatjie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(const char *c)
{
	int i, sign, ret, return_value;

	i = 0;
	sign = 1;
	ret = 0;
	return_value = 0;
	while((str[i] >= 9 && str[i] <= 13) || str[i] = ' ')
		i++;
	if(str[i] == '+' || str[i] == '-')
	{
		if(str[i] == '-')
			sign = -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		ret = (ret * 10) + str[i] - '0';
		i++;
	}
	return_value = ret * sign;
	return(return_value);
}
