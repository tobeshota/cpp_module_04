/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobeshota <tobeshota@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 21:56:37 by tobeshota         #+#    #+#             */
/*   Updated: 2024/06/15 22:16:31 by tobeshota        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
 protected:
  std::string m_type;

 public:
  Animal(void);
  Animal(const Animal& other);
  Animal& operator=(const Animal& other);
  virtual ~Animal(void);
  std::string getType(void) const;
  virtual void makeSound(void) const;
};

#endif
