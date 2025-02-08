#include "Logger.h"
#include <iostream>
#include <vector>

std::vector<std::string> logs;

void Logger::log(const std::string& message) {
    logs.push_back(message);
    std::cout << "Log: " << message << std::endl;
}

std::vector<std::string> Logger::getLogs() const {
    return logs;
} 