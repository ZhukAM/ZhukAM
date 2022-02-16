#ifndef FUNCTION
#define FUNCTION

#include <iostream>
void strcat_(char* to, const char* from);
void smtp();
struct A {
     A() = default;
     A(const A&) { std::cout << __PRETTY_FUNCTION__ << std::endl; }
     A& operator=(const A&) { std::cout <<  __PRETTY_FUNCTION__ << std::endl; return *this; }
     A(A&&) { std::cout << __PRETTY_FUNCTION__ << std::endl; }
     A& operator=(A&&) { std::cout << __PRETTY_FUNCTION__ << std::endl; return *this; }
 };

#endif

