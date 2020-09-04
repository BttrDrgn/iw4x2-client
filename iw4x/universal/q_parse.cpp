#include <universal/q_parse.hpp>

namespace iw4x::universal
{
    auto com_init_parse() -> void
    {
        call_function<void()>(0x4FF220)();
    }
}
