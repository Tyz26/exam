/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaatjie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 08:36:21 by tbaatjie          #+#    #+#             */
/*   Updated: 2020/01/26 09:13:26 by tbaatjie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int  main(int argc, char *argv[])
{
	int i;
	int rep;

	i = 0;
	if(argc == 2)
	{
		while(argv[1][i] != '\0')
		{
			if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				rep = argv[1][i] - 96;
				while(rep > 0)
				{
					write(1, &argv[1][i], 1);
					rep--;
				}
			}
		
			else if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				rep = argv[1][i] - 64;
				while(rep > 0)
				{
					write(1, &argv[1][i], 1);
					rep--;
				}
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
		
	}
	write(1, "\n", 1);
	return (0);
}

