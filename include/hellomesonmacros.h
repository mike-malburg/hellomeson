#pragma once
// Namespace start/end
#define NAMESPACE_HELLOMESON_START \
   namespace hellomesonlib            \
   {
#define NAMESPACE_HELLOMESON_END }

// DLL Import/Export macro for windows
#ifndef HELLOMESON_API
   #ifdef _WIN32
      #ifdef HELLOMESON_EXPORTS
         #define HELLOMESON_API __declspec( dllexport )
      #else
         #define HELLOMESON_API __declspec( dllimport )
      #endif
   #else
      #define HELLOMESON_API
   #endif
#endif
