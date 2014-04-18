#ifndef BASICGUIOBJECT_H
#define BASICGUIOBJECT_H


class BasicGUIObject
{
    public:
        BasicGUIObject();
        virtual ~BasicGUIObject();
        int get_x() {return x;};
        int get_y() {return y;};
        int get_size_x() {return size_x;};
        int get_size_y() {return size_y;};
        int get_id() {return id;}
    protected:
    private:
        int x, y;
        int size_x, size_y;
        int id;

};

#endif // BASICGUIOBJECT_H
