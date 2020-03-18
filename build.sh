rm -rf ./build
cmake -Bbuild -H. -DGTest_DIR=~/local/lib/cmake/GTest
#cmake -G"MSYS Makefiles" -Bbuild -H. 
cmake --build build/
#cmake --build build/ -- -j 4
#--target install
