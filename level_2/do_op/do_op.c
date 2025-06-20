/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 15:14:45 by vafavard          #+#    #+#             */
/*   Updated: 2025/06/20 16:07:53 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

long ft_do_op(int a, char op, int b)
{
	long result;

	if (op == '+')
		result = a + b;
	else if (op == '-')
		result = a - b;
	else if (op == '*')
		result = a * b;
	else if (op == '/')
		result = a / b;
	else if (op == '%')
		result = a % b;
	return (result);
}

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

int main(int argc, char **argv)
{
	int a;
	int b;
	long result;
	
	if (argc == 4)
	{
		if (ft_strlen(argv[2]) > 1)
			return (1);
		a = atoi(argv[1]);
		b = atoi(argv[3]);
		result = ft_do_op(a, argv[2][0], b);
		if (result > INT_MAX || result < INT_MIN)
		{
			printf("\n");
			return (1);
		}
		else
			printf("%d", (int)result);
	}
	printf("\n");
	return (0);
}
