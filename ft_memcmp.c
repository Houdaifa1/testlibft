/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narah <narah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 21:55:58 by narah             #+#    #+#             */
/*   Updated: 2024/11/04 18:49:04 by narah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;

    i = 0;
    unsigned char *x = (unsigned char *)s1;
    unsigned char *y = (unsigned char *)s2;
    while (i < n)
    {
        if (x[i] != y[i])
            return (x[i] - y[i]);
        i++;
    }
    return 0;
}

// int main ()
// {
//     int s1[20] = {253, 2163, 435, 87};
//     int s2[20] = {253, 21, 435, 87};
//     int result = ft_memcmp (s1, s2, 5);
//     printf ("%d", result);
// }