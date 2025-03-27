/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 12:09:07 by mkadri            #+#    #+#             */
/*   Updated: 2025/03/27 11:06:16 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main() {

std::cout << std::endl;
const Animal*	meta = new Animal();
const Animal*	j = new Dog();
const Animal*	i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); 
j->makeSound();
meta->makeSound();

delete i;
delete j;
delete meta;

std::cout << std::endl;
Dog medor;

medor.getBrain()->ideas[0] = "I should eat this unwatched leftover...";
std::cout << "Medor new idea : " << medor.getBrain()->ideas[0] << std::endl;

Dog medorFriend = medor;
std::cout << "medor's friend idea : " << medorFriend.getBrain()->ideas[0] << std::endl;

return 0;
}