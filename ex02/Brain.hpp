/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 11:03:08 by mkadri            #+#    #+#             */
/*   Updated: 2025/03/27 11:03:19 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

# include <iostream>
# include <string>

class Brain {
	
	public:
	Brain();
	Brain(Brain const & copy);
	~Brain();

	Brain&	operator=(Brain const & rhs);

	std::string	ideas[100];	
};

#endif