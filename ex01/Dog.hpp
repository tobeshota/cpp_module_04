/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 22:12:39 by tobeshota         #+#    #+#             */
/*   Updated: 2024/06/16 19:40:05 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
 private:
  Brain *m_brain;
 public:
  Dog(void);
  Dog(const Dog& other);
  Dog& operator=(const Dog& other);
  ~Dog(void);
  void makeSound(void) const;
  Brain *getBrain(void) const;
};

#endif
