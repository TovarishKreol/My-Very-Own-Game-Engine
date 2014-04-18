#ifndef VISIBLE_H
#define VISIBLE_H
#include <SDL.h>
#include <SDL_image.h>
#include <GL/glew.h>
#include <BasicGUIObject.h>
#include <string>
#include "glm/glm.hpp"
using namespace std;
class Visible : public BasicGUIObject
{
    public:
        Visible();
        virtual ~Visible();
        void InitVisible(string path);
        GLuint* get_vao();
        void draw();
    protected:
    private:
        GLuint VAO;
        GLuint VBO[4];

};

#endif // VISIBLE_H
