/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narah <narah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 21:56:14 by narah             #+#    #+#             */
/*   Updated: 2024/11/03 21:56:16 by narah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int	ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return 1;
    return 0;
}

/*int main ()
{
    char c = 'a';

    int result = ft_isdigit(c);

    printf ("%d", result);

    return 0;
}*/