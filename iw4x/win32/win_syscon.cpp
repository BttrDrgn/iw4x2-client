#include <win32/win_syscon.hpp>

namespace iw4x::win32
{
    auto sys_create_console() -> void
    {
        call_function<void()>(0x475F00)();
    }

    auto sys_show_console() -> void
    {
        call_function<void()>(0x4A7B10)();
    }
}
