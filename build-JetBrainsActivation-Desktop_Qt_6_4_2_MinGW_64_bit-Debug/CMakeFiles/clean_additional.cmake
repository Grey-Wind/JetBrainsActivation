# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\JetBrainsActivation_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\JetBrainsActivation_autogen.dir\\ParseCache.txt"
  "JetBrainsActivation_autogen"
  )
endif()
