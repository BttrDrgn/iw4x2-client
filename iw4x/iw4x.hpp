#ifndef IW4X_IW4X_H_
#define IW4X_IW4X_H_
#pragma once

#include <windows.h>
#include <functional>

template <typename T>
constexpr auto call_function(std::uintptr_t callback) -> std::function<T>
{
    return std::function<T>(reinterpret_cast<T*>(callback));
}

inline auto fix_function(std::uintptr_t address, std::uintptr_t function) -> void
{
    *reinterpret_cast<std::uint8_t*>(address) = 0xE9;
    *reinterpret_cast<std::uint32_t*>(address + 1) = (function - address - 5);
}

template<typename T>
constexpr auto get_variable(std::uintptr_t address) -> T
{
    return *reinterpret_cast<T*>(address);
}

#endif // IW4X_IW4X_H_
