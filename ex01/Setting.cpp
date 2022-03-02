/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Setting.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 13:46:43 by yeju              #+#    #+#             */
/*   Updated: 2022/03/02 13:46:43 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void		Contact::setFirstName(std::string str)
{
    _firstname = str;
}

void		Contact::setLastName(std::string str)
{
    _lastname = str;
}

void		Contact::setNickName(std::string str)
{
    _nickname = str;
}

void		Contact::setPhone(std::string str)
{
    _phone = str;
}

void		Contact::setSecret(std::string str)
{
    _secret = str;
}

void	Contact::clear(void)
{
	_firstname = "";
	_lastname = "";
	_nickname = "";
	_phone = "";
	_secret = "";
}

std::string	Contact::getFirstName(void)
{
    return (_firstname);
}

std::string	Contact::getLastName(void)
{
    return (_lastname);
}

std::string	Contact::getNickName(void)
{
    return (_nickname);
}

std::string	Contact::getPhone(void)
{
    return (_phone);
}

std::string	Contact::getSecret(void)
{
    return (_secret);
}