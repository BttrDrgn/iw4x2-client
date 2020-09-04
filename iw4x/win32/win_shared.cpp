#include <win32/win_shared.hpp>

namespace iw4x::win32
{
    auto sys_milliseconds() -> unsigned long
    {
        return call_function<unsigned long()>(0x42A660)();
    }
}
