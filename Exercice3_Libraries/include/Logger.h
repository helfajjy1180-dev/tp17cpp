#ifndef LOGGER_H
#define LOGGER_H

#include <string>

class Logger {
private:
    Logger();
    Logger(const Logger&) = delete;
    Logger& operator=(const Logger&) = delete;

public:
    static Logger& getInstance();
    void log(const std::string& message);
};

#endif
