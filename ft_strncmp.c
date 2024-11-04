/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narah <narah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 21:34:14 by narah             #+#    #+#             */
/*   Updated: 2024/11/04 18:41:28 by narah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;
    i = 0;

    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n)
        i++;
    if (i == n)
        return 0;
    return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int main ()
{
    char *s1 = "helom";
    char *s2 = "helo";
    int e =  ft_strncmp(s1, s2, 4);
    
    printf ("%d",e);
}