#pragma once 

#include <ros/ros.h>

namespace ariitk::ariitk_temp_pkg {
class TempPkg1 {
    private:
        /* data */
    public:
        TempPkg1(/* args */);
        ~TempPkg1();
        void run();
        void init(ros::NodeHandle& );
};
} // namespace ariitk::ariitk_temp_pkg