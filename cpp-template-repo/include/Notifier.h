#ifndef NOTIFIER_H
#define NOTIFIER_H

#include <string>

class Notifier {

    private:
        int threshold;
        bool notified;
        
    public:
        Notifier(int thresh);  // Constructor
        void checkAndNotify(int result);
        bool wasNotified() const;
};

#endif // NOTIFIER_H 