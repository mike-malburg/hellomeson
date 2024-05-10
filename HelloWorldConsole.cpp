#include "HelloWorld.h"
#include <iostream>

int main()
{
   auto hw = std::make_unique<HelloWorldLib::HelloWorld>();
   std::cout << hw->getHello() << " " << hw->getWorld() << std::endl;
   return 0;
}