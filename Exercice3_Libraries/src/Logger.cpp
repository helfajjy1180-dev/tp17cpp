#include "Logger.h"
#include <iostream>

Logger::Logger() {}

Logger& Logger::getInstance() {
    static Logger instance;
    return instance;
}

void Logger::log(const std::string& message) {
    std::cout << "[LOG] " << message << std::endl;
}
