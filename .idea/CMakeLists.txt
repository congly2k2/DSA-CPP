cmake_minimum_required(VERSION 3.30)
project(_idea)

set(CMAKE_CXX_STANDARD 14)

add_executable(_idea
    .gitignore
    DSA-CPP-and-PL.iml
    editor.xml
    encodings.xml
    modules.xml
    vcs.xml
    workspace.xml)
