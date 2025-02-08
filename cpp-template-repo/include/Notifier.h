#ifndef NOTIFIER_H
#define NOTIFIER_H

#include <string>

class Notifier {
public:
    Notifier(int thresh);  // Constructor
    void checkAndNotify(int result);
    bool wasNotified() const;

private:
    int threshold;
    bool notified;
};

#endif // NOTIFIER_H 