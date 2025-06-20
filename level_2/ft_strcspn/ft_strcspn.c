/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 16:20:27 by vafavard          #+#    #+#             */
/*   Updated: 2025/06/20 16:43:16 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
    int max_len;
    int temp;
    int i;
    int j;
    int flag;

    i = 0;
    temp = 0;
    max_len = 0;
    while (s[i])
    {
        j = 0;
        flag = 0;
        while (reject[j])
        {
            if (s[i] == reject[j])
                flag = 1;
            j++;
        }
        if (flag == 1)
        {
            if (temp > max_len)
                max_len = temp;
            temp = 0;
        }
        i++;
        temp++;
    }
    if (temp > max_len)
        max_len = temp;
    return (max_len);
}
