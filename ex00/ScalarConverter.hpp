/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 10:26:44 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/19 12:08:21 by kbrener-         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <iostream>//to print in standard output
#include <limits>//to access to numeric limits
#include <cstdlib>//to use strtod

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

class ScalarConverter
{
private:
	ScalarConverter() {}
public:
	~ScalarConverter() {}
	static void	convert(const std::string & str);
};

#endif

