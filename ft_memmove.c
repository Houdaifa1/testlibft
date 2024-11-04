/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narah <narah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 21:55:46 by narah             #+#    #+#             */
/*   Updated: 2024/11/03 21:55:47 by narah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

// void    *ft_memcpy(void *dst, const void *src, size_t n)
// {
//     size_t i;
//     i = 0;

//     if (src == NULL)
//         return (NULL);
//     while (i < n)
//     {
//         ((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
//             i++;
//     }
//     return (dst);
// }

void	*ft_memmove(void *dst, const void *src, size_t len)
{
    size_t i;

    if (src == NULL || dst == NULL)
        return (NULL);
    
    if (dst < src)
        return ft_memcpy (dst, src, len);
    i = len; 
    while (i > 0)
    {
        i--;
        ((unsigned char *)dst)[i] = ((unsigned char *)src)[i]; 
    }
    return (dst);
}

// int main ()
// {
//     char *result;
//     char s[18] = "codingschool";
//     result = memcpy (s + 5, s, 9);
//     printf ("%s", result);
// }