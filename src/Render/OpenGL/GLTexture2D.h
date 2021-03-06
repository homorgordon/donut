// Copyright 2019 the donut authors. See AUTHORS.md

#pragma once

#include <glad/glad.h>
#include <glm/glm.hpp>

namespace Donut::GL
{

class GLTexture2D
{
  public:
	GLTexture2D() = delete;
	GLTexture2D(GLsizei width, GLsizei height, GLenum internalFormat, GLenum format, GLenum type, const void* textureData);
	~GLTexture2D();

	inline void Bind() const
	{
		glBindTexture(GL_TEXTURE_2D, _textureID);
	}

	inline void Bind(unsigned char slot) const
	{
		glActiveTexture(GL_TEXTURE0 + slot);
		glBindTexture(GL_TEXTURE_2D, _textureID);
	}

	const GLuint GetHandle() const { return _textureID; }
	const GLsizei GetWidth() const { return _width; }
	const GLsizei GetHeight() const { return _height; }
	const glm::ivec2 GetSize() const { return glm::ivec2(_width, _height); }

  private:
	GLuint _textureID;
	GLsizei _width;
	GLsizei _height;
	GLenum _internalFormat;
	GLenum _format;
	GLenum _type;
};

} // namespace Donut::GL
