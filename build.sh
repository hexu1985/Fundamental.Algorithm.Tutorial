rm -rf ./build

current_dir=$(cd "$(dirname "$0")" && pwd)
cmake -Bbuild -H. -DENABLE_UNIT_TESTS=ON -DGTest_DIR=${current_dir}/googletest/install/lib/cmake/GTest
#-DGTest_DIR=必须写全路径，可以有'~'，但不能有'.'
#cmake -G"MSYS Makefiles" -Bbuild -H. 
#cmake --build build/
cmake --build build/ -- -j 4
#--target install
