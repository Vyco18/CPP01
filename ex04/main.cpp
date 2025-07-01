/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altheven <altheven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 14:10:20 by altheven          #+#    #+#             */
/*   Updated: 2025/07/01 13:11:28 by altheven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void	remplace(std :: string & src, std :: string const & find, std :: string const & rmp)
{
	std :: string buf;
	std :: size_t pos = 0;
	std :: size_t prevPos;
	

	buf.reserve(src.size());
	while (pos != std :: string :: npos)
	{
		prevPos = pos;
		pos = src.find(find, pos);
		if (pos == std :: string :: npos)
			break;
		buf.append(src, prevPos, pos - prevPos);
		buf += rmp;
		pos += find.size();
	}
	buf.append(src, prevPos, src.size() - prevPos);
	src.swap (buf);
}

int	main(int ac, char **av)
{
	std :: ifstream inputfile;
	std :: string	outName;
	if (ac == 4)
	{
		inputfile.open(av[1]);
		if (inputfile.is_open())
		{
			outName = av[1];
			outName += ".replace";
			std :: ofstream outFile(outName.c_str());
			if (!outFile.is_open())
			{
				std :: cerr << "OutFile can't open" << std :: endl;
				return 1;
			}
			std :: string inFile;
			while(std :: getline(inputfile, inFile))
			{
				remplace(inFile, av[2], av[3]);
				outFile << inFile;
				if (!inputfile.eof())
					outFile << std :: endl;
			}
			outFile.close();
		}
		else 
			std :: cerr << "OutFile can't open" << std :: endl;
		
	}
	else
		std :: cerr << "Check Parameter, need one file, and two string" << std :: endl;
	return 0;
}