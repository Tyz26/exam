/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaatjie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 15:38:34 by tbaatjie          #+#    #+#             */
/*   Updated: 2020/01/27 16:03:00 by tbaatjie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if(argc == 4)
	{
		int num1;
		int num2;
		int ans;

		ans =0;

		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
		if(argv[2][0] == '*')
			ans = num1 * num2;
		if(argv[2][0] == '/')
			ans = num1 / num2;
		if(argv[2][0] == '+')
			ans = num1 + num2;
		if(argv[2][0] == '-')
			ans = num1 - num2;
		if(argv[2][0] == '%')
			ans = num1 % num2;
		printf("%d\n",ans);
	}
	else
		printf("\n");
	return(0);
}
