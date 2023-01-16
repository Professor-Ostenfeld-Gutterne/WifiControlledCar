cmake_minimum_required(VERSION 3.13)

project(WifiControlledCar)

set(CMAKE_CXX_STANDARD_INCLUDE_DIRECTORIES ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
# set(CMAKE_COMPILE_WARNING_AS_ERROR ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_STANDARD 11)

add_subdirectory(src)
add_subdirectory(third-party)

# Used for clangd to see how all files are compiled
add_custom_command(
    OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/../../compile_commands.json
    DEPENDENCY ${CMAKE_CURRENT_BINARY_DIR}/compile_commands.json
#    COMMAND cp -f compile_commands.json ${CMAKE_CURRENT_BINARY_DIR}/../../compile_commands.json
    COMMAND ${CMAKE_COMMAND} -E copy compile_commands.json ${CMAKE_CURRENT_BINARY_DIR}/../../compile_commands.json
    COMMENT "Update to active compile_commands.json"

    VERBATIM
)

add_custom_target(compile_commands_json ALL DEPENDS ${CMAKE_CURRENT_BINARY_DIR}/../../compile_commands.json)
