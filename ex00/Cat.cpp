/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobeshota <tobeshota@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 22:01:43 by tobeshota         #+#    #+#             */
/*   Updated: 2024/06/15 22:25:42 by tobeshota        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal() {
  m_type = "Cat";
  std::cout << "(constructor)Cat Default constructor called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
  *this = other;
  std::cout << "(constructor)Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
  if (this != &other) {
    Animal::operator=(other);
  }
  std::cout << "Cat Copy assignment operator called" << std::endl;
  return *this;
}

Cat::~Cat(void) {
  std::cout << "(constructor)Cat destructor called" << std::endl;
}

void Cat::makeSound(void) const {
  std::cout << "(Cat sound)meowwwww" << std::endl;
}
