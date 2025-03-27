/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 12:26:16 by mkadri            #+#    #+#             */
/*   Updated: 2025/03/27 11:24:26 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal {

	public:

	Dog();
	Dog(Dog const & copy);
	~Dog();	

	Dog&	operator=(Dog const & rhs);
	Brain*	getBrain() const;

	virtual void	makeSound() const;

	private:

	Brain*	HiThisIsBrain;
};

#endif