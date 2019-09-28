cmake_minimum_required(VERSION 3.14)
project(Account)

set(CMAKE_CXX_STANDARD 17)

add_executable(Account BankMain.cpp Account.cpp Account.h Bank.cpp Bank.h)