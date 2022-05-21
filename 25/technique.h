#pragma once
#include <GL/glew.h>
#include <list>

#define INVALID_UNIFORM_LOCATION 0xFFFFFFFF

class Technique
{
public:
    Technique();
    virtual ~Technique();
    virtual bool Init();
    void Enable();

protected:
    bool AddShader(GLenum ShaderType, const char* pShaderText);
    bool Finalize();
    GLint GetUniformLocation(const char* pUniformName);

private:
    GLuint m_shaderProg;
};
