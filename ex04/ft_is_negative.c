/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malvarez <malvarez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 18:47:59 by malvarez          #+#    #+#             */
/*   Updated: 2020/02/12 19:28:06 by malvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void   ft_is_negative(int n)
{
    if (n >= 0 )
    {
        write(1, "P",1);
    }else {
             write(1, "N",1);
        }
}

int main(void)
{
    ft_is_negative(49);
    return 0;
}
  