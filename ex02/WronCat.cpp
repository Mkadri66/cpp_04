/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WronCat.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 12:40:33 by mkadri            #+#    #+#             */
/*   Updated: 2025/01/07 13:01:04 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	setType("WrongCat");
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const & copy) : WrongAnimal(copy)  {
	*this=copy;
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat&	WrongCat::operator=(WrongCat const & rhs) {
	this->_type = rhs.getType();
	return *this;
}

void	WrongCat::makeSound() const {
	std::cout << "WRONG CAT " << std::endl;
}