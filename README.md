# donut

[![Travis Build](https://img.shields.io/travis/com/plowteam/donut?logo=travis)](https://travis-ci.com/plowteam/donut)
[![Appveyor Build](https://img.shields.io/appveyor/ci/handsomematt/donut?logo=appveyor)](https://ci.appveyor.com/project/handsomematt/donut)
[![GitHub Stars](https://img.shields.io/github/stars/plowteam/donut?logo=github)](https://github.com/plowteam/donut/stargazers)
[![Discord chat](https://img.shields.io/discord/611594006803120148?logo=discord&logoColor=white)](https://discord.gg/xpdbWzG)
[![License](https://img.shields.io/github/license/plowteam/donut)](LICENSE.md)

donut is an open source reimplementation of The Simpsons: Hit & Run written in modern C++ and modern OpenGL.

---

<a href="https://files.facepunch.com/Layla/2019/August/11/2019-08-09_22-12-28.png">
    <img src="https://files.facepunch.com/Layla/2019/August/11/2019-08-09_22-12-28.png" width="45%">
</a>
<a href="https://files.facepunch.com/Layla/2019/August/11/2019-08-09_22-11-26.png">
    <img src="https://files.facepunch.com/Layla/2019/August/11/2019-08-09_22-11-26.png" width="45%">
</a>

# Building

Clone the code using: `git clone --recursive https://github.com/plowteam/donut.git`, build following the instructions below and then copy the assets folder and the original game files into the `build/bin` folder.

## Windows

* Install [Visual Studio 2019](https://visualstudio.microsoft.com/downloads/)
* Install [CMake](https://cmake.org/download/)
* Open CMake GUI and point it to `donut` folder, set build directory to `donut/build`
* Set `BULLET_ROOT` to the Bullet directory, everything else is automatically set.
* Press Configure, Generate, Open Project and then build.

### Building Bullet

* Download [Bullet](https://github.com/bulletphysics/bullet3)
* Build using CMake or Premake, making sure `USE_MSVC_RUNTIME_LIBRARY_DLL` is enabled.

## Linux

First you'll need to install the following dependencies to build donut:

```bash
apt install build-essential libsdl2-dev cmake libglm-dev libbullet-dev libopenal-dev
```

Then to build run CMake in a build directory:

```bash
mkdir build && cd build
cmake ../
make
```

**Mesa drivers on Linux:** if you are trying to run with Mesa drivers and are getting issues with OpenGL context try messing with `MESA_GL_VERSION_OVERRIDE` when running like so: `MESA_GL_VERSION_OVERRIDE=4.3FC MESA_GLSL_VERSION_OVERRIDE=430 bin/donut`

## Docs
* [Chunks](dev/Chunks.md)
* [Commands](dev/Commands.md)

## Contributing
Contributions are always welcome, whether it's modifying source code to add new
features or bug fixes, documenting new file formats or simply editing some
grammar.

## License
donut is released as open source software under the [GPL v3](https://opensource.org/licenses/gpl-3.0.html)
license, see the [LICENSE.md](./LICENSE.md) file in the project root for the full license text.
