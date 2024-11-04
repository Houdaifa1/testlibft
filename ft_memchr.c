/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narah <narah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 21:56:03 by narah             #+#    #+#             */
/*   Updated: 2024/11/03 21:56:04 by narah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    i = 0;
    
    unsigned char *ptr = (unsigned char *) s;

    while (i < n)
    {
        if (ptr[i] == (unsigned char) c)
            return (void *) (ptr + i);
            i++;
    }
    return (NULL);
}

// int main ()
// {
//     char *s;
//     int arr[12] = {2121, 65, 65};
//     s = ft_memchr (arr,  'A', 5);
//     printf ("%s", s);
// }