^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Changelog for package mobile_robot_slam
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

1.1.0 (2022-03-28)
------------------

1.0.0 (2021-08-13)
------------------
* Update package.xml
  add gmapping exec dependency
* Update gmapping_params.yaml
  improve map resolution (change delta from 0.05 to 0.01)
* remove new lines
* Contributors: Franz Pucher

0.0.2 (2021-04-30)
------------------

0.0.1 (2020-12-22)
------------------
* add cartographer config lua
* add explaining comment to gmapping launch
* add topic remap for mobile_robot laser scan
* comment mobile_robot_navigation in find_package cmake
* comment exec depends
* comment hector_slam exec depend
* remove unused build dependencies
* Fix mobile_robot_slam gmapping
  - comment packages that don't provide a noetic version
  - fix launch file problems
  - fix parameter arguments
  - add remapping for scan topic
* add mobile_robot_slam rviz configs for different algorithms
* add mobile_robot_slam configs for different algorithms
* add mobile_robot_slam launch files for different algorithms
* update license
* add initial empty mobile_robot_slam package
* Contributors: Franz Pucher
