#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>

// 창 크기 변경 시 호출되는 콜백 함수
void framebuffer_size_callback(GLFWwindow* window, int width, int height) {
    glViewport(0, 0, width, height);
}

int main() {
    // 1. GLFW 초기화
    if (!glfwInit()) {
        std::cerr << "Failed to initialize GLFW" << std::endl;
        return -1;
    }

    // OpenGL 버전 설정 (3.3 Core Profile)
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

#ifdef __APPLE__
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
#endif

    // 2. 창 생성 (GENESIS 엔진 데모)
    GLFWwindow* window = glfwCreateWindow(800, 600, "GENESIS Engine Demo", NULL, NULL);
    if (!window) {
        std::cerr << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);
    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

    // 3. GLAD 초기화 (OpenGL 함수 포인터 로드)
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
        std::cerr << "Failed to initialize GLAD" << std::endl;
        return -1;
    }

    // 4. 렌더링 루프
    while (!glfwWindowShouldClose(window)) {
        // 입력 처리
        if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
            glfwSetWindowShouldClose(window, true);

        // 렌더링: 배경을 푸른색으로 설정
        // RGBA (0.2f, 0.3f, 0.8f, 1.0f) -> 부드러운 파란색
        glClearColor(0.2f, 0.3f, 0.8f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        // 버퍼 교체 및 이벤트 조사
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    // 5. 자원 해제
    glfwTerminate();
    return 0;
}