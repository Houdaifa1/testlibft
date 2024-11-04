/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narah <narah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 21:56:43 by narah             #+#    #+#             */
/*   Updated: 2024/11/03 21:56:44 by narah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
    unsigned char *ptr = (unsigned char *) s;

    while (n > 0)
    {
        *ptr = 0;
        ptr++;
        n--;
    }
}

// int main ()
// {
//     int buffer[12] = {42324, 23424, 42424};
//     ft_bzero(buffer, 3);
//     printf ("%d", buffer[2]);
// }