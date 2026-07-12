cmake_minimum_required(VERSION 3.10)

project(BankManagementSystem)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(
    BankSystem
    src/main.cpp
    src/Customer.cpp
    src/Account.cpp
)