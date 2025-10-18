# The Simplest Blinky – Manual Switch Edition

## 🌟 Overview

This is the **first Beyond Blinky project** — a circuit so simple it
doesn’t even need a microcontroller.  
The user provides the timing by manually flipping a switch.  
It’s a great way to begin thinking about current flow, polarity, and
component roles before moving on to automatic blinking with GPIOs.

---

## 🔌 Circuit Description

**Components**

- 3 V power source (coin cell or bench supply)  
- SPST switch  
- 330 Ω resistor  
- Red LED  
- Ground connection

**Circuit path**

```
3 V → switch → resistor → LED → GND
```

When the switch is closed, current flows and the LED lights.  
Opening the switch breaks the circuit — producing a *manual blink*.

---

## 🧠 Concepts Introduced

- Polarity of diodes and LEDs  
- Current limiting using a resistor  
- Voltage drop across the LED  
- Manual vs. automatic timing  
- Why GPIOs on microcontrollers later replace the switch

---

## 🧩 Interactive Simulation

Below is an embedded simulation of this circuit using
[**Falstad Circuit Simulator**](https://falstad.com/circuit/).  
Click the switch in the diagram to make the LED turn on and off.

<iframe 
  src="https://falstad.com/circuit/circuitjs.html?ccturl=https://tinyurl.com/2cjodgap"
  width="800"
  height="500"
  style="border:1px solid #555;">
</iframe>

---

## 🖼️ Static Diagram

If the interactive version doesn’t load, here’s the static SVG version
exported from Falstad:

![Manual Blinky Circuit](../assets/falstad/circuit-20251018-0513.svg)

---

## 🔍 Measurements and Observations

Assuming a 3 V source and a 330 Ω resistor:

- Typical LED forward voltage ≈ 2.0 V  
- Voltage drop across resistor ≈ 1.0 V  
- Current ≈ 3 mA  
- Safe for continuous operation

Use a multimeter to confirm the voltage drop and verify LED polarity.
Reversing the LED will prevent it from lighting, which is a helpful
demonstration of diode behavior.

---

## 🧩 Next Steps

- Replace the switch with a **transistor** to make an
  electronically-controlled blink.  
- Drive the LED from a **microcontroller GPIO** pin with a software delay.  
- Measure current and brightness differences using different resistor
  values.

---

## 📑 References

Falstad, P. (n.d.). *CircuitJS Online Simulator* [Web app].  
[https://falstad.com/circuit/](https://falstad.com/circuit/)

---

## 🏷 Tags

#beyond-blinky #electronics #led #circuits #intro #falstad
