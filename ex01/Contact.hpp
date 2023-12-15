/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcereced <vcereced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:58:45 by vcereced          #+#    #+#             */
/*   Updated: 2023/11/27 20:43:08 by vcereced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

class Contact{
	private:
		bool empty;
		int n;
		std::string data[5];
	public:
		Contact(void){
			empty = 1;
			n = 0;
		}
		void		set_empty(bool n);
		int			get_empty();
		void		set_n(int n);
		int			get_n();
		void		set_data(std::string str, int index);
		std::string	get_data(int i);
};

#endif