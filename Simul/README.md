# Installation Guide

## Cloning the Repository

To get started with the installation, follow these steps to clone the repository:

```bash
$ git clone https://github.com/faffonso/LBMPC-PathTracking.git
```

### Repository Setup

After cloning the repository, set up the repository with the following commands:

```bash
$ cd Simul/catkin_ws
$ rosdep install --from-paths src --ignore-src -r -y
$ catkin_make
```

### Using Gazebo

#### Open Default World

Launch the basic world in Gazebo using the following command:

```bash
$ roslaunch terrasentia_world basic_world.launch
```

To open a custom world, save the .world file in <terrasentia_world/worlds/> and use the following command:

```bash
$ roslaunch terrasentia_world custom_world.launch world:="path/to/your/world"
```

#### Launch Terrasentia Model

```bash
$ roslaunch terrasentia_description launch_default_ts3.launch
```

*Note:* The "sensor_gps_with_dropout" feature is currently broken.

### Adding Additional Models

Once Gazebo and the Terrasentia model are running, go to the "Insert" window in Gazebo, click on "Add Path," and open the folder <src/terrasentia_description/terrasentia_models/>. Afterward, you can include the following models with diferents sizes:

1. Corn Variants
2. Sorghum Variants
3. Tobacco Variants