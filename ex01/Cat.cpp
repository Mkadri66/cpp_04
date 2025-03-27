/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 12:13:56 by mkadri            #+#    #+#             */
/*   Updated: 2025/03/27 11:30:29 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	setType("cat");
	HiThisIsBrain = new Brain();
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(Cat const & copy)  : Animal(copy) {
	*this=copy;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat() {
	delete HiThisIsBrain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat&	Cat::operator=(Cat const & rhs) {
	if (this != &rhs) {
		delete HiThisIsBrain;
		this->HiThisIsBrain = new Brain(*rhs.HiThisIsBrain);
		this->_type = rhs.getType();
	}
	return *this;
}

void	Cat::makeSound() const {
	std::cout << "MIAOUUUU" << std::endl;
}

Brain*	Cat::getBrain() const {
	return HiThisIsBrain;
}