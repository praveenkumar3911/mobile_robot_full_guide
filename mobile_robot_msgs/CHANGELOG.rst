^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Changelog for package mobile_robot_msgs
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

1.1.0 (2022-03-28)
------------------

1.0.0 (2021-08-13)
------------------
* add AngularVelocitiesStamped.msg
* add and refactor mobile_robot_msgs
  - Rename WheelCmd.msg to WheelsCmd.msg and removed Header
  - Add WheelsCmdStamped.msg
  - PID.msg and PIDStamped.msg
  - Refactor Encoders.msg (removing Header)  and add EncodersStamped.msg
* add WheelCmd.msg for angular wheel joint velocities
* feature: update mobile_robot_hw_interface
  - add angular wheel joint velocity publisher
  - add new WheelCmd.msg in mobile_robot_msgs
  - load new hardware related parameters from
  mobile_robot_base/config/base.yaml
  - get hardware related parameters from parameter server
  in mobile_robot_hw_interface
  - add gain trim parameters to dynamic reconfigure cfg
* refactor mobile_robot_msgs
  - rename Encoder.msg  to Encoders.msg
  - update mobile_robot_pase includes and method signatures
  - update arduino script
  - change mobile_robot_msgs license to BSDv3
* Contributors: Franz Pucher

0.0.2 (2021-04-30)
------------------

0.0.1 (2020-12-22)
------------------
* Initial release
* Create mobile_robot_msgs package
* Add encoder message
* Update documentation
* Contributors: Franz Pucher