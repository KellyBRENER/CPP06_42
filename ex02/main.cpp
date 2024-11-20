/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:28:35 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/20 12:05:27 by kbrener-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <cstdlib>
#include <ctime>
#include <unistd.h>
#include <exception>

Base * generate(void) {
	srand(time(0));//initialise le générateur de rand avec l'heure actuelle
	int	random_number = rand() % 3;
	if (random_number == 0) {
		Base	*instance_A = new(A);
		return(instance_A);
	}
	else if (random_number == 1) {
		Base	*instance_B = new(B);
		return(instance_B);
	}
	else {
		Base	*instance_C = new(C);
		return(instance_C);
	}
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p)){
		std::cout<<"A"<<std::endl;
		return;
	}
	else if (dynamic_cast<B*>(p)){
		std::cout<<"B"<<std::endl;
		return;
	}
	if (dynamic_cast<C*>(p)){
		std::cout<<"C"<<std::endl;
		return;
	}
}

void identify(Base& p) {
	try {
		A	instance_A = dynamic_cast<A&>(p);
		std::cout<<"A"<<std::endl;
		}
	catch (std::exception & a) {
		try {
			B	instance_B = dynamic_cast<B&>(p);
			std::cout<<"B"<<std::endl;
		}
		catch (std::exception & b) {
			try {
				C	instance_C = dynamic_cast<C&>(p);
				std::cout<<"C"<<std::endl;
			}
			catch (std::exception & c) {
				std::cout<<"this ref doesn't refer to a base child class"<<std::endl;
			}
		}
	}
}

int	main() {
	Base	*instance_A = new(A);
	Base	&ref_A = *instance_A;
	Base	*instance_B = new(B);
	Base	&ref_B = *instance_B;
	Base	*instance_C = new(C);
	Base	&ref_C = *instance_C;
	Base	*random = generate();
	Base	&ref_random = *random;

	std::cout<<"instance_A is a class: "<<std::endl;
	identify(instance_A);
	std::cout<<"ref_A refer to class : "<<std::endl;
	identify(ref_A);
		std::cout<<"instance_B is a class: "<<std::endl;
	identify(instance_B);
	std::cout<<"ref_B refer to class : "<<std::endl;
	identify(ref_B);
		std::cout<<"instance_C is a class: "<<std::endl;
	identify(instance_C);
	std::cout<<"ref_C refer to class : "<<std::endl;
	identify(ref_C);
		std::cout<<"random is a class: "<<std::endl;
	identify(random);
	std::cout<<"ref_random refer to class : "<<std::endl;
	identify(ref_random);
	delete(instance_A);
	delete(instance_B);
	delete(instance_C);
	delete(random);
}
