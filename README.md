# Galperin’s Billiards Problem - Simulating Collisions to Compute Pi

## Overview

This project explores **Galperin's Billiards Problem**, a fascinating mathematical phenomenon where elastic collisions between two masses (one significantly larger than the other) and a wall can be used to approximate the digits of **π**. 

The number of total collisions between the masses and the wall follows a surprising pattern: for a mass ratio of **M/m = 100ⁿ**, the number of collisions approximates **the first n+1 digits of π**. This elegant result arises due to momentum conservation and energy conservation in elastic collisions.

This repository contains:
- A C program (`Galperin_Billiards_Problem.c`) that numerically simulates the problem.
- Calculations and results that verify the connection between the number of collisions and π.

## Background

Galperin's billiard system consists of:
1. A **heavy mass (M)** approaching a **light mass (m)** from the left.
2. The light mass (m) initially at rest between the heavy mass and a **hard wall**.
3. Both masses collide elastically with each other and with the wall.
4. The heavy mass eventually moves away, and the total number of collisions reveals the digits of **π**.

The system can be analyzed using:
- **Momentum conservation**: \( M v_1 + m v_2 = M v_1' + m v_2' \)
- **Energy conservation**: \( \frac{1}{2} M v_1^2 + \frac{1}{2} m v_2^2 = \frac{1}{2} M v_1'^2 + \frac{1}{2} m v_2'^2 \)
- When \( M/m = 100^n \), the number of collisions **approximates π up to n+1 decimal places**.

## Implementation

### `Galperin_Billiards_Problem.c`

The C program simulates the collisions step-by-step:

1. **User Input**: The user specifies `n`, where the mass of the large ball is set to `M = 100^n`.
2. **Initialization**: The velocity of the large ball is set, while the small ball is initially at rest.
3. **Elastic Collision Calculations**: Using the momentum and energy conservation formulas, the program updates velocities after each collision.
4. **Collision Counting**: The number of collisions is counted, and the approximate value of π is displayed.


## Mathematical Explanation

For increasing values of `n`, the number of collisions follows:

| Mass Ratio (M/m) | Number of Collisions | Approximation of π |
|-----------------|--------------------|--------------------|
| 1              | 3                  | 3                 |
| 100            | 31                 | 3.1               |
| 10,000         | 314                | 3.14              |
| 1,000,000      | 3141               | 3.141             |
| 100^n          | ~π (n+1 digits)     | ~π                |

This result is derived from the geometric interpretation of the billiard system, where the system behaves like a **billiard ball reflecting off a triangular barrier in phase space**.

## Results & Observations

- The numerical simulation confirms the theoretical prediction that the number of collisions approximates **π**.

## References

- Galperin, G. (2003). "Playing Pool with π." *Regular and Chaotic Dynamics, 8*(4), 375-394.
- Aretxabaleta, X. M., et al. (2020). [The Dynamics of Digits: Calculating Pi with Galperin’s Billiards](https://www.mdpi.com/2227-7390/8/4/509). *Mathematics, 8*(4), 509.



