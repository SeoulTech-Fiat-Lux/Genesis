file(GLOB_RECURSE ENGINE_SOURCES CONFIGURE_DEPENDS
        "core/*.cpp"
        "graphics/*.cpp"
        "physics/*.cpp"
        "*.cpp"
)

add_library(${PROJECT_NAME} STATIC ${ENGINE_SOURCES})

target_include_directories(${PROJECT_NAME} PUBLIC
    "${CMAKE_SOURCE_DIR}/include"
)

# 4. 라이브러리 연결
if (APPLE)
    # mac 환경
    target_link_libraries(${PROJECT_NAME} PUBLIC
            glad
            glfw
            glm::glm
            "-framework OpenGL"
            "-framework Cocoa"
            "-framework IOKit"
            "-framework CoreVideo"
    )
elseif(WIN32)
    # 윈도우 설정
    target_link_libraries(${PROJECT_NAME} PUBLIC
            glad
            glfw
            glm::glm
            opengl32
    )
elseif(UNIX AND NOT APPLE)
    # 리눅스(우분투 등) 설정
    target_link_libraries(${PROJECT_NAME} PUBLIC
            glad
            glfw
            glm::glm
            GL
            X11
            lpthread
            Xrandr
            Xi
            dl
            m
    )
endif()