set(HEADER_LIST
  "${CmakeTesting_SOURCE_DIR}/include/helper/helper.h"
)

add_library(helper_library STATIC
  helper.cc
  ${HEADER_LIST}
)
target_include_directories(helper_library PUBLIC ../include)
target_compile_features(helper_library PRIVATE cxx_std_17)

add_executable(app
  main.cc
  utils.h
)
target_compile_features(app PRIVATE cxx_std_17)
target_link_libraries(app PRIVATE helper_library)
