/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaatjie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 12:00:12 by tbaatjie          #+#    #+#             */
/*   Updated: 2020/01/26 12:49:49 by tbaatjie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen( char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}

int main(int argc, char *argv[])
{
	int i;
	int len;

	i = 0;
	if(argc == 2)
	{

		len = ft_strlen(&argv[1][i]);
		while(len--)
			write(1, &argv[1][len], 1);
	}
	write(1, "\n", 1);
	return (0);
}
