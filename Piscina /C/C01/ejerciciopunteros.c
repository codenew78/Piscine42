/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ejerciciopunteros.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnicolie <gnicolie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:16:59 by gnicolie          #+#    #+#             */
/*   Updated: 2023/09/22 12:34:04 by gnicolie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void f1(char* ptr){
    *ptr = 'p';
}

int main(void){
    char c;
    char* ptr;

    c='d';
    ptr = &c; 
    f1(ptr);
    write (1 , &c, 1);
    return (0);
}
