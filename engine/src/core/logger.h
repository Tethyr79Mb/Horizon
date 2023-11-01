#pragma once

#include "defines.h"

/** @brief Indicates if warning level logging is enabled. */
#define LOG_WARN_ENABLED 1
/** @brief Indicates if info level logging is enabled. */
#define LOG_INFO_ENABLED 1
/** @brief Indicates if debug level logging is enabled. */
#define LOG_DEBUG_ENABLED 1
/** @brief Indicates if trace level logging is enabled. */
#define LOG_TRACE_ENABLED 1

// Disable debug and trace logging for release builds.
#if KRELEASE == 1
#define LOG_DEBUG_ENABLED 0
#define LOG_TRACE_ENABLED 0
#endif

/** @brief Represents levels of logging */
typedef enum log_level {
    /** @brief Fatal log level, should be used to stop the application when hit. */
    LOG_LEVEL_FATAL = 0,
    /** @brief Error log level, should be used to indicate critical runtime problems that cause the application to run improperly or not at all. */
    LOG_LEVEL_ERROR = 1,
    /** @brief Warning log level, should be used to indicate non-critial problems with the application that cause it to run suboptimally. */
    LOG_LEVEL_WARN = 2,
    /** @brief Info log level, should be used for non-erronuous informational purposes. */
    LOG_LEVEL_INFO = 3,
    /** @brief Debug log level, should be used for debugging purposes. */
    LOG_LEVEL_DEBUG = 4,
    /** @brief Trace log level, should be used for verbose debugging purposes. */
    LOG_LEVEL_TRACE = 5
} log_level;