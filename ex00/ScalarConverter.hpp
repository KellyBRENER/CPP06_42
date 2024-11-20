/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 10:26:44 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/20 11:26:26 by kbrener-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>//to print in standard output
#include <limits>//to access to numeric limits
#include <cstdlib>//to use strtod
#include <iomanip>//to use std::setprecision(1)
#include <cmath> //to use std::isnan()
// # include <string>
// # include <climits>

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

class ScalarConverter
{
private:
	ScalarConverter();
	ScalarConverter(const ScalarConverter & src);
	ScalarConverter&	operator=(const ScalarConverter & src);
public:
	~ScalarConverter();
	static void	convert(const std::string & str);
};

#endif

