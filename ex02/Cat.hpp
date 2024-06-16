/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 22:16:33 by tobeshota         #+#    #+#             */
/*   Updated: 2024/06/16 19:11:18 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
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
