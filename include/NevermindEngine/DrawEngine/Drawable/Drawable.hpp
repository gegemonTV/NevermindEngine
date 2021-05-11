/**
 * @file NevermindEngine/DrawEngine/Drawable/Drawable.hpp
 */

#pragma once

namespace ne
{
    class Drawable
    {
    public:
        virtual bool onDraw() = 0;
    };
} // namespace ne

