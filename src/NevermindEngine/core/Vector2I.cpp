/**
 * @file NevermindEngine/Vector2I.cpp
 * @author KonstantIMP <mihedovkos@gmail.com>
 * @date 2021
 */
#include <NevermindEngine/core/Vector2I.hpp>

Vector2I::Vector2I() : i{0}, j{0} {}

Vector2I::Vector2I(const float & i_value, const float & j_value) : i{i_value}, j{j_value} {};

Vector2I & Vector2I::operator=(const Vector2I & source) {
    this->i = source.i; this->j = source.j;
    return *this;
}

const Vector2I Vector2I::operator+(const Vector2I & sub) {
    Vector2I result = *this;
    result.i += sub.i;
    result.j += sub.j;
    return result;
}

const Vector2I Vector2I::operator-(const Vector2I & sub) {
    Vector2I result = *this;
    result.i -= sub.i;
    result.j -= sub.j;
    return result;
}

const Vector2I Vector2I::operator*(const float & factor) {
    Vector2I result = *this;
    result.i *= factor;
    result.j *= factor;
    return result;
}

const Vector2I Vector2I::operator/(const float & div) {
    Vector2I result = *this;
    result.i /= div;
    result.j /= div;
    return result;
}

const Vector2I Vector2I::operator+=(const Vector2I & sub) {
    return (*this = *this + sub);
}

const Vector2I Vector2I::operator-=(const Vector2I & sub) {
    return (*this = *this - sub);
}

const Vector2I Vector2I::operator*=(const float & factor) {
    return (*this = *this * factor);
}

const Vector2I Vector2I::operator/=(const float & div) {
    return (*this = *this / div);
}

const bool Vector2I::operator==(const Vector2I & source) {
    return (this->i == source.i) && (this->j == source.j);
}
