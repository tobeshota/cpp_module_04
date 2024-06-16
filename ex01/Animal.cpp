/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobeshota <tobeshota@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 22:01:43 by tobeshota         #+#    #+#             */
/*   Updated: 2024/06/16 08:59:44 by tobeshota        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : m_type("Animal") {
  std::cout << "(constructor)Animal Default constructor called" << std::endl;
}

Animal::Animal(const Animal& other) {
  *this = other;
  std::cout << "(constructor)Animal copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
  if (this != &other) {
    this->m_type = other.m_type;
  }
  std::cout << "Animal Copy assignment operator called" << std::endl;
  return *this;
}

Animal::~Animal(void) {
  std::cout << "(constructor)Animal destructor called" << std::endl;
}

std::string Animal::getType(void) const { return m_type; }

void Animal::makeSound(void) const { std::cout << "(Animal sound)" << std::endl; }
