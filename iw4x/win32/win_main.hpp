#ifndef IW4X_WIN32_WIN_MAIN_H_
#define IW4X_WIN32_WIN_MAIN_H_
#pragma once

namespace iw4x::win32
{
    auto sys_get_semaphore_filename() -> int;

    auto sys_check_crash_or_rerun() -> int;

    auto sys_find_info() -> void;

    auto win_register_class() -> void;

    auto print_working_dir() -> void;

    auto sub_4C8E30() -> int;

    auto sub_40BC60(char a1) -> int;

    auto sub_43EBB0() -> void;

    auto sub_4B7230() -> int;

    auto sub_4169C0() -> void;

    auto main() -> void;
}

#endif // IW4X_WIN32_WIN_MAIN_H_
