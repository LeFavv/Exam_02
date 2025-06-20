/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 14:00:34 by vafavard          #+#    #+#             */
/*   Updated: 2025/06/20 15:50:44 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int		i = 0;
	int		j = 0;
	int		size = 0;
	char	*result;
	int 	flag = 0;
	
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if ((argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				|| (argv[1][i] >= 'a' && argv[1][i] <= 'z'))
				flag = 1;
			if ((argv[1][i] >= 'A' && argv[1][i] <= 'Z') && (flag == 0))
				i++;
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				size += 1;
				i++;
			}
			else
				i++;
		}
		size += ft_strlen(argv[1]);
		result = malloc(sizeof(char) * (size + 1));
		if (!result)
			return (1);
		i = 0;
		flag = 0;
		while (argv[1][i])
		{
			if ((argv[1][i] >= 'A' && argv[1][i] <= 'Z') && (flag == 0))
			{
				result[j] = argv[1][i] + 32;
				flag  = 1;
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z' && (flag == 1))
			{
				result[j] = '_';
				j++;
				result[j] = argv[1][i] + 32;
			}
			else
				result[j] = argv[1][i];
			i++;
			j++;
		}
		result[j] = '\0';
		j = 0;
		while (result[j])
		{
			write (1, &result[j], 1);
			j++;
		}
		// free(result);
	}
	write (1, "\n", 1);
	return (0);
}