#ifndef LOGGER_HPP_
#define LOGGER_HPP_

#include <string>

namespace TankEngine
{
    class Logger
    {
        public:
            Logger() = delete;
            ~Logger() = delete;
        public:
            static void info(const std::string& message); 
            static void warn(const std::string& message); 
            static void error(const std::string& message); 
            static void fatal(const std::string& message); 
    };
}

#endif /* LOGGER_HPP_ */    

