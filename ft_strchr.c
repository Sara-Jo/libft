/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:24:59 by sjo               #+#    #+#             */
/*   Updated: 2021/12/01 10:32:08 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(char *s, int c)
{
    int i;

    i = 0;
    while (s[i])
    {
        if (s[i] == (char)c)
            return ((char *)s + i);
        i++;
    }
    if (s[i] == (char)c)
        return ((char *)s + i);
    return (0);
}