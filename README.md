# Using slsDetectorPackage from a subfolder
A simple example how to use the slsDetectorPackage as a subfolder.

```bash
#Clone this project including submodules
git clone --recurse-submodules -j8 https://github.com/slsdetectorgroup/cmake-subfolder-example.git

#Create a build dir outside source and build
mkdir build && cd build
cmake ../cmake-subfolder-example/
make -j12

```

# Using find from a slsDetectorPackage installation
If you have compiled and installed slsDetectorPackage we also support find_package in CMake. 
If installed in a system wide location no path should be needed, otherwise specify cmake prefix path.

```bash
#Clone this project including submodules
git clone https://github.com/slsdetectorgroup/cmake-subfolder-example.git

#Using the right file to build
cp CMakeLists_using_find.txt CMakeList.txt 

#Create a build dir outside source and build
mkdir build && cd build
cmake ../cmake-subfolder-example/ -DCMAKE_PREFIX_PATH=/path/to/installation
make -j12

```
