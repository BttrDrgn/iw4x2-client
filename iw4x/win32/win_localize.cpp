#include <win32/win_localize.hpp>

namespace iw4x::win32
{
    auto win_init_localization() -> char
    {
        return call_function<char(int)>(0x406D10)(0);
    }

    auto win_shutdown_localization() -> void
    {
        call_function<void()>(0x40C6D0)();
        exit(1);
    }
}
