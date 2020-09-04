#ifndef IW4X_WIN32_WIN_LOCALIZE_H_
#define IW4X_WIN32_WIN_LOCALIZE_H_
#pragma once

namespace iw4x::win32
{
    auto win_init_localization() -> char;

    auto win_shutdown_localization() -> void;
}

#endif // IW4X_WIN32_WIN_LOCALIZE_H_
