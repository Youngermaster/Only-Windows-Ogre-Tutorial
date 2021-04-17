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


Let's go to Visual Studio, create a new `C++` project and then click on propperties

<p align="center">
    <img src="GitHubAssets/Step_1.png">
</p>

Go to `Linker` and click `Additional Library Directories`
<p align="center">
    <img src="GitHubAssets/Step_2.png">
</p>

Click in New line
<p align="center">
    <img src="GitHubAssets/Step_3.png">
</p>

Go where you placed the `Ogre3D` GitHub repo, go to `build/lib/Release` and `Select folder`
<p align="center">
    <img src="GitHubAssets/Step_4.png">
</p>

Click OK
<p align="center">
    <img src="GitHubAssets/Step_5.png">
</p>

Go to C++ and click `Additiona Include Directories`
<p align="center">
    <img src="GitHubAssets/Step_6.png">
</p>

Click New Line and add the following folders
<p align="center">
    <img src="GitHubAssets/Step_7.png">
</p>

Go to `Linker`, `input` and Click `Additional Dependencies`:
<p align="center">
    <img src="GitHubAssets/Step_8.png">
</p>

And add the following `.lib` files.
<p align="center">
    <img src="GitHubAssets/Step_9.png">
</p>

Go where you placed the `Ogre3D` GitHub repo and go to `build/bin/release` 
<p align="center">
    <img src="GitHubAssets/Step_10.png">
</p>

Copy all the `.dll` files
<p align="center">
    <img src="GitHubAssets/Step_11.png">
</p>

We paste it on our project
<p align="center">
    <img src="GitHubAssets/Step_12.png">
</p>

And also we copy these 2 `.cfg` files
<p align="center">
    <img src="GitHubAssets/Step_13.png">
</p>

Let's run it
<p align="center">
    <img src="GitHubAssets/Step_14.png">
</p>

*Voila!* There we have it
<p align="center">
    <img src="GitHubAssets/Step_15.png">
</p>

