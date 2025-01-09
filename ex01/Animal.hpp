/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 12:10:10 by mkadri            #+#    #+#             */
/*   Updated: 2025/01/07 12:10:29 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal {

	protected:

	std::string _type;

	public:

	Animal();
	Animal(std::string type);
	Animal(Animal const & copy);
	virtual ~Animal();

	Animal&	operator=(Animal const & rhs);

	void		setType(std::string animalType);
	std::string	getType() const;

	virtual void	makeSound() const;

};

#endif