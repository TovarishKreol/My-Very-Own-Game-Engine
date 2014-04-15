#ifndef OBSERVER_H
#define OBSERVER_H


class Observer
{
    public:
        Observer();
        virtual ~Observer();
        virtual void notify();
    protected:
    private:
};

#endif // OBSERVER_H
