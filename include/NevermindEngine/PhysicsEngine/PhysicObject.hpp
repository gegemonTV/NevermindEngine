/**
 * @file NevermindEngine/DrawEngine/Object.hpp
 * @author KonstantIMP <mihedovkos@gmail.com>
 * @date 2021
 */
#pragma once

// Include Vector2I
#include "../core/Vector2I.hpp"

namespace ne {

class PhysicObject {
public :
    /**
     * @brief Default constructor (Init object's params)
     * @param[in] obj_size Size for the object (in px)
     * @param[in] obj_coordinates Coordinates for the object ((0, 0) as default) 
     */
    PhysicObject (const Vector2I & obj_size, const Vector2I & obj_coordinates = Vector2I(0, 0));

    /**
     * @brief Getter for object's speed
     * @return Object's speed
     */
    Vector2I getSpeed () const { return speed; };

    /**
     * @brief Setter for object's speed
     * @param[in] source New object's speed
     */
    void setSpeed (const Vector2I & source) { speed = source; }; 

    /**
     * @brief Getter for object's size
     * @return Object's size
     */
    Vector2I getSize () const { return size; };

    /**
     * @brief Setter for object's size
     * @param[in] source New object's size
     */
    void setSize (const Vector2I & source) { size = source; };

    /**
     * @brief Getter for object's coordinates
     * @return Object's coordinates
     */
    Vector2I getCoordinates () const { return coordinates; };

    /**
     * @brief Setter for object's coordinates
     * @param[in] source New object's coordinates
     */
    void setCoordinates (const Vector2I & source) { coordinates = source; };

private :
    /// @brief Object's acceleration (Just for physics engine)
    Vector2I acceleration;
    /// @brief Object's coordinates (left bottom edge)
    Vector2I coordinates;
    /// @brief Object's speed
    Vector2I speed;
    /// @brief Object's size
    Vector2I size;
};

}
