/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 16:45:09 by vafavard          #+#    #+#             */
/*   Updated: 2025/06/20 17:10:41 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strspn(const char *s, const char *accept)
{
    int temp = 0;
    int max_len = 0;
    int i = 0;
    int j;
    int flag = 0;
    
    while (s[i])
    {
        j = 0;
        flag = 0;
        while (accept[j])
        {
            if (s[i] == accept[j])
                flag = 1;
            j++;
        }
        if (flag == 1)
        {
            temp++;
            if (temp > max_len)
                max_len = temp;
        }
        else
            break;
        i++;
    }
    if (max_len < temp)
        max_len = temp;
    return (max_len);
}
