/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaatjie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 09:36:49 by tbaatjie          #+#    #+#             */
/*   Updated: 2020/01/27 14:33:40 by tbaatjie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
	if(argc == 3)
	{
		int i;
		int j;
		int c;
		char *str;

		i = 0;
		c = 0;
		str = "";
		while(argv[1][i] != '\0')
		{
			j = 0;
			while(argv[2][j] != '\0')
			{
				if(argv[1][i] == argv[2][j])
				{
					str[c] = argv[2][j];
					write(1, &str[c], 1);
					c++;	
				}
				j++;

			}
			i++;

		}
		write(1, "\n", 1);
	}
}
