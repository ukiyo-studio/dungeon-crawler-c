# Mastering C: Building Your First Dungeon Crawler RPG

## Course Summary
This guide walks through core C concepts by building a simple, terminal-based dungeon crawler RPG. Along the way, you’ll practice manual memory management, pointers, structs, and writing efficient code that runs close to the metal.

The goal is to build a simple terminal-based Dungeon Crawler RPG inspired by Dungeon Crawler Carl. You’ll create a turn-based game where a hero navigates procedural dungeons, battles quirky enemies, collects unusual loot, and levels up with LitRPG-style stats. No graphics yet—the focus is on C fundamentals with text output (e.g., ASCII maps). This keeps the emphasis on core concepts like pointers for dynamic data, structs for game entities, file I/O for saves, and optimizations for smooth performance.

By the end, you’ll have a playable game: procedural generation for dungeons, combat mechanics with lighthearted narration, inventory management, and escalating challenges. The project uses standard C libraries (no external dependencies initially) and explains key low-level decisions along the way.

**Course Structure**: This guide is organized into 10 bite-sized lessons. Each lesson includes:
- **Objectives**: What you’ll learn.
- **Explanations**: Clear, step-by-step breakdowns and examples.
- **Code Examples**: Runnable C snippets with comments on pointers, memory, etc.
- **Hands-On Exercises**: Build parts of the game.
- **Practice**: Optional tasks to reinforce the lesson.
- **Next Steps**: What comes next.

**Environment Notes**: Includes setup tips for macOS and CLion where helpful. Other editors and operating systems will also work with minor adjustments.

**Prerequisites**: Basic terminal skills; CLion setup is covered in Lesson 1.
**Pace**: Work through one lesson at a time at your own pace.
**Total Lessons**: 10, building incrementally to the full game.

## Course Outline

### Lesson 1: Setting Up Your C Environment on macOS with CLion
- Focus: Install tools, create your first "Hello, Dungeon!" program.
- Key Concepts: Compiling C code; basic syntax; build/run cycle.
- Hands-On: Write and debug a simple program.

### Lesson 2: Core C Basics – Variables, Functions, and Control Flow
- Focus: Data types, functions, loops, and conditionals.
- Key Concepts: Procedural style vs. OOP; no garbage collection.
- Hands-On: Build a simple stat calculator for the player character.

### Lesson 3: Arrays and Strings – Managing Fixed Data
- Focus: Arrays, char arrays (strings), and basic input/output.
- Key Concepts: Fixed-size data; string manipulation in C.
- Hands-On: Create a basic inventory list as an array.

### Lesson 4: Pointers Demystified – The Heart of C
- Focus: Pointer basics, dereferencing, and why they’re essential.
- Key Concepts: Memory addresses; indirection; mutability.
- Hands-On: Use pointers to modify health dynamically.

### Lesson 5: Dynamic Memory Management – Malloc, Free, and Structs
- Focus: Allocating/freeing memory, defining structs for game entities.
- Key Concepts: Avoiding leaks; structs for game entities.
- Hands-On: Define a Player struct and allocate it dynamically.

### Lesson 6: File I/O – Saving and Loading Game State
- Focus: Reading/writing files for persistence.
- Key Concepts: Binary vs. text files; error handling.
- Hands-On: Save player stats to a file and load them.

### Lesson 7: Procedural Generation – Building Dungeons
- Focus: Random number generation, 2D arrays for maps.
- Key Concepts: Pointers and 2D arrays; simple algorithms.
- Hands-On: Generate and print a basic ASCII dungeon map.

### Lesson 8: Game Logic – Turn-Based Combat
- Focus: Functions for combat, enemy structs.
- Key Concepts: Passing structs by pointer for efficiency; function design.
- Hands-On: Implement battles with humorous outcomes.

### Lesson 9: Inventory and Loot System – Dynamic Lists
- Focus: Linked lists or dynamic arrays for inventory.
- Key Concepts: Pointers for linked structures; dynamic resizing.
- Hands-On: Add creative loot items with descriptions.

### Lesson 10: Polish and Optimization – Full Game Assembly
- Focus: Integrating everything, basic performance tweaks.
- Key Concepts: Profiling basics; optimizing loops and memory usage.
- Hands-On: Assemble the complete game; add win/lose conditions.
