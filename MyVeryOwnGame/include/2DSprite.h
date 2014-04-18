#ifndef SPRITE_H
#define SPRITE_H
#include <Visible.h>
#include <SDL_image.h>
#include <string>
using namespace std;
class Sprite : public Visible
{
    public:
        Sprite();
        virtual ~Sprite();
        void load_img(string path);
        void bind_sprite();
    protected:
    private:
        unsigned char* IMG;
};

#endif // SPRITE_H
