/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narah <narah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 21:34:28 by narah             #+#    #+#             */
/*   Updated: 2024/11/03 21:34:29 by narah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t i = 0;

    if (dstsize > 0)
    {
        while (src[i] != '\0' && i < dstsize - 1)
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    } 
    return strlen(src);
}

// int main ()
// {
//     char dst [8];
//     const char *src = "narah";
     
//      size_t result = ft_strlcpy(dst, src, sizeof(dst));

//      printf ("%s\n", dst);
//      printf ("%zu", result);

//      return 0;
// }