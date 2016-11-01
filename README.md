# opencvtest
some helloworld level for opencv (v2.x) and cpp/nodejs sample

# Pre-requist

$ pip install numpy
$ brew install cmake
$ mkdir release
$ cd release
$ cmake -D CMAKE_BUILD_TYPE=RELEASE -D CMAKE_INSTALL_PREFIX=/usr/local ..
$ make
$ sudo make install
$ ls -al /usr/local/lib/python2.7/site-packages
$ sudo make uninstall

--
NodeJS wrapper:
https://github.com/peterbraden/node-opencv

--
# Build
$ cmake .
$ make 

--
# Usage
$ ./DisplayImage files/life.jpg
