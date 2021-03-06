#pragma once

#include "glad/glad.h"

#include <glm/glm.hpp>
#include <memory>
#include <string>

namespace Donut
{

// forward declare
namespace P3D
{
class Sprite;
class Texture;
} // namespace P3D

class Texture
{
  public:
	Texture(const P3D::Texture&);
	Texture(const P3D::Sprite&);
	~Texture();

	void Bind() const;
	void Bind(GLuint slot) const;

	std::size_t GetWidth() const { return _width; }
	std::size_t GetHeight() const { return _height; }
	glm::ivec2 GetSize() const { return glm::ivec2(_width, _height); }

	// bool HasAlpha() const;
	GLuint GetOpenGLHandle() const { return _glTexture; }

  protected:
	std::string _name;
	std::size_t _width;
	std::size_t _height;

	GLuint _glTexture;
};

} // namespace Donut
