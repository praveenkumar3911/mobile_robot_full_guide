^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Changelog for package mobile_robot_description
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

1.1.0 (2022-03-28)
------------------
* fix deprecated warning using load_yaml (`#53 <https://github.com/ros-mobile-robots/mobile_robot/issues/53>`_)
  Using xacro.load_yaml instead of just load_yaml
* Contributors: Franz Pucher

1.0.0 (2021-08-13)
------------------
* make use of non-gpu laser by default update min/max range to fix ghost objects (`#27 <https://github.com/ros-mobile-robots/mobile_robot/issues/27>`_)
* update mobile_robot_description: add gpu arg for laser xacro macro (`#27 <https://github.com/ros-mobile-robots/mobile_robot/issues/27>`_)
* fix mobile_robot_description laser link name
* update camera sensor parameters
* fix scale if statement in motor xacro macro
* update motor.yaml comment
* refactor mobile_robot_description
  - move stl files
  - use separate robot.gazebo.xacro
  - add addon xacro macro for addon components
  - simplify wheel and motor macros: remove top level name from yaml files
  - move caster macro to its own xacro file
  - add camera sensor macro
  - add imu sensor macro
  - refactor gpu laser macro
  - update license to BSDv3
* Contributors: Franz Pucher

0.0.2 (2021-04-30)
------------------

0.0.1 (2020-12-22)
------------------
* Update README.md
* add z_offset to mobile_robot base_footprint description for moving on the ground in rviz
* add colors for gazebo
* update description configs: caster dz and increase mass to avoid slip
* include gpu_laser - rplidar a2 for mobile_robot
* change z offset in blender for rplidar stl
* add rplidar a2 mesh
* remove deprecated mobile_robot_description
* Update version, mail and license
* move packages from ros/src to repository toplevel folder
* Contributors: Franz Pucher
