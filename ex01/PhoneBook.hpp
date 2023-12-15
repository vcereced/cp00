/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcereced <vcereced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 20:00:03 by vcereced          #+#    #+#             */
/*   Updated: 2023/12/05 18:45:08 by vcereced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include <string>
# include <iostream>
# include <cctype>
# include <iomanip>
# include <cstdlib>
# include "Contact.hpp"

class PhoneBook{
	private:
		int i;
	public:
	PhoneBook(){
		i = 0;
	}
	Contact contacts[8];
	void add();
	void search();
};

int ft_alldigit(std::string str);
int ft_is_empty(std::string line);

#endif