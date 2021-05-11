#ifndef DRAWABLE_H
#define DRAWABLE_H

#include <iostream>

namespace ne
{
    class Drawable
    {
    public:
        virtual bool onDraw() = 0;
    };
} // namespace ne


#endif