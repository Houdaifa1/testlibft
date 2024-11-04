/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narah <narah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 21:55:17 by narah             #+#    #+#             */
/*   Updated: 2024/11/03 21:55:18 by narah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

//     size_t	ft_strlen(const char *s)
// {
//     size_t  i;

//     i = 0;
//     while (s[i] != '\0')
//         i++;
//     return i;
// }

char	*ft_strdup(const char *s1)
{
    int i;
    char *s2;

    i = 0;
    s2 = (char *)malloc(ft_strlen(s1) + 1);
    if (s2 == NULL)
        return NULL;
    while (s1[i] != '\0')
    {
        s2[i] = s1[i];
        i++;
    }
    s2[i] = '\0';
    return (s2);
}

// int main ()
// {
//     char *result = NULL;
//     printf ("%s\n", result);
//     const char *str = "coding school";
//     result = ft_strdup (str);
//     printf ("%s\n", result);
// }