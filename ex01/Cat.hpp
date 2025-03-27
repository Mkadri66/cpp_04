/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 12:14:42 by mkadri            #+#    #+#             */
/*   Updated: 2025/03/27 11:09:18 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"


class Cat: public Animal {

	public:

	Cat();
	Cat(Cat const & copy);
	virtual ~Cat();	

	Cat&	operator=(Cat const & rhs);
	Brain*			getBrain() const;

	virtual void	makeSound() const;
	
	private:

	Brain*	HiThisIsBrain;
	
};

#endif