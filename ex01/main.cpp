/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:56:59 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/19 17:20:35 by kbrener-         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Serializer.hpp"

int	main() {
	Data	data;
	data.float_value = 42.42;
	data.int_value = 42;
	data.name = "ecole42";
	std::cout<<"*******data structure creation*******"<<std::endl;
	std::cout<<"data adress : "<<&data<<std::endl;
	std::cout<<"data.name : "<<data.name<<std::endl;
	std::cout<<"data.int : "<<data.int_value<<std::endl;
	std::cout<<"data.float : "<<data.float_value<<"\n"<<std::endl;

	uintptr_t	ptr = Serializer::serialize(&data);
	std::cout<<"********serialization*******"<<std::endl;
	std::cout<<"uintptr_r from data serialization : "<<ptr<<"\n"<<std::endl;
	std::cout<<"*******data information checking*******"<<std::endl;
	std::cout<<"data adress : "<<&data<<std::endl;
	std::cout<<"data.name : "<<data.name<<std::endl;
	std::cout<<"data.int : "<<data.int_value<<std::endl;
	std::cout<<"data.float : "<<data.float_value<<"\n"<<std::endl;

	Data	*deserialized_data = Serializer::deserialize(ptr);
	std::cout<<"*******deserialization*******"<<std::endl;
	std::cout<<"deserialized_data adress : "<<&deserialized_data<<std::endl;
	std::cout<<"deserialized_data.name : "<<deserialized_data->name<<std::endl;
	std::cout<<"deserialized_data.int : "<<deserialized_data->int_value<<std::endl;
	std::cout<<"deserialized_data.float : "<<deserialized_data->float_value<<"\n"<<std::endl;

	std::cout<<"*******data information checking*******"<<std::endl;
	std::cout<<"data adress : "<<&data<<std::endl;
	std::cout<<"data.name : "<<data.name<<std::endl;
	std::cout<<"data.int : "<<data.int_value<<std::endl;
	std::cout<<"data.float : "<<data.float_value<<std::endl;
}
