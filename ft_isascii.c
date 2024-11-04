/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narah <narah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 21:56:19 by narah             #+#    #+#             */
/*   Updated: 2024/11/03 21:56:20 by narah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int	ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
        return 1;
    return 0;
}
/*int main()
{
    char c = 'A'; 
    
    int result = ft_isascii(c);

    printf("%d\n", result);

    return 0;
}*/