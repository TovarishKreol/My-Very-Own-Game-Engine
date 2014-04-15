#ifndef BUTTON_H
#define BUTTON_H
#include "Clickable.h"

class Button : public Clickable
{
    public:
        Button();
        virtual ~Button();
    protected:
    private:
        int pic_id;
};

#endif // BUTTON_H
