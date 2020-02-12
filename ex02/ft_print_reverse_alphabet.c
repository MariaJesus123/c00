/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malvarez <malvarez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 19:09:35 by malvarez          #+#    #+#             */
/*   Updated: 2020/02/12 18:09:14 by malvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void   ft_print_reverse_alphabet(void)
{
    char    letter;

    letter = 'z';
    while (letter <= 'z')
    {
        write(1,&letter,1);
        letter--;
        
        if (letter == '`' ) 
        {
            break;
        }
        
    } 

    
}

int main(void)
{
    ft_print_reverse_alphabet();
    return 0;
} 