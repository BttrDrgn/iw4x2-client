#include <universal/timing.hpp>

namespace iw4x::universal
{
    auto init_timing() -> void
    {
        call_function<void()>(0x47ADF0)();
    }
}
