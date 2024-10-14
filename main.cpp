#include <GL/glew.h>
#include <glfw3.h>

#include "src/shader.h"
#include "src/rigidbody.h"

#include <iostream>

GLFWwindow* window;

int main() {

    if (!glfwInit()) {
        return 0;
    }

#if defined(__APPLE__)
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
#endif
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 1);

    window = glfwCreateWindow(1200, 800, "Rigidbody", nullptr, nullptr);
    glfwMakeContextCurrent(window);

    glewInit();

    while (!glfwWindowShouldClose(window)) {
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        glClearColor(1, 0, 1, 1);

        glfwPollEvents();
        glfwSwapBuffers(window);
    }
}