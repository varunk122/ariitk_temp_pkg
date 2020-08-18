#pragma once 

#include <ros/ros.h>

namespace ariitk::ariitk_temp_pkg {
class TempPkg2 {
    private:
        /* data */
    public:
        TempPkg2(/* args */);
        ~TempPkg2();
        void run();
        void init(ros::NodeHandle& );
};
} // namespace ariitk::ariitk_temp_pkg