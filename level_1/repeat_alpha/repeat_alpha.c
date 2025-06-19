/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 14:54:17 by vafavard          #+#    #+#             */
/*   Updated: 2025/06/19 14:59:14 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    int temp = 0;
    
    if (argc == 2)
    {
        while (argv[1][i])
        {
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
            {
                temp = argv[1][i] - 'a';
                while (temp >= 0)
                {
                    write (1, &argv[1][i], 1);
                    temp--;
                }
            }
            else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                temp = argv[1][i] - 'A';
                while (temp >= 0)
                {
                    write (1, &argv[1][i], 1);
                    temp--;
                }
            }
            else
                write (1, &argv[1][i], 1);
            i++;
        }            
    }
    write (1, "\n", 1);
    return (0);
}