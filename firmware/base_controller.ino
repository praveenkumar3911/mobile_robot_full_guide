#include <ros.h>
#include "mobile_robot_base_config.h"
#include "base_controller.h"
#include "adafruit_feather_wing/adafruit_feather_wing.h"

ros::NodeHandle nh;

using namespace mobile_robot;

AdafruitMotorController motor_controller_right = AdafruitMotorController(MOTOR_RIGHT);
AdafruitMotorController motor_controller_left = AdafruitMotorController(MOTOR_LEFT);

BaseController<AdafruitMotorController, Adafruit_MotorShield> base_controller(nh, &motor_controller_left, &motor_controller_right);

void setup()
{
      base_controller.setup();
    base_controller.init();

    nh.loginfo("Initialize mobile_robot Motor Controllers");
    motor_controller_left.begin();
    motor_controller_right.begin();
    nh.loginfo("Setup finished");
}

void loop()
{
      static bool imu_is_initialized;

    base_controller.update();

    if (base_controller.connected() && !imu_is_initialized)
{
        imu_is_initialized = base_controller.initIMU();
}

    if (!base_controller.connected())
{
        imu_is_initialized = false;
}

    nh.spinOnce();
}
