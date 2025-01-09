/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 12:13:56 by mkadri            #+#    #+#             */
/*   Updated: 2025/01/09 13:22:17 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	setType("cat");
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(Cat const & copy) : AAnimal(copy)  {
	*this=copy;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
}

Cat&	Cat::operator=(Cat const & rhs) {
	this->_type = rhs.getType();
	return *this;
}

void	Cat::makeSound() const {
	std::cout << "MIAOU" << std::endl;
}