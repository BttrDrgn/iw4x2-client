#include <universal/dvar.hpp>

namespace iw4x::universal
{
    auto dvar_init() -> void
    {
        call_function<void()>(0x4D8220)();
    }
}
