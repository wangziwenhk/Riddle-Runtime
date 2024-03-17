cmake_minimum_required(VERSION 3.27)
project(Riddle)
set(CMAKE_CXX_STANDARD 17)
link_directories(lib)
include_directories(
        include
        gen
)
set(scr_dir
        gen/RiddleLexer.cpp
        gen/RiddleParser.cpp
        gen/RiddleParserVisitor.cpp
        gen/RiddleParserListener.cpp
        gen/RiddleParserBaseVisitor.cpp
        gen/RiddleParserBaseListener.cpp
        scr/visitor.cpp
        scr/ObjManager.cpp
        scr/ObjManager.h
        scr/Object.cpp
        scr/Object.h
        scr/Tools.cpp
        scr/Tools.h
        scr/toAstVisitor.cpp
        scr/toAstVisitor.h
)



add_executable(Riddle ${scr_dir} scr/main.cpp)
target_link_libraries(Riddle ${PROJECT_SOURCE_DIR}/lib/libantlr4-runtime.dll)
