/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narah <narah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 21:32:13 by narah             #+#    #+#             */
/*   Updated: 2024/11/04 08:50:28 by narah            ###   ########.fr       */
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

char    *ft_strjoin(char const *s1, char const *s2)
{
    int i;
    int j;
    char *s3;
    i = 0;
    j = 0;

    if (s1 == NULL || s2 == NULL)
        return NULL;
    s3 = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
    if (s3 == NULL)
        return (NULL);
    while (s1[i] != '\0')
    {
        s3[i] = s1[i];
        i++;
    }
        while (s2[j] != '\0')
        {
            s3[i] = s2[j];
            i++;
            j++;
        }
    s3[i] = '\0';
    return (s3);
}

// int main ()
// {
//     char *result = NULL;
//     char const *s1 = "coding";
//     char const *s2 = " school";
//     result = ft_strjoin(s1, s2);
//     printf ("%s\n", result);
// }