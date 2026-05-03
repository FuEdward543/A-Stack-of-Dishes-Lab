#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/hello.hpp"

TEST_CASE("Empty stack has size 0") {
    DishStack stack;
    REQUIRE(stack.size() == 0);
}
TEST_CASE("Push works") {
    DishStack stack;

    Dish d1("One");
    Dish d2("Two");

    stack.push(&d1);
    stack.push(&d2);

    REQUIRE(stack.size() == 2);
}
TEST_CASE("Peek works") {
    DishStack stack;

    Dish d1("One");
    Dish d2("Two");

    stack.push(&d1);
    stack.push(&d2);

    Dish* topDish = stack.peek();

    REQUIRE(topDish->get_description() == "Two");
}
TEST_CASE("Pop works") {
    DishStack stack;

    Dish d1("One");
    Dish d2("Two");

    stack.push(&d1);
    stack.push(&d2);

    Dish* popped = stack.pop();

    REQUIRE(popped->get_description() == "Two");
}
TEST_CASE("Pop on empty stack returns nullptr") {
    DishStack stack;

    Dish* popped = stack.pop();

    REQUIRE(popped == nullptr);
}
TEST_CASE("Push on full stack does not change size") {
    DishStack stack;

    Dish d("Dish");

    for (int i = 0; i < 10; i++) {
        stack.push(&d);
    }

    REQUIRE(stack.size() == 10);

    stack.push(&d);

    REQUIRE(stack.size() == 10);
}
