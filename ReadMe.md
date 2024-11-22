# Tic-Tac-Toe Game Variations

This repository contains multiple variations of the classic Tic-Tac-Toe game, developed as part of the CS213 Object-Oriented Programming course at Cairo University. The project includes three game variations:

1. **Pyramid Tic-Tac-Toe**
2. **Four-in-a-Row**
3. **5x5 Tic-Tac-Toe**

Each game follows different rules and configurations. Below are the details of each variation:

---

## 1. Pyramid Tic-Tac-Toe

### Description:
- The game board is shaped like a pyramid with five squares on the base, followed by three squares, and finally a single square at the top.
- Players take turns marking `X` or `O`.
  
### Winning:
- The first player to get three-in-a-row, either vertically, horizontally, or diagonally, wins the game.

---

## 2. Four-in-a-Row

### Description:
- This variation is a 7x6 grid where players take turns marking `X` or `O`.
- Players place their marks in any column, and the mark falls to the lowest available row in that column.

### Winning:
- The first player to achieve four-in-a-row (either vertically, horizontally, or diagonally) wins.

---

## 3. 5x5 Tic-Tac-Toe

### Description:
- Played on a 5x5 grid where players alternate placing `X` or `O` on empty squares.
- The game ends when all squares are filled except one, leaving 24 moves in total.

### Winning:
- The winner is the player with the most three-in-a-row sequences (either horizontally, vertically, or diagonally).
- Players can count overlapping sequences of three-in-a-row as valid.

---

## Features

- **Object-Oriented Design**: The game logic is implemented using object-oriented principles such as classes, objects, and methods.
- **Game Variations**: Three unique versions of Tic-Tac-Toe, each with different board sizes and win conditions.
- **Player Interaction**: Players take turns to place their marks, and the game checks for a winner after each turn.
- **Win Detection**: Each game variation includes win condition checks for detecting three-in-a-row or four-in-a-row sequences.

  