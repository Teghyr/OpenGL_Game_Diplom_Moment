#pragma once

#ifndef WINDOW_WINDOW_H_
#define WINDOW_WINDOW_H_

class GLFWwindow;

class Window
{
	static GLFWwindow* window;

public:

	static int initialize(int width, int height, const char* title);
	static void terminate();

	static bool IsRun();
	static void SwapBufers();
};


#endif
