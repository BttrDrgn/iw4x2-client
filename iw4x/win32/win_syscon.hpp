#ifndef IW4X_WIN32_WIN_SYSCON_H_
#define IW4X_WIN32_WIN_SYSCON_H_
#pragma once

namespace iw4x::win32
{
    auto sys_create_console() -> void;

    auto sys_show_console() -> void;
}

#endif // IW4X_WIN32_WIN_SYSCON_H_
