    #ifndef ROBOTSTATUS
    #define ROBOTSTATUS
    #include <string>
    class RobotStatus{
        public:
            RobotStatus(std::string status);
            std::string getStatus();
            void setStatus(std::string newStatus);
        private:
            std::string _status;
    };
    #endif