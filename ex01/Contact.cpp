/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 13:46:22 by yeju              #+#    #+#             */
/*   Updated: 2022/03/02 13:46:24 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string	CutString(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	else
		return (str);
}

void		PrintContact(Contact *phonebook, int index)
{
	std::cout << "First name      : " << phonebook[index].getFirstName() << std::endl;
	std::cout << "Last name       : " << phonebook[index].getLastName() << std::endl;
	std::cout << "Nickname        : " << phonebook[index].getNickName() << std::endl;
	std::cout << "Phone number    : " << phonebook[index].getPhone() << std::endl;
	std::cout << "Darkest secret  : " << phonebook[index].getSecret() << std::endl;
}

int		DeleteOldest(Contact List[8])
{
	std::string input;

	std::cout << "will you delete the oldest contacts? [yes, no]" << std::endl;
	getline(std::cin, input);
	if (input == "yes")
	{
		for (int j = 1; j < 8; j++)
		{
			List[j - 1] = List[j];
		}
		List[7].clear();
		
		std::cout << "removed successfully!" << std::endl;
		return (7);
	}
	return (8);
}

void		SearchPhonebook(Contact List[8], int count)
{
	int		i;
	std::string	input;

	if (count == 0)
	{
		std::cout << "No contacts to show." << std::endl << std::endl;
		return ;
	}
	for (i = 0 ; i < count ; i++)
	{
		std::cout << "┌──────────┬──────────┬──────────┬──────────┐" << std::endl;
		std::cout << "|" << std::setw(10) << i + 1;
		std::cout << "|" << std::setw(10) << CutString(List[i].getFirstName());
		std::cout << "|" << std::setw(10) << CutString(List[i].getLastName());
		std::cout << "|" << std::setw(10) << CutString(List[i].getNickName());
		std::cout << "|" << std::endl;
	}
	std::cout << "└──────────┴──────────┴──────────┴──────────┘" << std::endl;
	std::cout << "Please enter the number to see full contact information: ";
	std::getline(std::cin, input);
	if (input.empty())
		std::cout << "Please SEARCH again and enter a valid index number. " << std::endl;
	if (input[0] > '0' && std::stoi(input) <= count && input[1] == '\0')
		PrintContact(List, std::stoi(input) - 1);
	else
		std::cout << "Please SEARCH again and enter a valid index number. " << std::endl;
	std::cout << std::endl;
}

void		AddPhonebook(Contact List[8], int i)
{
	std::string	str;

	std::cout << "Please enter first name." << std::endl;
	getline(std::cin, str);
	(List)[i].setFirstName(str);
	std::cout << "Please enter last name." << std::endl;
	getline(std::cin, str);
	(List)[i].setLastName(str);
	std::cout << "Please enter nickname." << std::endl;
	getline(std::cin, str);
	(List)[i].setNickName(str);
	std::cout << "Please enter phone number." << std::endl;
	getline(std::cin, str);
	(List)[i].setPhone(str);
	std::cout << "Please enter darkest secret." << std::endl;
	getline(std::cin, str);
	(List)[i].setSecret(str);
	std::cout << std::endl;
}

int			main(void)
{
	std::string	cmd;
	int		i;

	i = 0;
	Contact List[8];
	while (1)
	{
		std::cout << "> ";
		std::getline(std::cin, cmd);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			return (1);
		}
		if (cmd == "SEARCH")
			SearchPhonebook(List, i);
		else if (cmd == "ADD")
		{
			if (i < 8)
				AddPhonebook(List, i++);
			else
			{
				std::cout << "PHONEBOOK IS FULL" << std::endl;
				i = DeleteOldest(List);
			}
		}
		else if (cmd == "EXIT")
			break;
		else
			std::cout << "Please enter ADD, SEARCH or EXIT" << std::endl;
	}
	return (0);
}