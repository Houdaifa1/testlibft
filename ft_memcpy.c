/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narah <narah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 21:55:52 by narah             #+#    #+#             */
/*   Updated: 2024/11/03 21:55:53 by narah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;
    i = 0;

    if (src == NULL)
        return (NULL);
    while (i < n)
    {
        ((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
            i++;
    }
    return (dst);
}

// int main ()
// {
//     char *result;
//     char s[18] = "codingschool";
//     result = ft_memcpy (s + 5, s, 7);
//     printf ("%s", result);
// }