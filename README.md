# 4-Digit Bulls and Cows Game (with Cheat Mode)

This is a C-language implementation of the classic **Bulls and Cows** number-guessing game.  
The program randomly generates a **4-digit secret code with no repeated digits**.  
The player enters a 4-digit guess, and the program responds with a result in the form of `xAyB`:

- **A (Bulls)**: Correct digit in the correct position  
- **B (Cows)**: Correct digit but in the wrong position  

You win the game when the result is **4A0B**.

---

## Features

- Random generation of **four unique digits**
- Input validation to ensure the user enters exactly 4 numeric digits
- Result reported in the format `xAyB`
- Special command: **`cheat`**
  - Reveals one digit of the secret code per use
  - Up to four reveals total
  - After all digits are shown, the program displays `"All have been revealed!"`

---

## Game Rules

1. When the program starts, it displays:
   - `"GAME START!"`
   - Instructions about entering 4 digits or using the `cheat` command

2. Each turn, the player may:
   - Enter a 4-digit number to receive an `xAyB` result  
   - Or type **`cheat`** to reveal the next secret digit

3. When the guess yields **4A0B**, the program prints:
   - `"Congratulations! You are win!"`
   - Then terminates the game

---

## Build and Run

### Compile with `gcc`

```bash
# Compile
gcc -o bulls_and_cows main.c

# Run
./bulls_and_cows
