// Computacion_grafica_y_OpenGL.cpp : Defines the entry point for the application.
//

#include <iostream>

#include <glad/glad.h>
#include <GLFW/glfw3.h>

int main()
{
	GLFWwindow* window;

	if (!glfwInit())
	{
		std::cout << "Could not initialize GLFW" << std::endl;
		return -1;
	}

	window = glfwCreateWindow(640, 480, "Introduccion a OpenGL", nullptr, nullptr);
	if (!window)
	{
		glfwTerminate();
		std::cout << "Could not initialize window" << std::endl;
	}

	glfwMakeContextCurrent(window);

	while (!glfwSetWindowShouldClose())
	{
		glClear(GL_COLOR_BUFFER_BIT);

		glfwSwapBuffers();
		glfwPollEvents();
	}


	glfwTerminate();
	return 0;
}
