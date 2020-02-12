/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malvarez <malvarez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 17:05:26 by malvarez          #+#    #+#             */
/*   Updated: 2020/02/12 18:45:57 by malvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void   ft_print_numbers(void)
{
    int contador = 48;
    while (contador <= 57)
    {   
        write(1,&contador,1);
        contador++;
        }
    }


int main(void)
{
    ft_print_numbers();
    return 0;
}