# Mobile Robot Implementation Guide (Physical Build)

Welcome to the complete guide for building the physical version of the mobile robot! This repository provides all the essential hardware connections, wiring diagrams, and setup instructions to bring your robot to life.

## Hardware Architecture
![Robot Architecture](https://ros-mobile-robots.com/fritzing/remo_architecture.svg)

---

## Key Components
- Microcontroller: [Teensy 4.0](https://www.pjrc.com/store/teensy40.html) (Handles wheels and sensors).
- - Single Board Computer (SBC): [Raspberry Pi 4 B](https://www.raspberrypi.com/products/raspberry-pi-4-model-b/) (Runs ROS 1/2).
  - - Sensors: Slamtec RPLIDAR A1/A2 and Encoders.
    - - Actuators: 4x DC Gear Motors with Encoders.
     
      - ---

      ## Wiring & Connections (Teensy 4.0)
      | Component | Teensy 4.0 Pin(s) | Connection Type |
      | :--- | :--- | :--- |
      | **Left Encoder** | 5, 6 | Digital Interrupt |
      | **Right Encoder** | 7, 8 | Digital Interrupt |
      | **Motor Driver (I2C)** | 18 (SDA), 19 (SCL) | I2C Bus |
      | **Status LED** | 13 | Built-in LED |
      | **Raspberry Pi Link** | Micro-USB Port | Serial Connection |

      ---

      ## Quick Start for Beginners
      1. **Clone this guide:**
      2.    `git clone https://github.com/praveenkumar3911/mobile_robot_full_guide.git`
      3.2. **Follow the Connections:** Use the table above to wire your Teensy 4.0 to the motors and sensors.
        3. **Software Setup:** For detailed ROS setup, visit [ros-mobile-robots.com](https://ros-mobile-robots.com).
     
        4. ---
        5. *Created with care for the ROS community.*
        6. 
