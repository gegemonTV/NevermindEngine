/**
 * @file NevermindEngine/DrawEngine/Object.hpp
 * @author KonstantIMP <mihedovkos@gmail.com>
 * @date 2021
 */
#pragma once

// Include Vector2I
#include "../core/Vector2I.hpp"

class Object {

private :
    /// @brief Object's acceleration
    Vector2I acceleration;
    /// @brief Object's coordinates (left bottom edge)
    Vector2I coordinates;
    /// @brief Object's speed
    Vector2I speed;
    /// @brief Object's size
    Vector2I size;
};

