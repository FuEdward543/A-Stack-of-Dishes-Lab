#include <iostream>

#include "src/hello.hpp"

int main() {
     DishStack stack;

     Dish one_dish("A dish with one fish pattern on it");
     Dish two_dish("A dish with two fish patterns on it");
     Dish red_dish("A dish with a red fish pattern on it");
     Dish blue_dish("A dish with a blue fish pattern on it");

     int stack_size = stack.size();
     cout << "Stack size = " << stack_size << endl;

     stack.push(&one_dish);
     stack.push(&two_dish);
     stack.push(&red_dish);
     stack.push(&blue_dish);

     int size_after_pushes = stack.size();
     cout << "Size after pushes = " << size_after_pushes << endl;

     Dish* peeked_dish = stack.peek();
     cout << "Peeked dish = " << peeked_dish->get_description() << endl;

     Dish* popped_dish = stack.pop();
     cout << "Popped dish = " << popped_dish->get_description() << endl;

     Dish* another_popped_dish = stack.pop();
     cout << "Another popped dish = " << another_popped_dish->get_description() << endl;

     int final_size = stack.size();
     cout << "Final size = " << final_size << endl;

     return 0;
}


