#include "Visible.h"

Visible::Visible()
{
    //ctor
}

Visible::~Visible()
{
    //dtor
}

void Visible::draw()
{
    //glBindVertexArray(VAO);
    glDrawArrays(GL_TRIANGLES, 0, 3);
}

GLuint* Visible::get_vao()
{

}

void Visible::InitVisible(string path)
{
    glGenVertexArrays(1, &VAO);
    glBindVertexArray(VAO);

    float vertices[] = {
        0.0f,  0.5f, // Vertex 1 (X, Y)
        0.5f, -0.5f, // Vertex 2 (X, Y)
        -0.5f, -0.5f  // Vertex 3 (X, Y)
    };
    glGenBuffers(4, VBO);
    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);



}
