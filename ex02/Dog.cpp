/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 12:25:30 by mkadri            #+#    #+#             */
/*   Updated: 2025/03/27 11:37:44 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	setType("dog");
	HiThisIsBrain = new Brain();
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(Dog const & copy) : AAnimal(copy) {
	HiThisIsBrain = new Brain(*copy.HiThisIsBrain);
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog() {
	delete HiThisIsBrain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog&	Dog::operator=(Dog const & rhs) {
	if (this != &rhs) {
		delete HiThisIsBrain;
		this->HiThisIsBrain = new Brain(*rhs.HiThisIsBrain);
		this->_type = rhs.getType();
	}
	return *this;
}

void	Dog::makeSound() const {
	std::cout << "WAF WAF !" << std::endl;
}

Brain*	Dog::getBrain() const {
	return HiThisIsBrain;
}