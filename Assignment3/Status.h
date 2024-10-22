#ifndef ROBOTSTATUS
#define ROBOTSTATUS
#include <string>
class RobotStatus{
    public:
        RobotStatus(std::string status);
        std::string GetStatus();
        void SetStatus(std::string newStatus);
    private:
        std::string _status;
};
#endif