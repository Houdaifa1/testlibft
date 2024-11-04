/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narah <narah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 21:33:51 by narah             #+#    #+#             */
/*   Updated: 2024/11/03 21:33:52 by narah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char    *ft_strtrim(char const *s, char const *set)
{
    size_t start;
    size_t end;

    if (s == NULL || set == NULL)
        return NULL;   
    start = 0;
    end = ft_strlen(s);
    while (s[start] != '\0' && ft_strchr(set, s[start]))
        start++;
    while (end > start && ft_strchr(set, s[end - 1]))
        end--;
    return (ft_substr(s, start, end - start));
}

// int main ()
// {
//     char *result;
//     char *s = "lorem \n ipsum \t dolor \n sit \t amet";
//     char *set = " ";
//     result = ft_strtrim(s, set);
//     printf ("%s", result);    
// }