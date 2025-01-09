/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 12:09:07 by mkadri            #+#    #+#             */
/*   Updated: 2025/01/09 13:24:12 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main() {

//const AAnimal*	meta = new AAnimal();
const AAnimal*	j = new Dog();
const AAnimal*	i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); 
j->makeSound();
//meta->makeSound();

//delete meta;
delete j;
delete i;

std::cout << " " << std::endl;


std::cout << "WRONGCAT TESTS" << std::endl;
std::cout << " " << std::endl;
const WrongAnimal*	wrongMeta = new WrongAnimal();
const WrongAnimal*	anotherCat = new WrongCat();

std::cout << wrongMeta->getType() << " " << std::endl;
std::cout << anotherCat->getType() << " " << std::endl;
wrongMeta->makeSound(); 
anotherCat->makeSound();

delete wrongMeta;
delete anotherCat;

return 0;
}