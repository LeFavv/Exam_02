/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 14:35:58 by vafavard          #+#    #+#             */
/*   Updated: 2025/06/19 14:43:59 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
	write (1, &c, 1);
}

void    ft_putnbr(int nb)
{
	long nb2 = nb;
	
	if (nb2 < 0)
	{
		ft_putchar('-');
		nb2 *= -1;
	}
	while (nb2 > 10)
	{
		ft_putnbr(nb2/10);
		nb2 %= 10;
	}
	ft_putchar(nb2 + '0');
}

int main(void)
{
	int i = 1;
	while (i < 101)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write (1, "fizzbuzz", 8);
		else if (i % 3 == 0 )
			write (1, "fizz", 4);
		else if (i % 5 == 0 )
			write (1, "buzz", 4);
		else
			ft_putnbr(i);
		write (1, "\n", 1);
		i++;
	}
	return (0);
}