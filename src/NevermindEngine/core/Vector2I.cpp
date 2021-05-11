/**
 * @file NevermindEngine/Vector2I.cpp
 * @author KonstantIMP <mihedovkos@gmail.com>
 * @date 2021
 */
#include <NevermindEngine/core/Vector2I.hpp>

using ne::Vector2I;

Vector2I::Vector2I() : i{0}, j{0} {}

Vector2I::Vector2I(const float & i_value, const float & j_value) : i{i_value}, j{j_value} {};

Vector2I & Vector2I::operator=(const Vector2I & source) {
    this->i = source.i; this->j = source.j;
    return *this;
}

Vector2I Vector2I::operator+(const Vector2I & sub) const {
    Vector2I result = *this;
    result.i += sub.i;
    result.j += sub.j;
    return result;
}

Vector2I Vector2I::operator-(const Vector2I & sub) const {
    Vector2I result = *this;
    result.i -= sub.i;
    result.j -= sub.j;
    return result;
}

Vector2I Vector2I::operator*(const float & factor) const {
    Vector2I result = *this;
    result.i *= factor;
    result.j *= factor;
    return result;
}

Vector2I Vector2I::operator/(const float & div) const {
    Vector2I result = *this;
    result.i /= div;
    result.j /= div;
    return result;
}

Vector2I Vector2I::operator+=(const Vector2I & sub) {
    return (*this = *this + sub);
}

Vector2I Vector2I::operator-=(const Vector2I & sub) {
    return (*this = *this - sub);
}

Vector2I Vector2I::operator*=(const float & factor) {
    return (*this = *this * factor);
}

Vector2I Vector2I::operator/=(const float & div) {
    return (*this = *this / div);
}

bool Vector2I::operator==(const Vector2I & source) const {
    return (this->i == source.i) && (this->j == source.j);
}
