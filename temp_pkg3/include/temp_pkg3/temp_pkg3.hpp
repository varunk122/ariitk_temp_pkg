#pragma once 

#include <ros/ros.h>

namespace ariitk::ariitk_temp_pkg {
class TempPkg3 {
    private:
        /* data */
    public:
        TempPkg3(/* args */);
        ~TempPkg3();
        void run();
        void init(ros::NodeHandle& );
};
} // namespace ariitk::ariitk_temp_pkg