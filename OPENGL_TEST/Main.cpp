
#include <iostream>
#include <GL/glew.h>
#include <GLFW\glfw3.h>


int main()
{
	glfwInit();
	glfwWindowHint(GLFW_SAMPLES, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);

	GLFWwindow* window = glfwCreateWindow(800, 600, "VACCUM", NULL, NULL);


	int screenWidth, screenHeight;

	glfwGetFramebufferSize(window, &screenWidth, &screenHeight);

	//if (nullptr == window)
	//{
	//	std::cout << "FAILED\n";
	//	glfwTerminate();
	//	return EXIT_FAILURE;
	//}

	//glfwMakeContextCurrent(window);

	//glewExperimental = GL_TRUE;

	//if (GLEW_OK != GL_TRUE)
	//{
	//	std::cout << "FAILED TO GLEW\n";
	//	return EXIT_FAILURE;
	//}

	//glViewport(0, 0, screenWidth, screenHeight);




	return 0;
}

