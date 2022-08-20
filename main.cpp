#include "GLFW/glfw3.h"
#include <iostream>

int main() {
  glfwInit();
  glfwWindowHint(GLFW_VISIBLE, GLFW_FALSE);
  GLFWwindow* window = glfwCreateWindow(640, 480, "GLCaps", NULL, NULL);
  glfwMakeContextCurrent(window);
  std::cout << "GL Version: " << glGetString(GL_VERSION) << std::endl;
  std::cout << "GL Vendor: " << glGetString(GL_VENDOR) << std::endl;
  std::cout << "GL Renderer: " << glGetString(GL_RENDERER) << std::endl;
  std::cout << "GL Extensions: " << glGetString(GL_EXTENSIONS) << std::endl;
  glfwDestroyWindow(window);
  glfwTerminate();
  return 0;
}
