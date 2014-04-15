#ifndef RENDERER_H
#define RENDERER_H
#include <SDL.h>
#include <SDL_image.h>
#include <GL/glew.h>
#include <string>
#include <vector>
#include <fstream>
#include <iostream>
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
        GLuint LoadShaders(const char * vertex_file_path,const char * fragment_file_path);
    protected:
    private:
        bool running;
        SDL_Window* window;
        SDL_GLContext maincontext;
};

#endif // RENDERER_H
