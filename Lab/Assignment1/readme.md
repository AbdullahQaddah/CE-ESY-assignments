## Project Description
This repository contains the corrected and optimized schematic design for the **STM32F103C8T6 (Blue Pill)** development board, created using **KiCad 10.0**.

The design has been refactored from the reference schematic to meet specific hardware requirements, ensuring electrical stability and eliminating design rule errors.

---

## Modifications & Enhancements
* **Voltage Regulator Upgrade:** Replaced the default regulator with the **LM1117DT-3.3** (TO-252 package). Integrated proper **10uF** input and output capacitors to ensure voltage stability and eliminate oscillations.
* **ERC Verification:** Successfully passed the Electrical Rules Check (ERC) with **0 Errors** and **0 Warnings** after properly configuring `PWR_FLAG` symbols for the power nets.

---

## File Structure
* `Lab_Assignment1.kicad_pro` - KiCad project main configuration file.
* `Lab_Assignment1.kicad_sch` - The complete schematic diagram.
* `Lab_Assignment1.pdf` - High-quality PDF plot of the finalized schematic.
