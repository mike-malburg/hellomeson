#pragma once
// Namespace start/end
#define NAMESPACE_HELLOWORLDLIB_START \
   namespace HelloWorldLib            \
   {
#define NAMESPACE_HELLOWORLDLIB_END }

// DLL Import/Export macro for windows
#ifndef HELLOWORLDLIB_API
   #ifdef _WIN32
      #ifdef HELLOWORLDLIB_EXPORTS
         #define HELLOWORLDLIB_API __declspec( dllexport )
      #else
         #define HELLOWORLDLIB_API __declspec( dllimport )
      #endif
   #else
      #define HELLOWORLDLIB_API
   #endif
#endif
