/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 12:14:42 by mkadri            #+#    #+#             */
/*   Updated: 2025/01/07 12:17:42 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat: public Animal {

	public:

	Cat();
	Cat(Cat const & copy);
	virtual ~Cat();	

	Cat&	operator=(Cat const & rhs);

	virtual void	makeSound() const;
};

#endif