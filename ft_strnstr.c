/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narah <narah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 21:34:06 by narah             #+#    #+#             */
/*   Updated: 2024/11/04 08:50:23 by narah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t  i;
    size_t  j;
    
    i = 0;
    if (*needle == '\0')
        return (char *)haystack;
    while (haystack[i] != '\0' && i < len)
    {    
        j = 0;
        while (haystack[i + j] == needle[j] && (i + j) < len)
        {    
            j++;
            if (needle[j] == '\0')
                return (char *) &haystack[i];
        }
        i++;
    }
    return (NULL);
}

// int main ()
// {
//     char *haystack = "nara hosni sad";
//     char *needle = "hosni";
//     char *result = ft_strnstr (haystack, needle, 10);
//     printf ("%s", result);
// }