/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 13:46:29 by yeju              #+#    #+#             */
/*   Updated: 2022/03/02 13:46:30 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact {
private:
	std::string	_firstname;
	std::string	_lastname;
	std::string	_nickname;
	std::string	_phone;
	std::string	_secret;
public:
	void		clear();
	void		setFirstName(std::string str);
	void		setLastName(std::string str);
	void		setNickName(std::string str);
	void		setPhone(std::string str);
	void		setSecret(std::string str);
	std::string	getFirstName(void);
	std::string	getLastName(void);
	std::string	getNickName(void);
	std::string	getPhone(void);
	std::string	getSecret(void);
	int			DeleteOldest(Contact List[8]);
};

#endif