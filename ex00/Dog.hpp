/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 12:26:16 by mkadri            #+#    #+#             */
/*   Updated: 2025/01/07 12:26:19 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog: public Animal {

	public:

	Dog();
	Dog(Dog const & copy);
	virtual ~Dog();	

	Dog&	operator=(Dog const & rhs);

	virtual void	makeSound() const;
};

#endif