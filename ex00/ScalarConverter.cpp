/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 10:30:54 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/20 11:48:02 by kbrener-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:04:46 by gdaignea          #+#    #+#             */
/*   Updated: 2024/10/15 15:49:04 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter & src) {}
ScalarConverter&	ScalarConverter::operator=(const ScalarConverter & src) {}
ScalarConverter::~ScalarConverter() {}

void	ScalarConverter::convert(const std::string & str) {
	double	double_value = -1;
	char	*end_ptr = NULL;//to stock the first character which cannot be converted
	//check if str is not empty
	if (str.empty())
		std::cout<<"ERROR: the input is empty"<<std::endl;
	if ((str.size() == 1 && !std::isdigit(str[0])) || (str.size() == 3 && str[0] == '\'' && str[2] == '\'')) {
		if(str.size() == 3)
			double_value = str[1];//cast implicit
		else
			double_value = str[0];
		if (std::isprint(double_value))
			std::cout<<"char : "<<static_cast<char>(double_value)<<std::endl;
	}
	if (double_value == -1) {//(str.size() == 1 && std::isdigit(str[0])) || str.size() > 1) {
		double_value = std::strtod(str.c_str(), &end_ptr);
		if (end_ptr == str.c_str()) {//the input cannot be converted since the first character
			std::cout<<"ERROR : format not accepted"<<std::endl;
			return;
		}
		if (double_value >= 0 && double_value <= 255 && std::isprint(double_value))
			std::cout<<"char : "<<static_cast<char>(double_value)<<std::endl;
		else if (str.size() == 1 && std::isdigit(str[0]))
			std::cout<<"char : "<<double_value<<std::endl;
		else
			std::cout<<"char : non displayable"<<std::endl;
	}
	//if int, litteral = int between int max and int min
	if (double_value < std::numeric_limits<int>::min() ||
			double_value > std::numeric_limits<int>::max() || std::isnan(double_value))
			std::cout<<"int : non displayable"<<std::endl;
	else
		std::cout<<"int : "<<static_cast<int>(double_value)<<std::endl;
	//if float, litteral = int.intf between float min et float max
	if ((double_value >= -std::numeric_limits<float>::max() &&
		double_value <= std::numeric_limits<float>::max()) || std::isinf(double_value) || std::isnan(double_value) )
		std::cout<<"float : "<<std::fixed<<std::setprecision(1)<<static_cast<float>(double_value)<<"f"<<std::endl;
	else
		std::cout<<"float : non displayable"<<std::endl;
	//if double
	std::cout<<"double : "<<std::fixed<<std::setprecision(1)<<double_value<<std::endl;
}
