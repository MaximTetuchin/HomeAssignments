/* Maxim Tetuchin tetuhin@inbox.ru | st128993@student.spbu.ru
Assignment 4
*/
#ifndef ROBOTSTATUS
#define ROBOTSTATUS
#include <string>
class RobotStatus
{
public:
    RobotStatus(std::string status);
    std::string getStatus();
    void setStatus(std::string newStatus);
private:
    std::string _status;
};
#endif