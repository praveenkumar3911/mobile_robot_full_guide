^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Changelog for package mobile_robot_navigation
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

1.1.0 (2022-03-28)
------------------
* Fix minor error in amcl.launch
  The "kld_err" was initialized twice, and with the wrong value. Corrected to initialize the "kld_error" parameter to 0.01 and "kld_z" to 0.99.
* Contributors: Rodrigo Silverio

1.0.0 (2021-08-13)
------------------
* improve amcl.launch parameters: use diff-corrected
* fix typo in comment of costmap_global_params.yaml
* update rviz and gazebo view ports
* fix local costmap: change sensor_frame to rplidar_laser_link
* updated mobile_robot_navigation rviz default settings
* use db_world as default for navigation
* add mobile_robot_world and export model
* Update package.xml
  add dwa and base local planner package dependencies
* update mobile_robot_navigation.rviz for remo
* add comments to costmap_local_params.yaml
* add comments to costmap_global_params.yaml
* update costmap_common_params.yaml for Remo
* add model arg to launch files for remo
* update default planner: use dwa local planner
* change license of mobile_robot_navigation package to BSDv3
* Contributors: Franz Pucher

0.0.2 (2021-04-30)
------------------
* Update mobile_robot.launch
* fix local costmap configuration issue
* Contributors: Franz Pucher

0.0.1 (2020-12-22)
------------------
* increase goal reached tolerance
* include mobile_robot/laserscan in rviz
* add navigation launch file for real robot
* add office map
* remove mobile_robot_control.launch
  Since the mobile_robot.launch at mobile_robot_gazebo already launch the controllers.
  It can me removed.
* Correct local planner name parameter.
* Update dwa_local_planner_params.yaml
* Update base_local_planner_params.yaml
* Update move_base.launch
* add missing mobile_robot_navigation.rviz
* add world_name arg to navigation mobile_robot.lauch
* add launch files, configs and map to mobile_robot_navigation
* add initial mobile_robot_navigation package
* Contributors: Franz Pucher, pxalcantara
