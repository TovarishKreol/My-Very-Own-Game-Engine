#ifndef CLICKABLE_H
#define CLICKABLE_H
#include "Observer.h"
#include <BasicGUIObject.h>
#include <list>
using namespace std;

class Clickable : public BasicGUIObject
{
    public:
        Clickable();
        virtual ~Clickable();
        bool clicked(int x, int y);
        void execute();
    protected:
    private:
        list<Observer> observers;
        list<BasicGUIObject> slaves;
};

#endif // CLICKABLE_H
