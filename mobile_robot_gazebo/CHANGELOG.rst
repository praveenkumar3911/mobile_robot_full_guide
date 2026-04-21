^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Changelog for package mobile_robot_gazebo
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

1.1.0 (2022-03-28)
------------------
* Update mobile_robot_gazebo/mobile_robot_view.launch
  Use db_world as default instead of corridor world
* Contributors: Franz Pucher

1.0.0 (2021-08-13)
------------------
* use db_world as default world for mobile_robot_gazebo/launch/mobile_robot.launch
* update rviz and gazebo view ports
* add mobile_robot_world and export model
* remove non-working empty.world and add working mobile_robot_empty.world
* add model arg to launch files for remo
* Contributors: Franz Pucher

0.0.2 (2021-04-30)
------------------

0.0.1 (2020-12-22)
------------------
* add x y z starting position args to mobile_robot_gazebo/launch/mobile_robot_view.launch
* update mobile_robot control and gazebo launch files: prepare for slam packages
* Create README.md
* add world_name arg and use corridor.word by default
* update world files
* add turtlebot3_world.world and use it by default
* rename world folder and add turtlebot worlds
* add new mobile_robot_description
* Update version, mail and license
* move packages from ros/src to repository toplevel folder
* Contributors: Franz Pucher
