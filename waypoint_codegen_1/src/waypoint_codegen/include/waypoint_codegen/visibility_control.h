#ifndef WAYPOINT_CODEGEN__VISIBILITY_CONTROL_H_
#define WAYPOINT_CODEGEN__VISIBILITY_CONTROL_H_
#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define WAYPOINT_CODEGEN_EXPORT __attribute__ ((dllexport))
    #define WAYPOINT_CODEGEN_IMPORT __attribute__ ((dllimport))
  #else
    #define WAYPOINT_CODEGEN_EXPORT __declspec(dllexport)
    #define WAYPOINT_CODEGEN_IMPORT __declspec(dllimport)
  #endif
  #ifdef WAYPOINT_CODEGEN_BUILDING_LIBRARY
    #define WAYPOINT_CODEGEN_PUBLIC WAYPOINT_CODEGEN_EXPORT
  #else
    #define WAYPOINT_CODEGEN_PUBLIC WAYPOINT_CODEGEN_IMPORT
  #endif
  #define WAYPOINT_CODEGEN_PUBLIC_TYPE WAYPOINT_CODEGEN_PUBLIC
  #define WAYPOINT_CODEGEN_LOCAL
#else
  #define WAYPOINT_CODEGEN_EXPORT __attribute__ ((visibility("default")))
  #define WAYPOINT_CODEGEN_IMPORT
  #if __GNUC__ >= 4
    #define WAYPOINT_CODEGEN_PUBLIC __attribute__ ((visibility("default")))
    #define WAYPOINT_CODEGEN_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define WAYPOINT_CODEGEN_PUBLIC
    #define WAYPOINT_CODEGEN_LOCAL
  #endif
  #define WAYPOINT_CODEGEN_PUBLIC_TYPE
#endif
#endif  // WAYPOINT_CODEGEN__VISIBILITY_CONTROL_H_
// Generated 05-Sep-2025 01:01:21
// Copyright 2019-2020 The MathWorks, Inc.
