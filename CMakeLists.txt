CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
 
project(mini_algo)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if(MSVC)
    set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /utf-8")
    set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS} /utf-8")
endif()

if(WIN32)
	set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
    set(LIBS_SYSTEM )
else()
    set(LIBS_SYSTEM pthread)
endif()

include_directories("${CMAKE_CURRENT_SOURCE_DIR}/include")

add_subdirectory(samples)

option(ENABLE_UNIT_TESTS "Enable unit tests" ON)
message(STATUS "Enable testing: ${ENABLE_UNIT_TESTS}")

if (ENABLE_UNIT_TESTS)
    add_subdirectory(test)
    enable_testing()
    add_test(
        NAME google_test
        COMMAND $<TARGET_FILE:mini_algo_test>
        )
endif()
