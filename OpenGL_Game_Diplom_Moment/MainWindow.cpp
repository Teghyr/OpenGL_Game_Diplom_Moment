#include <GLFW/glfw3.h>
#include <iostream>
#include "Window.h"

using namespace std;

int WIDTH = 1080;
int HEIGHT = 720;

int main(void)
{
    Window::initialize(WIDTH, HEIGHT, "Game in aplpha gamma test no pubplic and radioactive");
    /* Loop until the user closes the window */
    while (!Window::IsRun())
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        /* Swap front and back buffers */
        Window::SwapBufers();

        /* Poll for and process events */
        glfwPollEvents();
    }

    Window::terminate();
    return 0;
}