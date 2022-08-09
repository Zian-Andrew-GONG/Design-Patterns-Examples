cmake_minimum_required(VERSION 3.5)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/cmake-build/bin)

project(Design_Pattern_Examples VERSION 1.0)

add_subdirectory(Observer_Pattern)
add_subdirectory(Decorator_Pattern)
add_subdirectory(Factory_Pattern)
add_subdirectory(Singleton_Pattern)
add_subdirectory(Command_Pattern)
add_subdirectory(Adapter_and_Facade_Pattern)
add_subdirectory(Template_Pattern)
add_subdirectory(State_Pattern)
add_subdirectory(Proxy_Pattern)
add_subdirectory(iterator_and_Composite_Pattern)