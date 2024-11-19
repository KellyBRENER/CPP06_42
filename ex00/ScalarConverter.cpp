/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 10:30:54 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/19 12:21:48 by kbrener-         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ScalarConverter.hpp"

void	ScalarConverter::convert(const std::string & str) {
	double	double_value;
	//check if str is not empty
	if (str.empty())
		std::cout<<"ERROR: the input is empty"<<std::endl;
	//if char, litteral = 'c'
	if (str.size() == 1 || str.size() == 3) {
		if(str.size() == 3 && str[0] == '\'' && str[2] == '\'')
			double_value = str[1];//cast implicit
		else
			double_value = str[0];
		if (std::isprint(double_value))
			std::cout<<"char : "<<static_cast<char>(double_value)<<std::endl;
		else
			std::cout<<"char : non displayable"<<std::endl;
	}
	else {
		char	*end_ptr = NULL;//to stock the first character which cannot be converted
		double_value = std::strtod(str.c_str(), &end_ptr);
		if (end_ptr == str.c_str()) {//the input cannot be converted since the first character
			std::cout<<"ERROR : format not accepted"<<std::endl;
			return;
		}
		std::cout<<"char : non displayable"<<std::endl;
	}
	//if int, litteral = int between int max and int min
	if (double_value < std::numeric_limits<int>::min() ||
			double_value > std::numeric_limits<int>::max())
			std::cout<<"int : non displayable"<<std::endl;
	else
		std::cout<<"int : "<<static_cast<int>(double_value)<<std::endl;
	//if float, litteral = int.intf between float min et float max
	if (double_value < std::numeric_limits<float>::min() ||
		double_value > std::numeric_limits<float>::max())
		std::cout<<"float : non displayable"<<std::endl;
	else
		std::cout<<"float : "<<static_cast<float>(double_value)<<"f"<<std::endl;
	//if double
	std::cout<<"double : "<<std::fixed<<double_value<<std::endl;
}
