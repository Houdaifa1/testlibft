/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narah <narah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 03:57:31 by narah             #+#    #+#             */
/*   Updated: 2024/11/04 07:30:33 by narah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

static int num_len(int n)
{
    int i;

    i = 0;
    if (n <= 0)
       i++;
    n = -n;
    while (n > 0)
    {
        n /= 10;
        i++;
    } 
    return (i);
}

static char *ft_strrev(char *str)
{
    int start;
    int end;
    char tmp;

    start = 0;
    end = ft_strlen(str) - 1;
    while (start < end)
    {
        tmp = str[start];
        str[start] = str[end];
        str[end] = tmp;
        start++;
        end--;
    }
    return (str);
}

char    *ft_itoa (int n)
{
    unsigned int nbr;
    size_t lg;
    char *num;
    size_t i;
    
    i = 0;
    lg = num_len(n);
    nbr = n;
    if (n < 0)
        nbr = -n;
    num = ft_calloc(lg + 1, sizeof (char));
    if (num == NULL)
        return (NULL);
    while (nbr > 0)
    {
        num[i] = (nbr % 10) + '0';
        nbr /= 10;
        i++;
    }
    if (n == 0)
        num[0] = '0';
    if (n < 0)
        num[lg - 1] = '-';
    num[lg] = '\0';
    return (ft_strrev(num));
}

int main ()
{
    int n = -2456;
    char *result;
    result = ft_itoa(n);
    printf ("%s", result);
}