/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 15:32:38 by vafavard          #+#    #+#             */
/*   Updated: 2025/06/19 15:45:57 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);   
}

int main(int argc, char **argv)
{
    int i = 0;

    if (argc == 4)
    {
        if (ft_strlen(argv[2]) > 1|| ft_strlen(argv[3]) > 1)
        {
            write (1, "\n", 1);
            return (0);
        }
        while (argv[1][i])
        {
            if (argv[1][i] == argv[2][0])
                argv[1][i] = argv[3][0];
            write (1, &argv[1][i], 1);
            i++;
        }
    }
    write (1, "\n", 1);
    return (0);
}