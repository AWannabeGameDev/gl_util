#ifndef UTIL_H
#define UTIL_H

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <string_view>
#include <initializer_list>
#include <glm/glm.hpp>

void openglDebugCallback(GLenum source, GLenum type, GLuint id, GLenum severity, 
					 GLsizei length, const GLchar* message, const void* userParam);

GLFWwindow* initialize(int windowWidth, int windowHeight, std::string_view title, int majorVersion, int minorVersion);

unsigned int compileShader(unsigned int type, std::string_view path);
unsigned int createShaderProgram(const std::initializer_list<std::string_view>& shaderPaths);

float randrange(float min, float max);

#endif