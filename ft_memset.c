/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narah <narah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 21:55:38 by narah             #+#    #+#             */
/*   Updated: 2024/11/04 08:50:31 by narah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
    unsigned char *ptr = (unsigned char *) b;

    while (len > 0)
    {
        *ptr = (unsigned char ) c;
            ptr++;
        len--;
    }
    return b;
}

// int main ()
// {
//     char buffer [20] = "coding school";
//     char c = 'h';
//     ft_memset (buffer, c, 2);
//     printf ("%s", buffer);
// }