namespace iw4x::win32
{
    namespace win_common
    {
        enum CriticalSection
        {
            CRITSECT_CONSOLE = 0x0,
            CRITSECT_DEBUG_SOCKET = 0x1,
            CRITSECT_COM_ERROR = 0x2,
            CRITSECT_STATMON = 0x3,
            CRITSECT_DEBUG_LINE = 0x4,
            CRITSECT_ALLOC_MARK = 0x5,
            CRITSECT_GENERATE_MARK = 0x6,
            CRITSECT_STREAMED_SOUND = 0x7,
            CRITSECT_FAKELAG = 0x8,
            CRITSECT_CLIENT_MESSAGE = 0x9,
            CRITSECT_CLIENT_CMD = 0xA,
            CRITSECT_DOBJ_ALLOC = 0xB,
            CRITSECT_START_SERVER = 0xC,
            CRITSECT_XANIM_ALLOC = 0xD,
            CRITSECT_KEY_BINDINGS = 0xE,
            CRITSECT_FX_VIS = 0xF,
            CRITSECT_SERVER_MESSAGE = 0x10,
            CRITSECT_SCRIPT_STRING = 0x11,
            CRITSECT_ASSERT = 0x12,
            CRITSECT_RD_BUFFER = 0x13,
            CRITSECT_SYS_EVENT_QUEUE = 0x14,
            CRITSECT_GPU_FENCE = 0x15,
            CRITSECT_FATAL_ERROR = 0x16,
            CRITSECT_SCRIPT_DEBUGGER_ALLOC = 0x17,
            CRITSECT_MISSING_ASSET = 0x18,
            CRITSECT_PHYSICS = 0x19,
            CRITSECT_LIVE = 0x1A,
            CRITSECT_AUDIO_PHYSICS = 0x1B,
            CRITSECT_LSP = 0x1C,
            CRITSECT_CINEMATIC_UPDATE = 0x1D,
            CRITSECT_CINEMATIC_TARGET_CHANGE_COMMAND = 0x1E,
            CRITSECT_CINEMATIC_TARGET_CHANGE_BACKEND = 0x1F,
            CRITSECT_CINEMATIC_STATUS = 0x20,
            CRITSECT_CINEMATIC_SERVER = 0x21,
            CRITSECT_FX_ALLOC = 0x22,
            CRITSECT_NETTHREAD_OVERRIDE = 0x23,
            CRITSECT_DBGSOCKETS_FRAME = 0x24,
            CRITSECT_DBGSOCKETS_HOST_LOGBUFFER = 0x25,
            CRITSECT_CBUF = 0x26,
            CRITSECT_STATS_WRITE = 0x27,
            CRITSECT_CG_GLASS = 0x28,
            CRITSECT_SERVER_DEMO_COMPRESS = 0x29,
            CRITSECT_COM_SET_ERROR_MSG = 0x2A,
            CRITSECT_SOUND_UPDATE = 0x2B,
            CRITSECT_RESET_MODEL_LIGHTING = 0x2C,
            CRITSECT_COUNT = 0x2D
        };

        _RTL_CRITICAL_SECTION s_criticalSection[CRITSECT_COUNT];
    }

    using namespace win_common;

    // 0x0042F0A0
    inline auto sys_initialize_critical_sections() -> void
    {
        for (int i = 0; i != CRITSECT_COUNT; i++)
        {
            InitializeCriticalSection(&s_criticalSection[i]);
        }
    }
}
