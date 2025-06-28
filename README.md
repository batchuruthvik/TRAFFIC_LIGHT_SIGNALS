#  Traffic Light Control System using 8051 Microcontroller

This project simulates a basic Traffic Light Control System using the 8051 microcontroller (AT89C51). The program is written in embedded C and simulates sequential control of four-directional traffic lights.

##  Project Description

The system manages traffic lights at a 4-way intersection. Each direction has a Red, Yellow, and Green light. The lights transition from one direction to another in a cycle with appropriate delays for red, yellow, and green phases.

# Features

- Controls four sets of traffic signals using GPIO ports.
- Each direction is given a green signal in turn with yellow transition delay.
- Sufficient delay is implemented between signal changes.
- Written in embedded C and compiled using Keil µVision.

---

# File Structure

| File Name            | Description                                  |
|---------------------|----------------------------------------------|
| `Traffic Light.c`    | Source code written in Embedded C for 8051. |
| `Traffic Lights.hex` | Compiled HEX file for simulation in Proteus. |

---

# Pin Configuration

Port 2 and Port 3 of AT89C51 are used to control the signals:

| Signal Group | Port Pins Used |
|--------------|----------------|
| R1, Y1, G1   | P2.0, P2.1, P2.2 |
| R2, Y2, G2   | P2.3, P2.4, P2.5 |
| R3, Y3, G3   | P3.3, P3.4, P3.5 |
| R4, Y4, G4   | P3.0, P3.1, P3.2 |

---

# Simulation

You can simulate this project using Proteus:

1. Create a new project in Proteus.
2. Add an AT89C51 microcontroller.
3. Connect 12 LEDs to the corresponding port pins as per the configuration above.
4. Load `Traffic Lights.hex` into the microcontroller.
5. Run the simulation to observe traffic light transitions.

---

# Tools Used

- Keil µVision – for code writing and HEX generation.
- Proteus– for circuit simulation.
- 8051 Microcontroller (AT89C51) – target hardware.

---

# Screenshots

> Add screenshots of your Proteus simulation circuit and running output here (optional).

---

# License

This project is open-source and free to use for educational purposes.

---

## ✍️ Author

DIY Inventor – Krishna Agarwal

---

