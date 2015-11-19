project(ctypes_test)

SET (CMAKE_CXX_FLAGS "-fPIC")

SET (LIB_UTILS_SRC
    main.cpp
)

ADD_LIBRARY (UTILS SHARED
    ${LIB_UTILS_SRC}
)

add_executable(ctypes_test main.cpp)

install(TARGETS ctypes_test RUNTIME DESTINATION bin)
