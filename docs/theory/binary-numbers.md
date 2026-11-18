---
tags:
  - beyond-blinky
  - foundations
  - binary
  - number-systems
  - computing
  - theory
---

# How Binary Numbers Work

Computers store information using bits. A bit can have one of two values: **0** or **1**. Binary is a way of writing numbers using those two digits.

## Counting in binary

The decimal number system uses ten digits, from 0 to 9. When we count past 9, we start another digit and write 10.

Binary uses only two digits. When we count past 1, we start another digit and write 10. The first few binary numbers are (Kirk, 2023):

| Decimal | Binary |
| ---: | :--- |
| 0 | 0 |
| 1 | 1 |
| 2 | 10 |
| 3 | 11 |
| 4 | 100 |
| 5 | 101 |
| 6 | 110 |
| 7 | 111 |
| 8 | 1000 |
| 9 | 1001 |
| 10 | 1010 |
| 11 | 1011 |
| 12 | 1100 |
| 13 | 1101 |
| 14 | 1110 |
| 15 | 1111 |

Each position in a binary number has a value. From right to left, the values are 1, 2, 4, 8, 16, and so on. Each position is worth twice as much as the one before it.

For example, **1011** means:

- 1 × 8
- 0 × 4
- 1 × 2
- 1 × 1

So **1011** in binary is **11** in decimal: 8 + 2 + 1 = 11.

## What fits in 8 bits?

A group of eight bits is called a byte. An **unsigned 8-bit value** can represent numbers from **0 to 255**, inclusive.

There are 256 possible patterns made from eight bits: 2 choices for each of 8 positions, or 2⁸ = 256 patterns. The first pattern is `00000000` (0). The last is `11111111` (255):

`11111111` = 128 + 64 + 32 + 16 + 8 + 4 + 2 + 1 = 255

The eight bit positions have these values:

| Bit position | 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
| :--- | ---: | ---: | ---: | ---: | ---: | ---: | ---: | ---: |
| Value | 128 | 64 | 32 | 16 | 8 | 4 | 2 | 1 |

A bit set to 1 contributes its position's value. A bit set to 0 contributes nothing.

## Convert decimal to binary

To convert **13** from decimal to binary, select the position values that add up to 13:

- 8 fits in 13, leaving 5: write 1 in the 8 position.
- 4 fits in 5, leaving 1: write 1 in the 4 position.
- 2 does not fit in 1: write 0 in the 2 position.
- 1 fits in 1, leaving 0: write 1 in the 1 position.

The result is `1101`. Written as an 8-bit value, add zeroes to the left: `00001101`. Leading zeroes do not change a number's value. This place-value method is also used in the North Carolina State University conversion examples (North Carolina State University, n.d.).

Another method is to divide repeatedly by 2 and read the remainders from bottom to top. Repeated division by the target base is a general method for converting from base 10 (Kirk, 2023):

| Division | Remainder |
| :--- | ---: |
| 13 ÷ 2 = 6 | 1 |
| 6 ÷ 2 = 3 | 0 |
| 3 ÷ 2 = 1 | 1 |
| 1 ÷ 2 = 0 | 1 |

Reading the remainders upward gives `1101`.

## Convert binary to decimal

For `10110101`, use the eight position values. Add the values wherever the binary digit is 1:

128 + 32 + 16 + 4 + 1 = **181**

So `10110101` in binary is **181** in decimal.

## Try it

1. Count from decimal 0 to 7 in binary.
2. Convert decimal 42 to an 8-bit binary value.
3. Convert `00101010` to decimal.

## References

Kirk, D. (2023). 4.3 Converting with base systems. In *Contemporary mathematics*. OpenStax. <https://openstax.org/books/contemporary-mathematics/pages/4-3-converting-with-base-systems>

North Carolina State University. (n.d.). *Base conversion process*. E 115: Introduction to Computing Environments. <https://e115.engr.ncsu.edu/hardware/binary/base-conversion-process/>
