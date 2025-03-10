#include "Logger.h"
#include <iostream>
#include <vector>

Logger::Logger() {}

void Logger::log(const std::string& message) {
    logs.push_back(message);
}

std::vector<std::string> Logger::getLogs() const {
    return logs;
} 