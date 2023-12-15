/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcereced <vcereced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:27:27 by vcereced          #+#    #+#             */
/*   Updated: 2023/11/27 20:30:26 by vcereced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"
# include "Contact.hpp"

void checks_leaks(void)
{
	system("leaks ./planner");
}

int main(void)
{
	PhoneBook phonebook;
	std::string str;

	while(42)
	{
		std::cout << "mode? ";
		std::getline(std::cin, str);
		if(str == "add")
			phonebook.add();
		else if(str == "search")
			phonebook.search();
		else if (str == "exit")
			break;
		//print_all(planner);
	}
	atexit(checks_leaks);
	return (0);
}