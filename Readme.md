# Ballistic Trajectory Simulator in C

A real-time 2D ballistic trajectory simulator written in **C**, utilizing **Raylib** for graphical visualization and standard kinematic equations for physics calculations. Developed and tested on **CachyOS / Arch Linux** using **CLion**.

## Features

- **Interactive Input:** Prompts the user for initial velocity ($v_0$) and launch angle ($\theta$).
- **Physics Engine:** Computes real-time motion using discrete time steps ($\Delta t$), horizontal/vertical velocity components, and constant gravitational acceleration ($g = 9.81 \text{ m/s}^2$).
- **Real-Time Visualization:** Renders the projectile's flight path dynamically at 60 FPS using [Raylib](https://www.raylib.com/).
- **Coordinate Transformation:** Accurately maps physical coordinates (meters) to screen coordinates (pixels).

---

## Prerequisites & Dependencies

Before building the project, ensure you have the following installed:
- A C compiler (GCC or Clang)
- **CMake** (version 3.15 or higher)
- **Raylib** library
- The standard C math library (`m`)

### Installing Dependencies on Arch Linux:
```bash
sudo pacman -S cmake raylib

### Installing Dependencies on Debian:
```bash
sudo apt update && sudo apt install libraylib-dev
