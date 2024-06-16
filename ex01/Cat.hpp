/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobeshota <tobeshota@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 22:16:33 by tobeshota         #+#    #+#             */
/*   Updated: 2024/06/16 11:07:44 by tobeshota        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
 private:
  Brain *m_brain;
 public:
  Cat(void);
  Cat(const Cat& other);
  Cat& operator=(const Cat& other);
  ~Cat(void);
  void makeSound(void) const;
};

#endif
