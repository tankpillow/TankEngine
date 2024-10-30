#include <TankEngine/utils/Logger.hpp>

#include <cstdio>

namespace TankEngine
{
    void Logger::info(const std::string& message)
    {
        printf("\033[38;5;%dm[INFO] %s\n\003", 255, message.c_str());
    }

    void Logger::warn(const std::string& message)
    {
        printf("\033[38;5;%dm[WARN] %s\n\003", 220, message.c_str());
    }

    void Logger::error(const std::string& message)
    {
        printf("\033[38;5;%dm[ERROR] %s\n\003", 9, message.c_str());
    }

    void Logger::fatal(const std::string& message)
    {
        printf("\033[38;5;%dm[FATAL] %s\n\003", 124, message.c_str());
    }
}
