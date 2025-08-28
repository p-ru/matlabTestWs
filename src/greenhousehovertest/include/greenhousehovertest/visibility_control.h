#ifndef GREENHOUSEHOVERTEST__VISIBILITY_CONTROL_H_
#define GREENHOUSEHOVERTEST__VISIBILITY_CONTROL_H_
#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define GREENHOUSEHOVERTEST_EXPORT __attribute__ ((dllexport))
    #define GREENHOUSEHOVERTEST_IMPORT __attribute__ ((dllimport))
  #else
    #define GREENHOUSEHOVERTEST_EXPORT __declspec(dllexport)
    #define GREENHOUSEHOVERTEST_IMPORT __declspec(dllimport)
  #endif
  #ifdef GREENHOUSEHOVERTEST_BUILDING_LIBRARY
    #define GREENHOUSEHOVERTEST_PUBLIC GREENHOUSEHOVERTEST_EXPORT
  #else
    #define GREENHOUSEHOVERTEST_PUBLIC GREENHOUSEHOVERTEST_IMPORT
  #endif
  #define GREENHOUSEHOVERTEST_PUBLIC_TYPE GREENHOUSEHOVERTEST_PUBLIC
  #define GREENHOUSEHOVERTEST_LOCAL
#else
  #define GREENHOUSEHOVERTEST_EXPORT __attribute__ ((visibility("default")))
  #define GREENHOUSEHOVERTEST_IMPORT
  #if __GNUC__ >= 4
    #define GREENHOUSEHOVERTEST_PUBLIC __attribute__ ((visibility("default")))
    #define GREENHOUSEHOVERTEST_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define GREENHOUSEHOVERTEST_PUBLIC
    #define GREENHOUSEHOVERTEST_LOCAL
  #endif
  #define GREENHOUSEHOVERTEST_PUBLIC_TYPE
#endif
#endif  // GREENHOUSEHOVERTEST__VISIBILITY_CONTROL_H_
// Generated 29-Aug-2025 02:02:19
// Copyright 2019-2020 The MathWorks, Inc.
