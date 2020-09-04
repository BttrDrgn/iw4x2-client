#include <qcommon/cmd.hpp>

namespace iw4x::qcommon
{
    auto cbuf_add_text(int localClientNum, const char* text) -> void
    {
        call_function<void(int, const char*)>(0x404B20)(localClientNum, text);
    }
}
