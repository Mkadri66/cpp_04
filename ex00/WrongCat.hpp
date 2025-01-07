/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 12:40:08 by mkadri            #+#    #+#             */
/*   Updated: 2025/01/07 12:40:20 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {

	public:

	WrongCat();
	WrongCat(WrongCat const & copy);
	virtual ~WrongCat();	

	WrongCat&	operator=(WrongCat const & rhs);

	void	makeSound() const;
};

#endif