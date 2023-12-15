/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcereced <vcereced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 20:30:25 by vcereced          #+#    #+#             */
/*   Updated: 2023/12/05 15:04:04 by vcereced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"
# include "Contact.hpp"

void msg_err(std::string str)
{
	std::cout << std::right << std::setw(10) << str <<std::endl;
}

void ft_display(Contact contacts)
{
	std::string str;
	
	if(contacts.get_empty() == 1)
	{
		msg_err("NO CONTACT IN THAT INDEX");
		return;
	}
	for(int j = 0; j < 5; j++)
	{
		str = contacts.get_data(j);
		if (str.length() > 9)
			str= str.substr(0, 9) + '.';
		std::cout << std::right << std::setw(10) << str + "|";
		
	}
	std::cout<<std::endl;
	std::cout <<std::left << std::setw(0);
}

void ft_display_all(Contact contacts[])
{
	int i;
	i = 0;
	while(contacts[i].get_empty() != 1 &&  i < 8)
	{
		ft_display(contacts[i]);
		i++;
	}
	if(i==0)
		msg_err("NO CONTACTS IN MEMORY");
	std::cout <<std::left << std::setw(0);
}

void ft_display_index(Contact contacts[])
{
	std::string str;
	int index;
	
	while(42)
	{
		std::cout << "which index?		(0/7); ";
		std::getline(std::cin, str);
		if (ft_is_empty(str) && ft_alldigit(str))
		{
			index = std::stoi(str);
			if (index >= 0 && index <= 7)
			{
				ft_display(contacts[index]);
				break;
			}
		}	
	}
}

void PhoneBook::search()
{
	int i;
	std::string str;
	
	i = 0;
	while(42)
	{
		std::cout << "display all contacts?	(y/n); ";
		std::getline(std::cin, str);		
		if(str == "y")
		{
			ft_display_all(contacts);
			break;
		}
		else if(str == "n")
		{
			ft_display_index(contacts);
			break;
		}
	}
}