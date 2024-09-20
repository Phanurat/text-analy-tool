cmake_minimum_required(VERSION 3.5)
project(text_processor)

# กำหนดที่อยู่ของ pybind11
set(pybind11_DIR "C:/Users/Jakkranukoolki/AppData/Local/Programs/Python/Python312/Lib/site-packages/pybind11/share/cmake/pybind11")

# ค้นหา pybind11
find_package(pybind11 REQUIRED)

pybind11_add_module(text_processor text_processor.cpp)
