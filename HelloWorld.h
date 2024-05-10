#pragma once
#include "HelloWorldLibMacros.h"
#include <string>

NAMESPACE_HELLOWORLDLIB_START

class HelloWorld {
    public:
        HELLOWORLDLIB_API std::string getHello();
        HELLOWORLDLIB_API std::string getWorld();
};

NAMESPACE_HELLOWORLDLIB_END
