/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 12:10:10 by mkadri            #+#    #+#             */
/*   Updated: 2025/01/09 13:20:29 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class AAnimal {

	protected:

	std::string _type;

	public:

	AAnimal();
	AAnimal(std::string type);
	AAnimal(AAnimal const & copy);
	virtual ~AAnimal();

	AAnimal&	operator=(AAnimal const & rhs);

	void		setType(std::string AAnimalType);
	std::string	getType() const;

	virtual void	makeSound() const = 0;

};

#endif