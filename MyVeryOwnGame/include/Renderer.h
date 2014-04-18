#ifndef RENDERER_H
#define RENDERER_H
#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include "Visible.h"
using namespace std;

class Renderer
{
    public:
        Renderer();
        virtual ~Renderer();
        bool on_init();
        void on_event(SDL_Event* e);
        void on_render();
        void on_loop();
        void LoadShaders();
    protected:
    private:
        bool running;
        SDL_Window *window;
        SDL_GLContext maincontext;
        GLuint shader_program;
};

#endif // RENDERER_H
