/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcereced <vcereced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:35:49 by vcereced          #+#    #+#             */
/*   Updated: 2023/12/05 15:07:52 by vcereced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"
# include "Contact.hpp"

int ft_is_empty(std::string line)
{
	for (size_t i = 0; i < line.length(); i++) {
        if (!std::isspace(line[i]))
            return 1;
	}
	return 0;
}

std::string ft_get_line(std::string quest)
{
	std::string line;

	while(42)
	{
		std::cout << quest;
		std::getline(std::cin, line); 
		if(ft_is_empty(line))
			break;
	}
	return(line);
}

void fill_members(Contact &contacts, int i)
{
	contacts.set_n(i);

	contacts.set_empty(0);
	contacts.set_data(ft_get_line("first name; "), 0);
	contacts.set_data(ft_get_line("last name; "), 1);
	contacts.set_data(ft_get_line("nickname; "), 2);
	contacts.set_data(ft_get_line("phone number "), 3);
	contacts.set_data(ft_get_line("darkest secret "), 4);
}


void PhoneBook::add()
{
	fill_members(PhoneBook::contacts[i%8], PhoneBook::i);
	PhoneBook::i++;
}
