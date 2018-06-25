cmake_minimum_required(VERSION 3.2)

project(helloworld VERSION 0.0.1)

add_executable(helloworld main.cpp)

target_link_libraries(helloworld helloworld)

install(TARGETS helloworld RUNTIME DESTINATION bin)

