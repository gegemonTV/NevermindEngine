/**
 * @file NevermindEngine/Vector2I.cpp
 * @author KonstantIMP <mihedovkos@gmail.com>
 * @date 2021
 */
 #include <NevermindEngine/core/Vector2I.hpp>

 Vector2I::Vector2I() : i{0}, j{0} {}

 Vector2I::Vector2I(const std::int64_t & i_value, const std::int64_t & j_value) : i{i_value}, j{j_value} {};