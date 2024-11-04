/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narah <narah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 21:56:50 by narah             #+#    #+#             */
/*   Updated: 2024/11/04 18:33:13 by narah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int	ft_atoi(const char *str)
{
    int i = 0;
    int sign = 1;
    int j = 0;

    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = sign * (-1);
        i++;    
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        j = j * 10 + (str[i] - '0');
        i++;
    }
    return (j * sign);
}

/*int main ()
{
    "      ---+++123adsadaswd"
    char str[50] = "        -65337kd";
    printf("%d\n", ft_atoi(str));
}*/
