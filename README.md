# Riddle Runtime

[English](README.md) | [中文](README-cn.md)

![Static Badge](https://img.shields.io/badge/cpp-17-green)
![Static Badge](https://img.shields.io/badge/Cmake-3.27-green)
![Static Badge](https://img.shields.io/badge/Antlr-4.13.1-green)
![Badge](https://badgen.net/github/stars/wangziwenhk/Riddle-Runtime)
![Badge](https://badgen.net/github/forks/wangziwenhk/Riddle-Runtime)
![Badge](https://badgen.net/github/issues/wangziwenhk/Riddle-Runtime)
![Badge](https://badgen.net/github/license/wangziwenhk/Riddle-Runtime)

A simple and user-friendly programming language

## :wrench: Technology stack

- Antlr4

## 🚀 Deploy

Preparation work:

- Cmake 3.27
- git
- G++ (Linux) or Mingw (Windows)

Clone the code repository locally first

```bash
git clone https://github.com/wangziwenhk/Riddle-Runtime.git
```

Then enter the directory

```bash
cd ./Riddle-Runtime
```

Compile source code using Cmake

```bash
cmake -B ./build -G "MinGW Makefiles"
```

Enter this directory

```bash
cd ./build
```

Compile files

```bash
make
```