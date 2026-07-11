# NOT-618
*A custom CoreXY printer built on hopes and dreams.*  

![Status](https://img.shields.io/badge/status-In%20Development-orange) ![License](https://img.shields.io/badge/license-MIT-blue) ![MCU](https://img.shields.io/badge/MCU-STM32F407-green) ![Firmware](https://img.shields.io/badge/Firmware-Marlin-red)

**New Object Transmitter-618 / NOT-618** is a medium sized print volume *(220 × 220 × 220 mm)* custom CoreXY 3d printer developed as a long term engineering project. 

The project focuses on reliability, serviceability, and my open-source loyalty while serving as a platform for learning embedded systems, mechanical & PCB design, and firmware engineering.

## Features
- Automatic bed-leveling using BLTouch
- Independent dual Z motors
- Custom STM32F407-based controller (Vulcan-MK1)
- Marlin firmware support
- Fully open source design
- 24V power input

## Mechanical Design
![NOT-618](/Assets/NOT-618.png)  
### CAD: [OnShape URL](https://cad.onshape.com/documents/e82edfc86bb0a1665cdc75ee/w/ca3abfddd82f0954c06884bb/e/6fbd4bded61cf9b65a4d5030)

## PCB Design *(Vulcan-MK1)*
![Vulcan-MK1](/Assets/Vulcan-MK1.png)

![Vulcan-MK1 Routes](/Assets/PCB_Routes.png)

## Schematics
![MCU](/Assets/MCU.png)
![POWER](/Assets/Power.png)
![Drivers](/Assets/Drivers.png)
![Memory](/Assets/Memory.png)
![Aux](/Assets/AUX.png)

## Specifications
|   Component   |	Specification |  
|---------------|---------------|
| Motion System |	   CoreXY     |
| Build Volume | 220 × 220 × 220 mm |
| MCU | STM32F407VET6 |
| Stepper Drivers |	TMC2209 |
| Hotend | E3D V6 |
| Heated Bed | Anycubic Kobra Go 24V |
| Bed Probe |	BLTouch |
| Power Supply |	24V 15A |
| Cooling |	5015 Part Cooling + 3010 Hotend Fan |

## Assembly guide
1. Refer to the Onshape assembly for component placement and assembly order.  
2. Do not carelessly wire the pcb and ensure good solder joints. 

## ⚠️ Warning
1. Double-check polarity of capacitors and power input before powering the board. Otherwise you've made a fancy bomb :D
2. Use a 24v 15A SMPS for optimal performance. NEVER go higher than this.

## Bill of Materials
| Name | Purpose | Quantity | Total Cost (USD) | Distributor |
|------|---------|---------:|-----------------:|-------------|
| Zip Ties | Cable management | 1 | 1.04 | Daraz Nepal |
| 22 AWG Wire | For long connections | 1 | 4.08 | Daraz Nepal | 
| 18 AWG Wire | For power connections | 1 | 5.34 | Daraz Nepal |
| 24V 15A SMPS | For power delivery | 1 | 31.14 | Daraz Nepal |
| 0603 resistors | For PCB | 1 | 4.58 | Daraz Nepal |
| 0805 capacitors | For PCB | 1 | 5.78 | Daraz Nepal |
| Pitch Connectors | For PCB | 1 | 6.12 | Daraz Nepal |
| JST XH Connectors | For PCB | 1 | 5.11 | Daraz Nepal |
| 5015 24V Fan | For cooling duct | 1 | 5.27 | Daraz Nepal |
| Screws | For securing connections | 1 | 20.82 | Daraz Nepal |
| 24V Heated Bed | For printer | 1 | 19.78 | Daraz Nepal |
| PEI Sheet | For printer | 1 | 13.52 | Daraz Nepal |
| GT2 idler | For movement | 8 | 25.24 | Daraz Nepal |
| GT2 belt | For movement | 1 | 10.99 | Daraz Nepal |
| E3D Hotend | For printing | 1 | 11.05 | Daraz Nepal |
| Timing belt fixer | For attaching belts | 1 | 3.1 | Daraz Nepal |
| T-Nuts | For attaching extrusions | 1 | 5.84 | Daraz Nepal |
| MK8 Extruder | For filament output | 1 | 12.14 | Daraz Nepal |
| Pancake Stepper | For MK8 extruder | 1 | 12.04 | Daraz Nepal |
| 3015 Fan | For hotend cooling | 1 | 3.14 | Daraz Nepal |
| Brass Inserts | For fasteners | 1 | 8.89 | Daraz Nepal |
| Allen Keys | For securing hex nuts | 1 | 1.75 | Daraz Nepal |
| Limit switches | For min-max feedback | 2 | 3.92 | Daraz Nepal |
| Motor Coupler | For attaching steppers and rods | 2 | 2.44 | Daraz Nepal |
| Threaded Rods | For Z-axis movement | 2 | 7.54 | Daraz Nepal |
| GT2 pulley | For steppers | 2 | 1.57 | Daraz Nepal |
| Stepper Motors | For  movement | 4 | 51.95 | Daraz Nepal |
| LM12UU Bearings | For linear movement | 12 | 36.44 | Daraz Nepal |
| Linear Shaft (300mm) | For linear movement | 2 | 32.59 | Daraz Nepal |
| Linear Shaft (350mm) | For linear movement | 4 | 73.75 | Daraz Nepal |
| BLTouch | For auto-bed leveling | 1 | 12.74 | Daraz Nepal |
| 2040 Extrusion | For printer stability | 1 | 15 | Daraz Nepal |
| 2020 Extrusion (800mm) | Printer frame | 5 | 117.08 | Daraz Nepal |
| 2020 Extrusion (600mm) | Printer frame | 5 | 104.98 | Daraz Nepal |
| TMC2209 drivers | To drive motors | 5 | 37.26 | Daraz Nepal |
| 12864 LCD | To display stuff | 1 | 35.39 | Daraz Nepal |
| 3-Way Connector | To connect corners of extrusion | 8 | 17.53 | Daraz Nepal |
| Vulcan-MK1 PCB | To control printer | 1 | 166.65 | JLCPCB |
| **Shipping** | | | **27.32** | **Daraz Nepal & JLCPCB** |
| **Total** | | | **960.91** | |

## License
### MIT-License - See [LICENSE](/LICENSE)

## Author
### [Shaurya Tamang](https://shauryatamang.netlify.app/)