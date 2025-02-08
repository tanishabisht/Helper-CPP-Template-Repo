#include "Notifier.h"
#include <iostream>

Notifier::Notifier(int thresh) : threshold(thresh), notified(false) {}

void Notifier::checkAndNotify(int result, int threshold) {
    if (result > threshold) {
        notified = true;
        notify("Threshold exceeded");
    }
}

bool Notifier::wasNotified() const {
    return notified;
} 