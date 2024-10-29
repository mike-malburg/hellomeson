#pragma once
#include "hellomeson-macros.h"
#include <string>

NAMESPACE_HELLOMESON_START

class hellomeson {
    public:
        HELLOMESON_API std::string getHello();
        HELLOMESON_API std::string getWorld();
};

NAMESPACE_HELLOMESON_END
