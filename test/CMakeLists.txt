# 可能需要删除cmake自带的FindGTest.cmake
# 路径是/usr/share/cmake-x.y/Modules
find_package(GTest REQUIRED)

aux_source_directory(. SRC_FILE_LIST)
add_executable(sample ${SRC_FILE_LIST})
target_link_libraries(sample GTest::gtest)
