#include <iostream>
#include <GLFW/glfw3.h>
#include "Window.h"


GLFWwindow* Window::window;

int Window::initialize(int width, int height, const char* title) {
    glfwInit();
    /* Initialize the library */
    if (!glfwInit())
        return -1;

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(1080, 720, title, NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        std::cout << "Faill start GLFW window";
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

}

bool Window::IsRun() {
    return glfwWindowShouldClose(window);
}

void Window::SwapBufers() {
    glfwSwapBuffers(window);
}

void Window::terminate() {
    glfwTerminate();
}