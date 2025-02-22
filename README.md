## Real-Time Air Quality Monitoring System
![Static Badge](https://img.shields.io/badge/ESP32-%23009baa)
![Static Badge](https://img.shields.io/badge/IoT-8A2BE2)
![Static Badge](https://img.shields.io/badge/AQMS-greenbright)

AQMS (Air Quality Monitoring System) is a real-time air pollution detection system built using ESP32 and an MQ135 gas sensor. It continuously monitors air quality levels and provides dynamic alerts when pollution exceeds safe limits.

## Features
- Real-Time Monitoring: Continuously measures air quality using the MQ135 gas sensor.
- LCD Display: Shows real-time air quality readings on a 16x2 LCD.
- Audio Alerts: A buzzer triggers alerts when air quality drops below safe levels.
- User Control: A 10K potentiometer allows sensitivity adjustments.

## Hardware Components
- ESP32
- MQ135 Gas Sensor
- 16x2 LCD
- 10K Potentiometer
- Buzzer
- Resistors

## How It Works
- The MQ135 sensor detects air quality levels and sends data to the ESP32.
- The ESP32 processes the data and updates the LCD display.
- If pollution levels exceed a threshold, the buzzer sounds an alert.

## Future Enhancements
- Wi-Fi and cloud integration for remote monitoring.
- Mobile app integration for real-time notifications.
- AI-based predictive analytics for air quality trends.
