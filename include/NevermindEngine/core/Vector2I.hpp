/**
 * @file NevermindEngine/Vector2I.hpp
 * @author KonstantIMP <mihedovkos@gmail.com>
 * @date 2021
 */
#pragma once

/** 
 * @brief Descripe vector with 2 coordinates
 */
class Vector2I {
public :
    /**
     * @brief Default constructor
     * @details Set j and i as 0
     */
    Vector2I();
    /**
     * @brief Default constructor with initial i and j setup
     * @param[in] i_value Value for i
     * @param[in] j_value Value for j
     */
    Vector2I(const float & i_value, const float & j_value);

    /**
     * @brief Assignment overloading (Without copying)
     * @param[in] source Source for assignment
     * @return Current vector
     */
    Vector2I & operator=(const Vector2I & source);

    /**
     * @brief + operator overloading for vectors
     * @param[in] sub Vector for sum calculating
     * @return Sum vector
     */
    const Vector2I operator+(const Vector2I & sub);

    /**
     * @brief - operator overloading for vectors
     * @param[in] sub Vector for difference calculating
     * @return Difference vector
     */
    const Vector2I operator-(const Vector2I & sub);

    /**
     * @brief * operator overloading for vectors
     * @param[in] factor Number for product calculating
     * @return Product vector
     */
    const Vector2I operator*(const float & factor);

    /**
     * @brief / operator overloading for vectors
     * @param[in] div Number for division calculating
     * @return division vector
     */
    const Vector2I operator/(const float & div);

    /**
     * @brief += operator overloading for vectors
     * @param[in] sub Vector for sum calculating
     * @return Sum vector
     */
    const Vector2I operator+=(const Vector2I & sub);

    /**
     * @brief -= operator overloading for vectors
     * @param[in] sub Vector for difference calculating
     * @return Difference vector
     */
    const Vector2I operator-=(const Vector2I & sub);

    /**
     * @brief *= operator overloading for vectors
     * @param[in] factor Number for product calculating
     * @return Product vector
     */
    const Vector2I operator*=(const float & factor);

    /**
     * @brief /= operator overloading for vectors
     * @param[in] div Number for division calculating
     * @return division vector
     */
    const Vector2I operator/=(const float & div);

    /**
     * @brief == operator overloading for vectors
     * @param[in] source МVector for comparison
     * @return comparison куыгде
     */
    const bool operator==(const Vector2I & source);

    /// @brief Contain i vector's part
    float i;
    /// @brief Contain j vector's part
    float j;
};
