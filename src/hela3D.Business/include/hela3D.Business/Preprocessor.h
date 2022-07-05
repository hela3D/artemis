#pragma once

#ifdef _WIN32

#define IMPORT_SYMBOL __declspec(dllimport)
#define EXPORT_SYMBOL __declspec(dllexport)

#elif __GNUC__ >= 4

#define IMPORT_SYMBOL __attribute__((visibility("default")))
#define EXPORT_SYMBOL __attribute__((visibility("default")))

#else

#define IMPORT_SYMBOL
#define EXPORT_SYMBOL

#endif

#ifdef HELA3D_BUSINESS
#define HELA3D_BUSINESS_PUBLIC EXPORT_SYMBOL
#else
#define HELA3D_BUSINESS_PUBLIC IMPORT_SYMBOL
#endif
