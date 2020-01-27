/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaatjie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 10:23:46 by tbaatjie          #+#    #+#             */
/*   Updated: 2020/01/27 09:06:49 by tbaatjie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	if(argc == 2)
	{
		while(argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while(!(argv[1][i] == ' ' || argv[1][i] == '\t'))
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}