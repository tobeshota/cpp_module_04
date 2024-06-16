/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 22:18:45 by tobeshota         #+#    #+#             */
/*   Updated: 2024/06/16 13:45:18 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

static void put_line(void)
{
  static int index;
  std::cout << "- " << index++ << " ────────────────────" << std::endl;
}

// static void put_miniline(void)
// {
//   std::cout << "─────" << std::endl;
// }


// int main()
// {
//   Animal* animals[10];
//   for (int i = 0; i < 5; ++i) {
//     animals[i] = new Dog();
//     put_miniline();
//     animals[i + 5] = new Cat();
//     put_miniline();
//   }

//   put_line();

//   for (int i = 0; i < 10; ++i) {
//     animals[i]->makeSound();
//     put_miniline();
//     delete animals[i];
//     put_miniline();
//   }
// }

int main() {
  const Animal* j = new Dog();  //  ①(constructor)Animal Default constructor called ②(constructor)Brain Default constructor called ③(constructor)Dog Default constructor called

  put_line();
  const Animal* i = new Cat();  //  ④(constructor)Animal Default constructor called ⑤(constructor)Brain Default constructor called ⑥(constructor)Cat Default constructor called
  put_line();
  j->makeSound();               //  ⑦(Dog sound)Ahwoooooo
  put_line();
  i->makeSound();               //  ⑧(Cat sound)meowwwww
  put_line();

  //  should not create a leak
  delete j;                     //  ⑨(constructor)Brain destructor called ⑩(constructor)Dog destructor called ⑪(constructor)Animal destructor called
  put_line();
  delete i;                     //  ⑫(constructor)Brain destructor called ⑬(constructor)Cat destructor called ⑭(constructor)Animal destructor called

  return 0;
}

#ifdef DEBUG

__attribute__((destructor)) static void destructor() {
  system("leaks -q a.out");
}

#endif
