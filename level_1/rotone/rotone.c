/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 15:27:44 by vafavard          #+#    #+#             */
/*   Updated: 2025/06/19 15:31:45 by vafavard         ###   ########.fr       */
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
            if (argv[1][i] == 'z' || argv[1][i] == 'Z')
                argv[1][i] -= 25;
            else if (((argv[1][i] >= 'a' && argv[1][i] < 'z')
                || (argv[1][i] >= 'A' && argv[1][i] < 'Z')))
                argv[1][i] += 1;
            write (1, &argv[1][i], 1);
            i++;
        }
    }
    write (1, "\n", 1);
    return (0);
}