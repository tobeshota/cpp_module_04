/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 22:18:45 by tobeshota         #+#    #+#             */
/*   Updated: 2024/06/16 14:05:23 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

static void put_line(void)
{
  static int index;
  std::cout << "- " << index++ << " ────────────────────" << std::endl;
}


int main() {
  /** 💥ここでコンパイルエラーが生じる（∵AbstractAnimalは抽象クラスであることからインスタンスを生成できないため）
   * - エラー文 ---------------------------------------
   * main.cpp:25:36: error: allocating an object of abstract class type 'AbstractAnimal'
   * const AbstractAnimal* meta = new AbstractAnimal();
   *                                    ^
   * ./AbstractAnimal.hpp:35:16: note: unimplemented pure virtual method 'makeSound' in 'AbstractAnimal'
   *   virtual void makeSound(void) const = 0;
   *                ^
   * 1 error generated.
   * make: *** [objs/main.o] Error 1
   * -------------------------------------------------
   */
  const AbstractAnimal* meta = new AbstractAnimal();  //  💥

  const AbstractAnimal* j = new Dog();
  const AbstractAnimal* i = new Cat();

  put_line();
  std::cout << j->getType() << " " << std::endl;
  std::cout << i->getType() << " " << std::endl;

  put_line();
  i->makeSound();
  j->makeSound();

  put_line();
  delete j;
  delete i;

  put_line();
  return 0;
}

#ifdef DEBUG

__attribute__((destructor)) static void destructor() {
  system("leaks -q a.out");
}

#endif
