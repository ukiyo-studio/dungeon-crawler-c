# Lesson 2: Core C Basics – Variables, Functions, and Control Flow

## Objectives
- Learn C’s fundamental building blocks: variables, data types, functions, and control flow (loops, conditionals).
- Understand how C differs from C#’s high-level abstractions, focusing on its procedural nature.
- Build a simple stat calculator for your *Dungeon Crawler Carl*-inspired RPG, laying the groundwork for game logic.
- Apply these concepts in CLion on your MacBook M3 Max, reinforcing your setup from Lesson 1.

## Why This Matters
As a C# developer, you’re used to objects, automatic memory management, and rich libraries. C is leaner—think of it as coding closer to the hardware with no safety net. Mastering variables, functions, and control flow lets you structure game logic (e.g., calculating Carl’s combat stats or handling turn-based decisions). This lesson builds the foundation for your terminal-based Dungeon Crawler RPG, where you’ll need to manage player stats and game flow without C#’s conveniences.

## Explanations
Let’s break down the core concepts, drawing analogies to C# where helpful.

### 1. Variables and Data Types
C’s basic data types are simple compared to C#’s rich type system:
- `int`: Integer (e.g., `10`, `-5`), like C#’s `int`.
- `float`: Floating-point number (e.g., `3.14`), like C#’s `float`.
- `char`: Single character (e.g., `'A'`), similar to C#’s `char` but often used for strings.
- `double`: Higher-precision float, like C#’s `double`.
- No `string` type—strings are arrays of `char` (covered in Lesson 3).
- No `bool`—use `int` (0 for false, non-zero for true) or include `<stdbool.h>` for `bool`.

**Declaration**: Variables must be declared with their type before use, unlike C#’s `var`.
```c
int health = 100; // Carl’s health
float damageMultiplier = 1.5f; // Combat boost
char initial = 'C'; // Carl’s name initial
```

**Why this matters**: Your RPG will use `int` for stats (health, strength), `float` for modifiers (critical hit chance), and `char` for text-based displays.

### 2. Functions
C functions are standalone, not tied to classes like C# methods. They’re defined with a return type, name, parameters, and body:
```c
int add(int a, int b) { // Returns int, takes two int parameters
    return a + b;
}
```
- `void` return type if no value is returned.
- No access modifiers (`public`, `private`)—functions are global unless declared `static`.
- Pass-by-value by default (unlike C#’s reference types), but we’ll use pointers later for efficiency.

**Why this matters**: Functions will handle game logic like calculating damage or updating stats.

### 3. Control Flow
C’s control structures (`if`, `for`, `while`, `switch`) are similar to C# but more explicit:
- **If Statements**:
  ```c
  if (health <= 0) {
      printf("Carl is defeated!\n");
  } else {
      printf("Carl fights on!\n");
  }
  ```
- **Loops**:
    - `for`: Iterate a fixed number of times.
    - `while`: Loop until a condition is false.
  ```c
  for (int i = 0; i < 5; i++) {
      printf("Turn %d\n", i + 1);
  }
  ```
- **Switch**: Like C#’s `switch`, but requires `break` to avoid fall-through.
  ```c
  switch (weapon) {
      case 1:
          printf("Sword equipped!\n");
          break;
      default:
          printf("Fists only!\n");
  }
  ```

**Why this matters**: Control flow drives turn-based combat, stat checks, and game loops in your RPG.

### 4. Input/Output with `printf` and `scanf`
- `printf`: Formats output, like `Console.WriteLine`. Use specifiers: `%d` (int), `%f` (float), `%c` (char), `%s` (string).
- `scanf`: Reads input, like `Console.ReadLine` but requires pointers (we’ll touch on this lightly).

**Example**:
```c
int health = 100;
printf("Carl’s Health: %d\n", health);
```

## Hands-On: Stat Calculator for Carl
Let’s write a program to calculate Carl’s combat stats, introducing variables, functions, and control flow. This simulates a simple LitRPG stat system for your Dungeon Crawler RPG.

```c
#include <stdio.h>

int calculateDamage(int strength, float multiplier) {
    return (int)(strength * multiplier); // Cast float result to int
}

void printStatus(int health, int strength, int damage) {
    printf("Hero: Carl\n");
    printf("Health: %d\n", health);
    printf("Strength: %d\n", strength);
    printf("Damage per Hit: %d\n", damage);
    if (health > 50) {
        printf("Status: Ready to fight!\n");
    } else {
        printf("Status: Needs healing!\n");
    }
}

int main() {
    // Initialize Carl’s stats
    int health = 100;
    int strength = 10;
    float damageMultiplier = 1.5f;

    // Calculate damage
    int damage = calculateDamage(strength, damageMultiplier);

    // Print status
    printStatus(health, strength, damage);

    // Simulate one attack
    int enemyHealth = 30;
    printf("\nCarl attacks a goblin!\n");
    enemyHealth -= damage;
    if (enemyHealth <= 0) {
        printf("Goblin defeated! Carl finds an Enchanted Donut!\n");
    } else {
        printf("Goblin survives with %d health!\n", enemyHealth);
    }

    return 0;
}
```

**How to Run**:
1. Open CLion, replace `main.c` from Lesson 1 with this code.
2. Build and run (`Ctrl+R`).
3. Expected output:
   ```
   Hero: Carl
   Health: 100
   Strength: 10
   Damage per Hit: 15
   Status: Ready to fight!

   Carl attacks a goblin!
   Goblin defeated! Carl finds an Enchanted Donut!
   ```

**Code Breakdown**:
- **Variables**: `health`, `strength` (int), `damageMultiplier` (float) store Carl’s stats.
- **Function `calculateDamage`**: Takes `strength` and `multiplier`, returns damage. Casting `(int)` ensures an integer result, as floats can be imprecise.
- **Function `printStatus`**: Uses `printf` with format specifiers and an `if` to show Carl’s condition.
- **Control Flow in `main`**: Simulates one attack, using an `if` to check if the goblin is defeated.
- **Why no pointers yet**: We’re using pass-by-value for simplicity; Lesson 4 will introduce pointers for efficiency.

**C vs. C#**:
- No `Console.WriteLine`—`printf` requires format specifiers.
- No classes—functions like `printStatus` are standalone.
- No garbage collection—variables are stack-allocated and cleaned up when `main` exits.

## Hands-On Exercise
Modify the program to:
1. Add a new stat: `agility` (int, e.g., 8).
2. Update `calculateDamage` to include `agility` (e.g., `damage = strength * multiplier + agility / 2`).
3. Update `printStatus` to show `agility`.
4. Add a loop in `main` to simulate 3 attacks on the goblin, printing its health each time.

**Example Output**:
```
Hello: Carl
Health: 100
Strength: 10
Agility: 8
Damage per Hit: 14
Status: Ready to fight!

Carl attacks a goblin!
Goblin survives with 16 health!

Carl attacks a goblin!
Goblin survives with 2 health!

Carl attacks a goblin!
Goblin defeated! Carl finds an Enchanted Donut!
```
