#pragma once
#include "RegisteredUser.h"
#include "Order.h"

class Feedback {
private:
    char feedbackID[10];
    char comment[256];

public:
    Feedback();
    Feedback(const char id[10], const char pcomment[256]);
    void leaveFeedback(const char id[10], const char pcomment[256], Order *o, RegisteredUser *user);
    void displayFeedback();
    ~Feedback();
};
