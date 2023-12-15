/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   access_add.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcereced <vcereced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:15:37 by vcereced          #+#    #+#             */
/*   Updated: 2023/11/27 20:03:37 by vcereced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"
# include "Contact.hpp"

void Contact::set_n(int n)
{
	Contact::n = n;
}

void Contact::set_empty(bool n)
{
	Contact::empty = n;
}

int Contact::get_empty()
{
	return(Contact::empty);
}

int Contact::get_n()
{
	return(Contact::n);
}

void	Contact::set_data(std::string str, int index)
{
	Contact::data[index] = str;
}

std::string	Contact::get_data(int i)
{
	return(Contact::data[i]);
}