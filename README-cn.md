# Riddle 运行时

[English](README.md) | [中文](README-cn.md)

![Static Badge](https://img.shields.io/badge/cpp-17-green)
![Static Badge](https://img.shields.io/badge/Cmake-3.27-green)
![Static Badge](https://img.shields.io/badge/Antlr-4.13.1-green)
![Badge](https://badgen.net/github/stars/wangziwenhk/Riddle-Runtime)

一个简单好用的编程语言

## :wrench: 技术栈

- Antlr4

## 🚀 部署

准备工作:

- Cmake 3.27
- git
- G++ (Linux) 或 Mingw (Windows)

先将该代码库克隆至本地

```bash
git clone https://github.com/wangziwenhk/Riddle-Runtime.git
```

然后进入该目录

```bash
cd ./Riddle-Runtime
```

使用 Cmake 编译源代码

```bash
cmake -B ./build -G "MinGW Makefiles"
```

进入该目录

```bash
cd ./build
```

编译文件

```bash
make
```

