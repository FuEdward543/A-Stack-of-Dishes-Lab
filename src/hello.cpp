#include "hello.hpp"

#include <iostream>
using namespace std;


DishStack::DishStack() {
   top = -1;
}

void DishStack::push(Dish* dish) {
   if (top == MAX_SIZE - 1) {
      cout << "Stack is full" << endl;
      return;
   }
   top++;
   items[top] = dish;
}

Dish* DishStack::pop() {
   if (top == -1) {
      cout << "Stack is empty" << endl;
      return nullptr;
   }
   Dish* removed = items[top];
   top--;
   return removed;
}

Dish* DishStack::peek() {
   if (top == -1) {
      cout << "Stack is empty" << endl;
      return nullptr;
   }

   return items[top];
}

int DishStack::size() {
   return top + 1;
}
