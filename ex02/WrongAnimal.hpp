/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 12:32:50 by mkadri            #+#    #+#             */
/*   Updated: 2025/01/07 12:33:06 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal {

	protected:

	std::string _type;

	public:

	WrongAnimal();
	WrongAnimal(WrongAnimal const & copy);
	virtual ~WrongAnimal();

	WrongAnimal&	operator=(WrongAnimal const & rhs);

	void		setType(std::string WrongAnimalType);
	std::string	getType() const;

	void	makeSound() const;

};

#endif