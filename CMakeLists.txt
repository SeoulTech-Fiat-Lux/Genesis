set(CMAKE_POLICY_VERSION_MINIMUM 3.5)
cmake_minimum_required(VERSION 3.20)

project(
    GENESIS
    #VERSION 0.1 # 버전은 추후 명시
    LANGUAGES C CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# FetchContent 모듈 로드
include(FetchContent)

# 1. GLFW 설정 (창 관리 및 입력)
FetchContent_Declare(
  glfw
  GIT_REPOSITORY https://github.com/glfw/glfw.git
  GIT_TAG        3.3.8
  FIND_PACKAGE_ARGS NAMES glfw3
)

# 2. GLM 설정
FetchContent_Declare(
  glm
  GIT_REPOSITORY https://github.com/g-truc/glm.git
  GIT_TAG        0.9.9.8
)

FetchContent_MakeAvailable(glfw glm)

if (APPLE)

elseif(WIN32)
    add_definitions(-D_CRT_SECURE_NO_WARNINGS)
else()
endif()

add_subdirectory(src)