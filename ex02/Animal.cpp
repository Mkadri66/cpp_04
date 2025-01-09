/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 12:11:01 by mkadri            #+#    #+#             */
/*   Updated: 2025/01/09 13:21:01 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal() {
	std::cout << "Animal constructor called" << std::endl;
}

AAnimal::AAnimal(std::string type): _type(type) {
	std::cout << "AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const & copy) {
	*this=copy;
	std::cout << "AAnimal copy constructor called" << std::endl;
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal&	AAnimal::operator=(AAnimal const & rhs) {

	this->_type = rhs.getType();
	return *this;
}

void	AAnimal::setType(std::string AAnimalType) {
	this->_type = AAnimalType;
}

std::string	AAnimal::getType() const {
	return this->_type;
}
