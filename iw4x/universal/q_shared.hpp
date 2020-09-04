#ifndef IW4X_UNIVERSAL_Q_SHARED_H_
#define IW4X_UNIVERSAL_Q_SHARED_H_
#pragma once

namespace iw4x::universal
{
    auto i_strnicmp(const char* s0, const char* s1, int n) -> int;

    auto i_strncpyz(char* dest, const char* src, int destsize) -> void;
}

#endif // IW4X_UNIVERSAL_Q_SHARED_H_
