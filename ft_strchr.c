/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narah <narah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 21:55:23 by narah             #+#    #+#             */
/*   Updated: 2024/11/03 21:55:24 by narah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
    while (*s != '\0')
    {
        if (*s == (char) c)
            return (char *) s;
        s++;
    }
    if (*s == (char)c)
        return (char *) s;
    return NULL;
}

// int main ()
// {
//     char *s;
//     char *tt;

//     tt = strchr (NULL, '\0');
//     s = ft_strchr (NULL, '\0');

//     printf ("---%s---                 --%s---\n", s, tt);
    

// }