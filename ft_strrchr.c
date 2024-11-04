/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narah <narah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 21:33:59 by narah             #+#    #+#             */
/*   Updated: 2024/11/03 21:34:00 by narah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

// size_t ft_strlen (const char *s)
// {
//         size_t i;
        
//         i = 0;
//         while (s[i] != '\0')
//             i++;
//         return i;
// }

char	*ft_strrchr(const char *s, int c)
{
    int i; 

    i = ft_strlen (s);
    if (s[i] == (char)c)
        return (char *) &s[i];
    i--;
    while (i >= 0)
    {
        if (s[i] == (char)c)
            return  (char *) &s[i];
        i--;
    }
    return NULL;
}

// int main ()
// {
//     char *s;

//     s = ft_strrchr ("ghjkhl", '\0');
//     printf ("%s\n", s);
// }