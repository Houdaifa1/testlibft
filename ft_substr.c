/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narah <narah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 21:32:38 by narah             #+#    #+#             */
/*   Updated: 2024/11/03 21:32:57 by narah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

// size_t	ft_strlen(const char *s)
// {
//     size_t  i;

//     i = 0;
//     while (s[i] != '\0')
//         i++;
//     return i;
// }

// char	*ft_strdup(const char *s1)
// {
//     int i;
//     char *s2;

//     i = 0;
//     s2 = (char *)malloc(ft_strlen(s1) + 1);
//     if (s2 == NULL)
//         return NULL;
//     while (s1[i] != '\0')
//     {
//         s2[i] = s1[i];
//         i++;
//     }
//     s2[i] = '\0';
//     return (s2);
// }

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *s1;
    size_t i;
    size_t s_len;
    
    i = 0;
    if (s == NULL)
        return (NULL);
    s_len = ft_strlen(s);
    if (start > s_len)
        return(ft_strdup(""));
    if (start + len > s_len)
        len = s_len - start;
    s1 = (char *)malloc(len + 1);
    if (s1 == NULL)
        return (NULL);
    while (i < len && s[start + i])
    {
        s1[i] = s[start + i];
        i++;
    }
    s1[i] = '\0';
    return (s1);
}

// int main ()
// {
//    char *result = NULL;
//     char const *s = "testtskl";
//     result = ft_substr(s, 5, 3);
//     printf ("%s\n", result);
// }