#include "Stack.h"
#include <iostream>
using namespace std;
int main()
{
    Stack stack(2);

    std::cout << "Pushing 10\n";
    stack.push(10);

    std::cout << "Pushing 20\n";
    stack.push(20);

    std::cout << "Pushing 30\n";
    stack.push(30);  

    std::cout << "Pushing 40\n";
    stack.push(40);

    std::cout << "Pushing 50\n";
    stack.push(50);  


    stack.pop();
    stack.pop();
    stack.display();

    std::cout << "Finished pushing items!\n";

    return 0;
}