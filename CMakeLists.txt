cmake_minimum_required(VERSION 3.20)
project(CLI_AIR_ALERT LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 26)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
find_package(nlohmann_json CONFIG REQUIRED)

FetchContent_Declare(
        cpr
        GIT_REPOSITORY https://github.com/libcpr/cpr.git
        GIT_TAG        1.10.x # Or use a specific release tag/commit
)
FetchContent_MakeAvailable(cpr)

add_executable(CLI_AIR_ALERT
        lib/main.cpp
        lib/api/api_request.cpp
        lib/include/threat.h
        lib/include/location.h
)

target_include_directories(CLI_AIR_ALERT PRIVATE
        lib/include
)

target_link_libraries(CLI_AIR_ALERT PRIVATE
        cpr::cpr
        nlohmann_json::nlohmann_json
)