#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do
                           // this in one cpp file
#include "catch.hpp"

extern "C" {
#include "fib.h"
#include "sum.h"
#include "sumn.h"
}

// See Catch2's documentation:
// https://github.com/catchorg/Catch2/blob/devel/docs/tutorial.md#scaling-up

TEST_CASE("sumn") {
    REQUIRE(sumn(1) == 1);      // sum(1) must be 1
    REQUIRE(sumn(3) == 9);      // sum(3) = 1+3+5 = 9
    REQUIRE(sumn(33) == 1089);  // sum(33) = 1+3+5+...+65 = 1089
}
TEST_CASE("sumtail") {
    // Add the tests for excercise 3 "sumtail" function here. Use "REQUIRE()"
    // statement to check.
    REQUIRE(sumtail(1, 0) == 1);      // sumtail(1) must be 1 (BASE CASE)
    REQUIRE(sumtail(6, 0) == 21);     // sumtail(3) = 1+2+3+4+5+6 = 21
    REQUIRE(sumtail(90, 0) == 4095);  // sumtail(33) = 1+3+5+...+90 = 4095
}

TEST_CASE("sumwhile") {
    // Add the tests for excercise 3 "sumwhile" function here. Use "REQUIRE()"
    // statement to check.
    REQUIRE(sumwhile(1) == 1);       // sumwhile(1) must be 1 (BASE CASE)
    REQUIRE(sumwhile(5) == 15);      // sumwhile(5) = 1+2+3+4+5 = 15
    REQUIRE(sumwhile(100) == 5050);  // sumwhile(33) = 1+3+5+...+100 = 5050
}

TEST_CASE("fib") {
    // Add the tests for excercise 4 "fib" function here. Use "REQUIRE()"
    // statement to check.
    REQUIRE(fib(1, 1, 1) == 1);      // fib(1) must be 1 (BASE CASE)
    REQUIRE(fib(5, 1, 1) == 5);      // fib(5) = 5
    REQUIRE(fib(18, 1, 1) == 2584);  // fib(18) = 2584
}
