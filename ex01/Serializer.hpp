/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:45:21 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/19 17:17:53 by kbrener-         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <iostream>
#include <stdint.h>

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

struct Data
{
	std::string	name;
	int	int_value;
	float	float_value;
};

class Serializer
{
private:
	Serializer() {}
public:
	~Serializer() {}
	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
};

#endif
