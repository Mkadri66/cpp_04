/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 11:03:30 by mkadri            #+#    #+#             */
/*   Updated: 2025/03/27 11:03:53 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(Brain const & copy) {
	*this=copy;
}

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}

Brain&	Brain::operator=(Brain const & rhs) {
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = rhs.ideas[i];
	}
	return *this;
}