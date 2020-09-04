#include <qcommon/common.hpp>

namespace iw4x::qcommon
{
    auto com_init(char* commandLine) -> void
    {
        call_function<void(char*)>(0x4D9640)(commandLine);
    }
}
