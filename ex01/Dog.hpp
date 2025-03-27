/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 12:26:16 by mkadri            #+#    #+#             */
/*   Updated: 2025/03/27 11:09:28 by mkadri           ###   ########.fr       */
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
	virtual ~Dog();	

	Dog&	operator=(Dog const & rhs);

	virtual void	makeSound() const;
	Brain*			getBrain() const;

	private:

	Brain*	HiThisIsBrain;
};

#endif