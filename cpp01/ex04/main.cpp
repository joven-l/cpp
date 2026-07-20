/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joloo <joloo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 14:35:29 by joloo             #+#    #+#             */
/*   Updated: 2026/04/06 15:44:15 by joloo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void	write_to_file(char *s1, char *s2, std::ifstream &infile, std::ofstream &outfile)
{
	std::string infile_str((std::istreambuf_iterator<char>(infile)),
							std::istreambuf_iterator<char>());
	int i = 0;
	int	compare_len = std::string(s1).length();
	while (infile_str[i] != '\0')
	{
		if (i + compare_len <= (int) infile_str.length()
			&& infile_str.compare(i, compare_len, s1) == 0)
		{
			outfile << s2;
			i+=	compare_len;
		}
		else
		{
			outfile << infile_str[i];
			i++;
		}
	}
	return ;
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Invalid args" << std::endl;
		return (1);
	}
	std::ifstream infile(argv[1]);
	if (infile.is_open() == false)
	{
		std::cout << "opening infile failed" << std::endl;
		return (1);
	}
	std::ofstream outfile((std::string(argv[1]) + ".replace").c_str());
	if (outfile.is_open() == false)
	{
		std::cout << "creating outfile failed" << std::endl;
		return (1);
	}
	write_to_file(argv[2], argv[3], infile, outfile);
	return (0);
}
