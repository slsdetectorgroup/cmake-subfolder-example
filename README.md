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
