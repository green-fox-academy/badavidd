#this line is only for windows users
add_compile_definitions(WINVER=0x0500)

#CHANGE THIS TO THE PATH WHERE YOU EXTRACTED GOOGLE TEST FILES TO
set(PATH_TO_GOOGLETEST "C:/greenfoxkonyvtarak/googletest")
add_subdirectory(${PATH_TO_GOOGLETEST} ${CMAKE_CURRENT_BINARY_DIR}/googletest)
include_directories(${PATH_TO_GOOGLETEST}/googletest/include)

add_executable(poker_tests pokertest.cpp)
target_link_libraries(poker_tests gtest gtest_main)
target_link_libraries(poker_tests poker)