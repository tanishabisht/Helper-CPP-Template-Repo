#ifndef LOGGER_H
#define LOGGER_H

#include <string>
#include <vector>

class Logger {
public:
    void log(const std::string& message);
    std::vector<std::string> getLogs() const;
};

#endif // LOGGER_H 