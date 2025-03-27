/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 12:25:30 by mkadri            #+#    #+#             */
/*   Updated: 2025/03/27 11:10:37 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	setType("dog");
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(Dog const & copy) : Animal(copy)  {
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

Brain*	Dog::getBrain() const {
	return HiThisIsBrain;
}

void	Dog::makeSound() const {
	std::cout << "WAF WAF !" << std::endl;
}