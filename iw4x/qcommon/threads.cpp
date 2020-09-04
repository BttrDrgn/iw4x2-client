#include <qcommon/threads.hpp>

namespace iw4x::qcommon
{
    auto sys_init_main_thread() -> void
    {
        call_function<void()>(0x4301B0)();
    }

    auto sys_sleep(int msec) -> void
    {
        call_function<void(int)>(0x4169C0)(msec);
    }
}
