# Only Windows Ogre Tutorial

The aim of this repo is to teach how to setup an Ogre project only on Windows using Visual Studio 19.

## ⚙ Setup

### Requirements

You would need:

- `git`
- `CMake`
- `Visual Studio 19`

### Ogre official guides
You can check for the [installation guide](https://ogrecave.github.io/ogre/api/latest/building-ogre.html) of Ogre if you want to.


### How I build it

First we will build `Ogre3D`

```
git clone https://github.com/OGRECave/ogre.git
cd ogre
cmake -S . -B build
cd build
cmake --build . --config release
cmake --build . --config release --target INSTALL
```
