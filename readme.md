# Poker AI Project (Development Version)

## Overview

This project implements a **Five Card Draw Poker Game in C** where a human player competes against AI players.

The objective of the project is to build an **intelligent poker agent using Monte Carlo Simulation** that can make optimal decisions during gameplay.

The current version represents the **development stage** where the complete poker game engine is implemented and the **AI decision module is under development**.

---

## Current Development Status

This repository currently contains **Phase 1 of the project**.

### Completed (Phase 1 – Game Engine)

The following components are fully implemented:

* Card data structure
* Deck generation and shuffling
* Hand management
* Player management
* Betting system
* Two-round poker gameplay
* Hand ranking evaluation
* Game loop and showdown logic

Together these modules form the **core poker game engine**.

---

### In Progress (Phase 2 – AI Decision System)

The **AI Advisor module** is currently under development.

Planned AI features:

* Monte Carlo simulation for decision making
* Expected value calculation for poker hands
* AI discard strategy optimization
* Probability-based betting behavior

Currently the program prints:

```
AI Advisor in Progress
Monte Carlo simulation module under development
```

This indicates the location where the **AI decision logic will be integrated**.

---

## Game Rules

The implemented poker game follows **Five Card Draw Poker** rules.

### Players

* 1 Human Player
* 3 AI Players

Each player starts with **$100 chips**.

---

### Game Flow

Each set consists of **two betting rounds**.

1. Cards are dealt to all players (5 cards each).
2. First betting round begins.
3. Players may discard cards and draw new ones.
4. Second betting round occurs.
5. Remaining players reveal their hands.
6. The player with the **highest ranked hand wins the pool**.

The game continues until **only one player has chips remaining**.

---

## Poker Hand Rankings

Hands are ranked from **strongest to weakest**:

1. Straight Flush
2. Four of a Kind
3. Full House
4. Flush
5. Straight
6. Three of a Kind
7. Two Pair
8. Pair
9. High Card

The program automatically **evaluates hand strength and determines the winner**.

---

## Project Structure

```
Poker-game/
│
├── card.c
├── deck.c
├── hand.c
├── player.c
├── mcadvisor.c
├── pokergame.c
├── pokergame.h
├── Makefile
└── README.md
```

---

## File Descriptions

**card.c**
Handles card structures and card related functions.

**deck.c**
Implements deck initialization, shuffling, and card drawing.

**hand.c**
Manages player hands and evaluates poker hand rankings.

**player.c**
Defines player structures and player actions.

**mcadvisor.c**
Contains the AI advisor logic (currently under development).

**pokergame.c**
Main game loop and gameplay implementation.

**pokergame.h**
Header file containing structures, constants, and function prototypes.

---

## Compilation

Compile using **GCC**.

```
gcc -Wall -c card.c -I.
gcc -Wall -c deck.c -I.
gcc -Wall -c hand.c -I.
gcc -Wall -c player.c -I.
gcc -Wall -c mcadvisor.c -I.
gcc -Wall -c pokergame.c -I.

gcc -Wall -o pokergame pokergame.o card.o deck.o hand.o player.o mcadvisor.o
```

---

## Running the Program

Run the game using:

```
./pokergame 200
```

The argument represents the **number of simulations per discard option** that will be used once the Monte Carlo AI module is implemented.

---

## Future Work

Planned improvements include:

* Full Monte Carlo simulation implementation
* Probability based AI betting strategy
* Improved discard decision logic
* Bluff detection mechanisms
* Performance optimization for large simulations

---

## Academic Context

This project is developed as part of **Artificial Intelligence coursework**.

The objective is to explore **probabilistic decision making in imperfect information games** such as poker using **Monte Carlo simulation techniques**.

---

## Author

**Chetan Channa**
BTech Artificial Intelligence & Data Science
Vishwakarma Institute of Technology, Pune
