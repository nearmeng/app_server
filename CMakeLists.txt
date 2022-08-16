cmake_minimum_required (VERSION 3.20)

project(app_server)

include (FetchContent)
FetchContent_Declare(cmake_tool GIT_REPOSITORY https://github.com/nearmeng/cmake_tools.git GIT_TAG master)
FetchContent_MakeAvailable(cmake_tool)

add_subdirectory(game_server)
add_subdirectory(func_server)
add_subdirectory(online_server)
