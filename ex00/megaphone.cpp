/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 13:46:53 by yeju              #+#    #+#             */
/*   Updated: 2022/03/02 13:47:04 by yeju             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char *upper(char *str)
{
	int i;

	i = -1;
	while (str[++i] != '\0')
		str[i] = toupper(str[i]);
	return (str);
}

int main (int argc, char **argv)
{
	int i;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	else
	{
		i = 1;
		while (argv[i] != 0)
		{
			argv[i] = upper(argv[i]);
			std::cout << argv[i];
			i++;
		}
		std::cout << std::endl;
	}
}