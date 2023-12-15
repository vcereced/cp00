/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcereced <vcereced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:19:53 by vcereced          #+#    #+#             */
/*   Updated: 2023/12/06 20:16:33 by vcereced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void ft_printf_upper(std::string str)
{
    for(size_t i = 0; i < str.length(); i++)
        std::cout << (char)toupper(str[i]);
}

int main(int argc, char *argv[])
{
    int i;

    i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        while(argv[i])
            ft_printf_upper(argv[i++]);
        std::cout << std::endl;
    }
    return (0);
}
