file(GLOB_RECURSE ENGINE_SOURCES
    "core/*.cpp"
    "graphics/*.cpp"
    "physics/*.cpp"
    "*.cpp"
)

set(SOURCES 
    ${ENGINE_SOURCES}
    "${CMAKE_SOURCE_DIR}/external/glad/src/glad.c"
)


add_executable(${PROJECT_NAME} ${SOURCES})

target_include_directories(${PROJECT_NAME} PRIVATE 
    "${CMAKE_SOURCE_DIR}/include"
    "${CMAKE_SOURCE_DIR}/external/glad/include"
)

# 4. 라이브러리 연결
target_link_libraries(${PROJECT_NAME} PRIVATE 
    glfw 
    glm::glm
    opengl32
)