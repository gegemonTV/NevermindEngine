/**
 * @file NevermindEngine/Vector2I.hpp
 * @author KonstantIMP <mihedovkos@gmail.com>
 * @date 2021
 */
#pragma once

// Include standart data types
#include <cstdint>

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
    Vector2I(const std::int64_t & i_value, const std::int64_t & j_value);

private :
    /// @brief Contain i vector's part
    std::int64_t i;
    /// @brief Contain j vector's part
    std::int64_t j;
};
