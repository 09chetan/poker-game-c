Poker AI Project (Development Version)
Overview

This project implements a Five Card Draw Poker Game in C where one human player competes against AI players. The goal of the project is to build an intelligent poker agent that can make optimal decisions using Monte Carlo Simulation.

The current version represents the development phase of the project, where the core game engine has been implemented and the AI advisor module is under development.

Current Development Status

This repository currently contains Phase 1 of the project.

Completed (Phase 1 – Game Engine)

The following components are fully implemented:

Card data structure

Deck generation and shuffling

Hand management

Player management

Betting system

Two round poker gameplay

Hand ranking evaluation

Game loop and showdown logic

These modules together form the complete poker game engine.

In Progress (Phase 2 – AI Decision System)

The AI Advisor module is currently under development.

Planned AI features:

Monte Carlo simulation for decision making

Expected value calculation for poker hands

AI discard strategy optimization

AI betting behavior based on probability

Currently the program displays:

AI Advisor in Progress
Monte Carlo simulation module under development

This indicates where the AI decision logic will be integrated.

Game Rules

The implemented poker game follows Five Card Draw Poker rules.

Players

1 Human Player

3 AI Players

Each player starts with $100 chips.

Game Flow

Each set consists of two betting rounds.

Cards are dealt to all players (5 cards each).

First betting round begins.

Players may discard and draw new cards.

Second betting round occurs.

Remaining players reveal their hands.

The player with the highest ranked hand wins the pool.

The game continues until only one player has money remaining.

Poker Hand Ranking

Hands are ranked as follows (strongest to weakest):

Straight Flush

Four of a Kind

Full House

Flush

Straight

Three of a Kind

Two Pair

Pair

High Card

The program evaluates hand strength automatically.

Project Structure
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
File Description

card.c
Handles card structure and card related functions.

deck.c
Implements deck initialization, shuffling and card drawing.

hand.c
Manages player hands and evaluates hand rankings.

player.c
Defines player structure and player actions.

mcadvisor.c
Contains the AI advisor logic (currently under development).

pokergame.c
Main game loop and gameplay implementation.

pokergame.h
Header file containing structures, constants and function prototypes.

Compilation

Compile the program using GCC.

gcc -Wall -c card.c -I.
gcc -Wall -c deck.c -I.
gcc -Wall -c hand.c -I.
gcc -Wall -c player.c -I.
gcc -Wall -c mcadvisor.c -I.
gcc -Wall -c pokergame.c -I.
gcc -Wall -o pokergame pokergame.o card.o deck.o hand.o player.o mcadvisor.o
Running the Program

Run the game using:

./pokergame 200

The number represents the number of simulations per discard option (to be used once Monte Carlo AI is implemented).

Future Work

The following features will be added in the final phase:

Full Monte Carlo AI implementation

AI probability based betting

Improved discard strategy

Bluff detection mechanisms

Game performance optimization

Academic Context

This project is developed as part of the Artificial Intelligence coursework. The objective is to apply probabilistic simulation techniques to decision making in imperfect information games such as poker.

Author

Chetan Channa
BTech AI & Data Science
VIT Pune
