/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafranco <mafranco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 18:22:53 by mafranco          #+#    #+#             */
/*   Updated: 2024/04/08 18:28:49 by mafranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

std::string	ft_read(char *fd)
{
	std::ifstream	file(fd);
	std::string	line;
	std::string	text;

	if (!file.is_open()){
		std::cout << "Error opening the file" << std::endl;
		exit (1);
	}
	while (std::getline(file, line)){
		text = text + line;
	}
	file.close();
	return text;
}

int	replace_text(std::string text, std::string const bef, std::string const aft, std::string const name)
{
	std::ofstream	outputFile(name + ".replace");
	std::string	new_line;
	std::size_t	len_bef;
	std::size_t	pos;

	len_bef = bef.length();
	if (!outputFile.is_open()){
		std::cout << "Error opening new file" << std::endl;
		exit (1);
	}

	pos = text.find(bef);
	if (bef != aft) {
		while (pos != std::string::npos) {
			text.erase(pos, len_bef);
			text.insert(pos, aft);
			pos = text.find(bef, pos);
		}
	}
	outputFile << text;
	outputFile.close();
	return (0);
}

int	main(int argc, char **argv)
{
	std::string text;
	std::string	to_replace;
	std::string	replacing;

	if (argc != 4)
	{
		std::cout << "This program takes 3 arguments" << std::endl;
		return (0);
	}
	else if (!argv[1][0] || !argv[2][0] || !argv[3][0])
	{
		std::cout << "Arguments must not be empty" << std::endl;
		return (0);
	}
	to_replace = std::string(argv[2]);
	replacing = std::string(argv[3]);
	text = ft_read(argv[1]);
	replace_text(text, to_replace, replacing, argv[1]);
	return (0);
}
