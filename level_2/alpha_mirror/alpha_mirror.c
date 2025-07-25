/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 11:31:19 by vafavard          #+#    #+#             */
/*   Updated: 2025/06/20 14:12:53 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'm')
				argv[1][i] = (('a' + 25) - (argv[1][i] - 'a'));
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'M')
				argv[1][i] = (('A' + 25) - (argv[1][i] - 'A'));
			else if (argv[1][i] >= 'n' && argv[1][i] <= 'z')
				argv[1][i] = ('z' - 25) + ('z' -argv[1][i]);				
			else if (argv[1][i] >= 'N' && argv[1][i] <= 'Z')
				argv[1][i] = (('Z' - 25) + ('Z' - argv[1][i]));
			write (1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
		