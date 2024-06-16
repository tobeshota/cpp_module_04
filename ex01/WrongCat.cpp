/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobeshota <tobeshota@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 22:01:43 by tobeshota         #+#    #+#             */
/*   Updated: 2024/06/15 22:25:42 by tobeshota        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal() {
  m_type = "WrongCat";
  std::cout << "(constructor)WrongCat Default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
  *this = other;
  std::cout << "(constructor)WrongCat copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
  if (this != &other) {
    WrongAnimal::operator=(other);
  }
  std::cout << "WrongCat Copy assignment operator called" << std::endl;
  return *this;
}

WrongCat::~WrongCat(void) {
  std::cout << "(constructor)WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound(void) const {
  std::cout << "(WrongCat sound)meowwwww" << std::endl;
}
