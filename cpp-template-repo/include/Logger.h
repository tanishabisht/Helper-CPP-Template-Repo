#ifndef LOGGER_H
#define LOGGER_H

#include <string>
#include <vector>

class Logger {

    private:
        std::vector<std::string> logs;

    public:
        Logger();
        void log(const std::string& message);
        std::vector<std::string> getLogs() const;
};

#endif // LOGGER_H 