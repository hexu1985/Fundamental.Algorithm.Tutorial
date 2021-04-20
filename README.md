### ubuntu下编译gtest:
```
$ git clone https://github.com/google/googletest.git
$ cd googletest
$ cmake -H. -Bbuild -DCMAKE_INSTALL_PREFIX=./install
$ cmake --build build --target install
```

