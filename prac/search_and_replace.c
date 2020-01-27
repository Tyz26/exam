/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaatjie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 08:22:16 by tbaatjie          #+#    #+#             */
/*   Updated: 2020/01/24 07:42:07 by tbaatjie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	if(argc == 4)
	{
		while(argv[1][i] != '\0')
		{
			if(argv[1][i] == argv[2][0])
			{
				argv[1][i] = argv[3][0];
				write(1, &argv[1][i], 1);
			}
			else
			{
				write(1, &argv[1][i], 1);
			}
			i++;
		}
		
	}
	write(1, "\n", 1);
}
