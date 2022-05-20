#include "Feedback.h"
#include <cstring>
#include <iostream>

Feedback::Feedback()
{
    strcpy(feedbackID, "");
    strcpy(comment, "");
}


Feedback::Feedback(const char id[10], const char pcomment[256])
{
    strcpy(feedbackID, id);
    strcpy(comment, pcomment);
}


void Feedback::leaveFeedback(const char id[10], const char pcomment[256], Order *o, RegisteredUser *user)
{

}


void Feedback::displayFeedback()
{
  
}

Feedback::~Feedback()
{
    std::cout << "Destructor runs" << std::endl;
}