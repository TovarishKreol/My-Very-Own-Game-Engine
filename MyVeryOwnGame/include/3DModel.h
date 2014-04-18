#ifndef MODEL_H
#define MODEL_H

#include <Visible.h>


class Model : public Visible
{
    public:
        Model();
        virtual ~Model();
        int get_z() {return z;};
    protected:
    private:
        int z;
};

#endif // MODEL_H
