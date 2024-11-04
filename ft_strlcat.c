/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narah <narah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 21:55:07 by narah             #+#    #+#             */
/*   Updated: 2024/11/04 18:40:58 by narah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

// size_t ft_strlen(const char *s)
// {
//     int i;

//     i = 0;
//     while (s[i] != '\0')
//         i++;
//     return (i);
// }

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    i = ft_strlen(dst);
    int j;
    j = 0;

    if (i > dstsize)
        return (dstsize + ft_strlen(src));
    while (src[j] != '\0' && (i + 1) < dstsize - 1)
    {
        dst[i + j] = src[j];
        j++;
    }
    dst[i + j] = '\0';
    return (i + ft_strlen(src));
}

// int main ()
// {
//     char dst [7] = "coding";
//     const char *src = " school";
//     size_t result = ft_strlcat (dst, src, 4);

//     printf ("%zu", result);
// }