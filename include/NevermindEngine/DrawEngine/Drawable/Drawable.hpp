/**
 * @file NevermindEngine/DrawEngine/Drawable/Drawable.hpp
 * @author KonstantIMP <mihedovkos@gmail.com>
 * @author gegemonTV <vovakonki776@gmail.com>
 * @date 2021
 */
#pragma once

/**
 * @brief Basic class for drawable objects
 */
class Drawable {
public :
    /**
     * @brief Method for actual object drawing
     * @return True if draw was succesfull
     */
    virtual bool onDraw() = 0;
    /**
     * @brief Default constructor (Clear object data)
     */
    virtual ~Drawable() = 0;
};

