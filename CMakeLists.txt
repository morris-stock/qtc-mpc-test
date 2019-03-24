cmake_minimum_required(VERSION 2.8)

project(multi-parse-context)

set(CMAKE_VERBOSE_MAKEFILE ON CACHE BOOL "ON")

macro(mpc_add_exe opt)
  add_executable(mpc${opt} main.cc)
  set_target_properties(mpc${opt}
    PROPERTIES
      COMPILE_FLAGS "-DMPC_VER=${opt}")
endmacro()

foreach(ver RANGE 0 3)
  mpc_add_exe(${ver})
endforeach()
