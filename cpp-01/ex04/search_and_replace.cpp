/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 15:23:10 by vipereir          #+#    #+#             */
/*   Updated: 2023/06/09 10:18:40 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "search_and_replace.hpp"

static	void replace_line(std::ofstream &write_file, std::string line_buffer,
			std::string old_string, std::string new_string)
{
	std::string new_line;
 	size_t	init;
	size_t	pos;

	init = 0;
	pos = 0;
	while (pos != std::string::npos)
	{
		pos = line_buffer.find(old_string, init);
		if (pos == std::string::npos) {
			new_line.append(line_buffer.substr(init));
			break ;
		}
		new_line.append(line_buffer.substr(init, pos - init));
		new_line.append(new_string);
		init = pos + old_string.length();
	}
	write_file << new_line << std::endl;
}
void	search_and_replace(char **params)
{
	std::ifstream	read_file(params[1]);
	std::ofstream	write_file; // ((std::string)params[1]. ".replace"); voltar para isso no mac, no linux nao funfa
	std::string		buffer;
	std::string		file_replace_name;

	file_replace_name = params[1];
	file_replace_name.append(".replace");
	write_file.open(file_replace_name);

	if (read_file.is_open()) {	
		while(std::getline(read_file, buffer)) {
			replace_line(write_file, buffer, params[2], params[3]);
		}
		read_file.close();
		write_file.close();
	} else {
		std::cout << "cannot open the file 📂" << std::endl;
		return ;
	}
}