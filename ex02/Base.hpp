/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrener- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:24:25 by kbrener-          #+#    #+#             */
/*   Updated: 2024/11/19 17:27:20 by kbrener-         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <iostream>

#ifndef BASE_HPP
#define BASE_HPP

class Base
{
private:
	/* data */
public:
	virtual ~Base() {}
};

class	A : public Base {};
class	B : public Base {};
class	C : public Base {};


#endif
