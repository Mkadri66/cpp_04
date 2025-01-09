/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 12:25:30 by mkadri            #+#    #+#             */
/*   Updated: 2025/01/09 13:22:40 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	setType("dog");
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(Dog const & copy) : AAnimal(copy)  {
	*this=copy;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
}

Dog&	Dog::operator=(Dog const & rhs) {
	this->_type = rhs.getType();
	return *this;
}

void	Dog::makeSound() const {
	std::cout << "WAF WAF !" << std::endl;
}