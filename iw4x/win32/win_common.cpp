#include <win32/win_common.hpp>

namespace iw4x::win32
{
    namespace win_common
    {
        _RTL_CRITICAL_SECTION s_criticalSection[CRITSECT_COUNT];
    }

    using namespace win_common;

    void sys_enter_critical_section_stub()
    {
    }

    void sys_leave_critical_section_stub()
    {
    }

    // 0x0042F0A0
    auto sys_initialize_critical_sections() -> void
    {
        fix_function(0x4FC200, reinterpret_cast<unsigned long>(&sys_leave_critical_section_stub));
        fix_function(0x41B8C0, reinterpret_cast<unsigned long>(&sys_enter_critical_section_stub));

        for (auto& i : s_criticalSection)
        {
            InitializeCriticalSection(&i);
        }
    }
}
