# FeedbackSystem.h

#ifndef FEEDBACK_SYSTEM_H
#define FEEDBACK_SYSTEM_H

#include <iostream>
#include <string>

class FeedbackSystem {
public:
    // Method for audio feedback
    void playAudioFeedback(const std::string& soundFile);

    // Method for haptic feedback
    void triggerHapticFeedback(int intensity);
};

#endif // FEEDBACK_SYSTEM_H
