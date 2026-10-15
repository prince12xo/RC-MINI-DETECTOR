# RC-MINI-DETECTOR
# RC Mine Detector — Tethered Scout Vehicle

An autonomous/RC hybrid scout vehicle built with inductive proximity sensing, dynamic motor speed modulation, and real-time telemetry output for landmine detection in hazardous terrain.

---

## 🛠️ System Architecture

* **Microcontroller:** ESP32 / ATmega328P
* **Motor Control:** L298N Dual H-Bridge Driver
* **Sensors:** LJ12A3-4-Z/BX NPN Inductive Metal Proximity Sensors
* **Power Delivery:** 12V Li-Ion (3S 18650 Pack) with step-down regulation
* **Chassis Design:** CAD-modeled 3D printed frame with modular sensor boom arm

---


## 🔌 Circuit Pinout & Wiring Topology

```text
[ ESP32 Board ]
├── GPIO 26 ──────────► L298N IN1 (Motor A Forward)
├── GPIO 27 ──────────► L298N IN2 (Motor A Reverse)
├── GPIO 14 ──────────► L298N IN3 (Motor B Forward)
├── GPIO 12 ──────────► L298N IN4 (Motor B Reverse)
├── GPIO 34 (ADC) ────► Proximity Sensor Signal (Voltage Divider Protected)
└── 3.3V / GND ───────► Sensor Power / Common Ground Bridge
cjfnuccj ttfccitffucjn4rfc