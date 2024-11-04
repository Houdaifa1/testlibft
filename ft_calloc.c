/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narah <narah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 21:56:36 by narah             #+#    #+#             */
/*   Updated: 2024/11/03 21:56:37 by narah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

// void	*ft_memset(void *b, int c, size_t len)
// {
//     unsigned char *ptr = (unsigned char *) b;

//     while (len > 0)
//     {
//         *ptr = (unsigned char ) c;
//             ptr++;
//         len--;
//     }
//     return b;
// }

// void	ft_bzero(void *s, size_t n)
// {
//     unsigned char *ptr = (unsigned char *) s;

//     while (n > 0)
//     {
//         *ptr = 0;
//         ptr++;
//         n--;
//     }
// }

void	*ft_calloc(size_t count, size_t size)
{
    void *s;

    s = malloc(count * size);
    if (s == NULL)
        return (NULL);
    ft_memset (s, 0, count * size);
    return (s);
}

// int main ()
// {
//     char *test;
//     test = ft_calloc(20, 1);
//     printf("%s", test);

// }