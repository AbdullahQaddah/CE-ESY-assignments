## Peripherals & System Configuration

* **Clock Configuration:** The High-Speed External (HSE) oscillator is enabled, and the system clock (HCLK) is configured to its maximum stable frequency of **72 MHz**.
* **Temperature Sensor (I2C2):** The **I2C2** peripheral is configured in Standard Mode (100 KHz) using pins `PB10` (I2C2_SCL) and `PB11` (I2C2_SDA) to interface with the digital temperature sensor **TC74**.
* **Timer & Interrupts (TIM3):** **TIM3** is configured with an internal clock source to trigger a global interrupt periodically every **500 milliseconds** (Prescaler $PSC = 7199$, Counter Period $ARR = 4999$).
* **Motor Driver (GPIO Output):** Pin **PA0** is set as a `GPIO_Output` (`MOTOR`) to drive an NPN transistor that controls the DC cooling fan.
* **Control Buttons (GPIO Input):** Pins **PA1**, **PA2**, and **PA3** are configured as `GPIO_Input` with internal **Pull-up** resistors enabled to connect the three system control buttons safely.
