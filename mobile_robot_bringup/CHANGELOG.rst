^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Changelog for package mobile_robot_bringup
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

1.1.0 (2022-03-28)
------------------
* fix rplidar_laser_link name issue (`#40 <https://github.com/ros-mobile-robots/mobile_robot/issues/40>`_, `#53 <https://github.com/ros-mobile-robots/mobile_robot/issues/53>`_)
  - Rename rplidar_gpu_laser_link to rplidar_laser_link in bringup_with_laser.launch
  - Add rplidar.launch to mobile_robot_bringup to support framed_id argument
  - Make use of new mobile_robot_bringup/launch/rplidar.launch in bringup_with_laser.launch
  This solves issues in RViz:
  Transform [sender=unknown_publisher]
  For frame [rplidar_gpu_laser_link]: Frame [rplidar_gpu_laser_link] does not exist
  and in the terminal from whic mobile_robot_slam is launched:
  [ WARN] [1635345613.864692611]: MessageFilter [target=odom ]: Dropped 100.00% of messages so far. Please turn the [ros.gmapping.message_filter] rosconsole logger to DEBUG for more information.
* Contributors: Franz Pucher

1.0.0 (2021-08-13)
------------------
* Update bringup_with_laser.launch
  pass laser_frame_id argument to rplidar.launch
* rename rosserial node to rosserial_base_controller
* add remo_bringup.rviz
* add model arg to mobile_robot_bringup launch files
* flip camera image
* add teleop_twist_keyboard to exec dependencies
* use model parameter in mobile_robot_bringup/view_mobile_robot.launch
* add keyboard_teleop launch file
* add launch file and rviz config to view real robot
* add rpicamera launch file and camera info
* Contributors: Franz Pucher

0.0.2 (2021-04-30)
------------------
* doc: update comment about node launch order
* change node execution order in bringup launch file
* Contributors: Franz Pucher

0.0.1 (2020-12-22)
------------------
* add bringup launch file including laser
* Update version, mail and license
* move packages from ros/src to repository toplevel folder
* Contributors: Franz Pucher
