#include "function.h"
#include <cstdlib>
#include <memory>
#include <string>

int main(int argc, char** argv){
    std::unique_ptr<int> p1(new int(42));
    std::unique_ptr<A> p2(new A());
    const int x = 42;
    const int&& lx = std::move(x);
    std::cout << &lx << '\n';
    smtp();
    std::cout << '\n';
    char* fy = const_cast<char*>("Fuck you ass!");
    std::cout << fy << '\n';
    return 0;
}    

