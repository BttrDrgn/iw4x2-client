#include <qcommon/cmd.hpp>
#include <qcommon/common.hpp>
#include <qcommon/threads.hpp>

#include <universal/dvar.hpp>
#include <universal/q_parse.hpp>
#include <universal/q_shared.hpp>
#include <universal/timing.hpp>

#include <win32/win_common.hpp>
#include <win32/win_localize.hpp>
#include <win32/win_main.hpp>
#include <win32/win_shared.hpp>
#include <win32/win_syscon.hpp>

using namespace iw4x::qcommon;
using namespace iw4x::universal;
using namespace iw4x::win32;

namespace iw4x::win32
{
    namespace win_main
    {
        static HWND dword_64A3AD0 = get_variable<HWND>(0x64A3AD0);
        static int  dword_64A3ADC = get_variable<int>(0x64A3ADC);
        static char sys_cmdline[1024]{};
    }

    auto sys_get_semaphore_filename() -> int
    {
        return call_function<int()>(0x64D200)();
    }

    auto sys_check_crash_or_rerun() -> int
    {
        return call_function<int()>(0x411350)();
    }

    auto sys_find_info() -> void
    {
        call_function<void()>(0x64CF10)();
    }

    auto win_register_class() -> void
    {
        return call_function<void()>(0x64D270)();
    }

    auto print_working_dir() -> void
    {
        call_function<void()>(0x64D300)();
    }

    auto sub_4C8E30() -> int
    {
        return call_function<int()>(0x4C8E30)();
    }

    auto sub_40BC60(char a1) -> int
    {
        return call_function<int(char)>(0x40BC60)(a1);
    }

    auto sub_43EBB0() -> void
    {
        call_function<void()>(0x43EBB0)();
    }

    auto sub_4B7230() -> int
    {
        return call_function<int()>(0x4B7230)();
    }

    auto sub_4169C0() -> void
    {
        call_function<void(int)>(0x4169C0)(5u);
    }

    auto main() -> void
    {
        MessageBoxA(nullptr, "Thee shouldst attacheth thy debugg'r", "a v'ry wise counsel", MB_OK);

        sys_initialize_critical_sections();
        sys_init_main_thread();

        if (!win_init_localization())
        {
            MessageBoxA(nullptr, "Could not load \"localization.txt\"\n\nPlease make sure Modern Warfare 2 is run from the correct folder.", "Modern Warfare 2 - Fatal Error", MB_ICONERROR);
            win_shutdown_localization();
        }

        com_init_parse();
        dvar_init();
        init_timing();
        sys_find_info();
        sub_4C8E30();
        sub_40BC60(0);
        sys_create_console();
        sys_show_console();
        win_register_class();
        sys_milliseconds();
        com_init(win_main::sys_cmdline);
        cbuf_add_text(0, "readStats\n");
        print_working_dir();
        SetErrorMode(SEM_FAILCRITICALERRORS);
        SetFocus(win_main::dword_64A3AD0);

        while (true)
        {
            if (win_main::dword_64A3ADC)
                sub_4169C0();

            sub_43EBB0();
            sub_4B7230();
        }
    }
}
