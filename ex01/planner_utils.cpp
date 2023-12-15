/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   planner_utils.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcereced <vcereced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 20:10:45 by vcereced          #+#    #+#             */
/*   Updated: 2023/12/06 21:32:27 by vcereced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"
# include "Contact.hpp"

int ft_alldigit(std::string str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
        if (!std::isdigit(str[i])) 
            return false;
    }
    return true;
}

void print_all(PhoneBook planner)
{
	int i;

	i = 0;
	while(planner.contacts[i].get_empty() != 1 && i < 8)
	{
		std::cout <<  i << " " + planner.contacts[i].get_data(0) << " " <<  planner.contacts[i].get_data(1) << " " <<  planner.contacts[i].get_data(2) << " " <<  planner.contacts[i].get_data(3) << " " <<  planner.contacts[i].get_data(4) <<  "... " << planner.contacts[i].get_n() << std::endl;
		i++;
	}
}

