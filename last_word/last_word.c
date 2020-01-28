/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaatjie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 08:16:09 by tbaatjie          #+#    #+#             */
/*   Updated: 2020/01/28 15:42:10 by tbaatjie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	if(argc == 2)
	{
		while(argv[1][i] != '\0')							// Goes to end of string
			i++;		
		i--;

		while(argv[1][i] == ' ' || argv[1][i] == '\t')		// Goes past spaces at end of string if any
			i--;

		while(!(argv[1][i] == ' ' || argv[1][i] == '\t'))	// At last char of last word, goes to before first char
			i--; 		
		i++;												// Moves on to first char

		while(!(argv[1][i] == ' ' || argv[1][i] == '\t') && argv[1][i] != '\0')	// Moves ++ until space or nullterm,
		{
			write(1, &argv[1][i], 1);
			i++; 
		}



	}
	write(1, "\n" ,1);
	return (0);
}
 
