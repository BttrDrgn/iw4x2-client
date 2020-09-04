#ifndef IW4X_QCOMMON_THREADS_H_
#define IW4X_QCOMMON_THREADS_H_
#pragma once

namespace iw4x::qcommon
{
    auto sys_init_main_thread() -> void;

    auto sys_sleep(int msec) -> void;
}

#endif // IW4X_QCOMMON_THREADS_H_
