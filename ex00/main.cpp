/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:01:01 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/19 16:05:27 by kbrener-         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ScalarConverter.hpp"

int	main(int argc, char **argv) {
	if (argc != 2) {
		std::cout<<"ERROR : number of parameter incorrect\n\
One parameter type char, int, float or double is expected"<<std::endl;
	return (1);
	}
	std::string	str(argv[1]);
	ScalarConverter::convert(str);
	return 0;
}
