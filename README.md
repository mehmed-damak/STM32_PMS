# STM32_PMS
Power Management system using the STM32F051R8T6 


![Uploading Screenshot 2024-12-05 150905.png…]()

Overview
This project implements a Power Management System (PMS) using the STM32F0 Discovery board. It offers precise and adjustable voltage control, making it ideal for embedded applications and power distribution in complex energy environments.

Features
Adjustable Output Voltage: Provides 0-20V DC output controlled by operational amplifiers.
Real-Time Monitoring: Displays voltage, current, and power consumption on an LCD.
Dynamic User Control: Three buttons allow users to adjust voltage and switch outputs.
Integration: Utilizes INA219 sensors, LCD, and STM32 DAC/ADC for seamless functionality.

Components
STM32 Microcontroller: Controls the system and handles user input/output.
Operational Amplifier (TDA2030): Amplifies and adjusts output voltage.
INA219 Sensor: Monitors current and voltage.
LCD Screen (16x2): Displays power metrics.
Power Supply: Supplies 15-25V DC for system operation.

Applications
Industrial equipment and automation.
Power supply units for testing electronic components.
Educational tool for embedded systems and sensor integration.

Limitations
Limited current capacity for high-power applications.
Manual button control unsuitable for automation.
Voltage range restricted to 0-20V.

System Testing
Verified accurate operation of the operational amplifier, INA219 sensor, and LCD.
Confirmed user input dynamically adjusts voltage and displays output metrics.

How to Use
Connect the STM32, INA219, op-amp, and LCD as described in the diagrams.
Power the system with a 15-25V DC input.
Use buttons to increase, decrease, or switch output voltage.
View real-time power metrics on the LCD.

Project Links
GitHub Repository: STM32 Power Management System

Feel free to explore and adapt this project for your needs. Contributions and suggestions are welcome!
