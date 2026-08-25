cmake_minimum_required(VERSION 3.20)
project(lolimenu LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(NOT CMAKE_SIZEOF_VOID_P EQUAL 8)
    message(FATAL_ERROR "This project must be built as x64.")
endif()

file(GLOB IMGUI_SOURCES   "${CMAKE_CURRENT_SOURCE_DIR}/vendor/imgui/*.cpp")
file(GLOB MINHOOK_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/vendor/minhook/*.c")
file(GLOB MINHOOK_HDE     "${CMAKE_CURRENT_SOURCE_DIR}/vendor/minhook/hde/*.c")
file(GLOB FEATURE_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/src/features/**/*.cpp")
file(GLOB GUI_SOURCES     "${CMAKE_CURRENT_SOURCE_DIR}/src/gui/*.cpp")

add_library(lolimenu SHARED
    src/dllmain.cpp
    src/logging.cpp
    src/hooks.cpp
    src/engine.cpp
    src/utils.cpp
    src/render.cpp
    src/menu.cpp
    src/config.cpp
    ${FEATURE_SOURCES}
    ${GUI_SOURCES}
    ${IMGUI_SOURCES}
    ${MINHOOK_SOURCES}
    ${MINHOOK_HDE}
)

target_include_directories(lolimenu PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/src"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/features"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/gui"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/gui/blur"
    "${CMAKE_CURRENT_SOURCE_DIR}/vendor/imgui"
    "${CMAKE_CURRENT_SOURCE_DIR}/vendor/minhook"
    "${CMAKE_CURRENT_SOURCE_DIR}/vendor"
)

target_compile_definitions(lolimenu PRIVATE
    NOMINMAX
    WIN32_LEAN_AND_MEAN
    _CRT_SECURE_NO_WARNINGS
    UNICODE
    _UNICODE
    IMGUI_DEFINE_MATH_OPERATORS
)

target_link_libraries(lolimenu PRIVATE
    d3d11
    dxgi
    user32
    gdi32
    shell32
    winmm
)

set_target_properties(lolimenu PROPERTIES
    PREFIX ""
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin"
)

if(MSVC)
    target_compile_options(lolimenu PRIVATE /W3 /permissive- /utf-8)
    # Static CRT: the manual mapper requires every import to be loaded in the
    # target, but MSVCP140/VCRUNTIME140 are not present in the game process.
    target_compile_options(lolimenu PRIVATE $<$<CONFIG:Release>:/MT> $<$<CONFIG:Debug>:/MTd>)
endif()