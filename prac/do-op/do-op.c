/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaatjie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 11:49:05 by tbaatjie          #+#    #+#             */
/*   Updated: 2020/01/24 12:18:58 by tbaatjie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int ans;

		ans = 0;
	if(argc == 4)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);

		if(argv[2][0] == '+')
			ans = num1 + num2;
		if(argv[2][0] == '-' )
			ans = num1 - num2;
		if(argv[2][0] == '*')
			ans = num1 * num2;
		 if(argv[2][0] == '/')
			ans = num1 / num2;
		 if(argv[2][0] == '%')
			 ans = num1 % num2;
		printf("%d\n",ans);
	}
	else
		printf("\n");
	return (0);

}
