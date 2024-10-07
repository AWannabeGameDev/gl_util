#ifndef CAMERA_H
#define CAMERA_H

#include <glm/glm.hpp>
#include <glm/gtx/quaternion.hpp>

class Camera
{
private :
	glm::vec3 positionVec;
	glm::quat rotation;
	glm::mat4 projection;

public :
	Camera(float fov, float aspectRatio, float near, float far);

	glm::mat4 viewMatrix() const;
	const glm::mat4& projectionMatrix() const;
	const glm::vec3& position() const;

	const glm::vec3 right() const;
	const glm::vec3 up() const;
	const glm::vec3 behind() const;

	void rotateGlobal(const glm::vec3& globalAxis, float radians);
	void rotateLocal(const glm::vec3& localAxis, float radians);
	void translate(const glm::vec3& displacement);
	void setPosition(const glm::vec3& newPosition);
};

#endif