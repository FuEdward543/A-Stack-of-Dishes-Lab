#include "dish.hpp"
#include <string>
using namespace std;

class DishStack {
private:
    static const int MAX_SIZE = 10;
    Dish* items[MAX_SIZE];
    int top;

public:
    DishStack();
    void push(Dish* dish);
    Dish* pop();
    Dish* peek();
    int size();
};