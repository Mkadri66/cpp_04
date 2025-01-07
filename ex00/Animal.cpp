/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 12:11:01 by mkadri            #+#    #+#             */
/*   Updated: 2025/01/07 12:12:01 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(std::string type): _type(type) {
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(Animal const & copy) {
	*this=copy;
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

Animal&	Animal::operator=(Animal const & rhs) {

	this->_type = rhs.getType();
	return *this;
}

void	Animal::setType(std::string animalType) {
	this->_type = animalType;
}

std::string	Animal::getType() const {
	return this->_type;
}

void	Animal::makeSound() const {
	std::cout << "ANIMAL SOUND !" << std::endl;
}