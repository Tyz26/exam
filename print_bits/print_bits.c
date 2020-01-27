/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaatjie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 14:34:52 by tbaatjie          #+#    #+#             */
/*   Updated: 2020/01/27 15:25:01 by tbaatjie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int bits;
	int i;

	bits = 128;
	i = 8;
	while (i > 0 )
	{
		if(octet > bits)
		{
			octet = octet - bits;
			write(1, "1", 1);		
		}
		
		else
		{
			write(1, "0", 1);
		}
		bits = bits / 2;
		i--;

	}
}
