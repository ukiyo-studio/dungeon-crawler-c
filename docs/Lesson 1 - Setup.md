# Lesson 1: Setting Up Your C Environment on macOS with CLion

## Objectives
- Install and configure tools to write, compile, and debug C code on your MacBook M3 Max using CLion.
- Write your first C program: a "Hello, Dungeon!" console application inspired by *Dungeon Crawler Carl*.
- Understand basic C program structure and compilation, leveraging your C# experience.
- Learn to debug in CLion to catch errors early.

## Why This Matters
As a senior software engineer, you're used to high-level environments like .NET with automatic build systems. C is raw—you'll manually compile code and manage every detail. Setting up a proper environment now ensures you can focus on learning C's low-level concepts (pointers, memory management) later, which are critical for your terminal-based Dungeon Crawler RPG. This lesson lays the groundwork for coding, debugging, and running your game.

## Step-by-Step Setup

### 1. Install Required Tools
Since you're on a MacBook M3 Max, we'll use Xcode's command-line tools for the GCC compiler and CLion as your IDE.

- **Install Xcode Command-Line Tools**:
    - Open Terminal (Applications > Utilities > Terminal).
    - Run:
      ```bash
      xcode-select --install
      ```
    - Follow the prompt to install. This provides `gcc` and `clang`.
    - Verify installation:
      ```bash
      gcc --version
      ```
      You should see something like `Apple clang version 15.x.x`.

- **Install CLion**:
    - Download CLion from [JetBrains](https://www.jetbrains.com/clion/download/#section=mac).
    - Install it (drag to Applications folder).
    - Open CLion and sign in (use a free trial or your JetBrains account).
    - Ensure CLion detects the compiler:
        - Go to `CLion > Preferences > Build, Execution, Deployment > Toolchains`.
        - Confirm `AppleClang` or `GCC` is listed under `Detected`.

- **Optional: Install Homebrew** (for extra tools later, e.g., Raylib):
    - Run in Terminal:
      ```bash
      /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
      ```
    - We’ll use Homebrew in later lessons for libraries.

### 2. Create Your First CLion Project
- Open CLion.
- Click `New Project`.
- Select `C Executable` (Language Standard: C99 for simplicity).
- Set the project location (e.g., `~/Projects/DungeonCrawler`).
- Click `Create`.
- CLion generates a `main.c` file and a `CMakeLists.txt` for building.

### 3. Write Your First C Program
Let’s create a simple program that prints a *Dungeon Crawler Carl*-inspired welcome message. This introduces C’s basic structure, which differs from C#’s object-oriented setup.

```c
#include <stdio.h>

int main() {
  printf("Welcome to Carl's Dungeon Crawler!\n");
  printf("Prepare for absurd loot and deadly donuts...\n");
  return 0;
}
```

**Explanation**:
- `#include <stdio.h>`: Imports the standard input/output library, like `System` in C#.
- `int main()`: The program’s entry point, akin to C#’s `Main` method. It returns `0` to indicate successful execution.
- `printf`: C’s print function, similar to `Console.WriteLine` but with format specifiers (e.g., `%d` for integers later).
- No classes or namespaces—C is procedural, so code lives in functions.

### 4. Configure and Run in CLion
- **Check CMakeLists.txt**: CLion auto-generates this. Ensure it includes:
  ```cmake
  cmake_minimum_required(VERSION 3.20)
  project(DungeonCrawler C)
  set(CMAKE_C_STANDARD 99)
  add_executable(DungeonCrawler main.c)
  ```
- **Build and Run**:
    - Click the green "Run" button (triangle) in CLion or press `Ctrl+R`.
    - Output appears in CLion’s console: `Welcome to Carl's Dungeon Crawler! Prepare for absurd loot and deadly donuts...`.
- **Debugging**:
    - Set a breakpoint by clicking the gutter next to `printf`.
    - Click the "Debug" button (bug icon) or press `Ctrl+D`.
    - Step through the code to see execution flow—familiar from C# debugging but lower-level.

### 5. Compiling Manually (Optional)
To understand what CLion does behind the scenes:
- Open Terminal, navigate to your project folder (`cd ~/Projects/DungeonCrawler`).
- Compile:
  ```bash
  gcc main.c -o dungeon
  ```
- Run:
  ```bash
  ./dungeon
  ```
This mirrors CLion’s build process and helps you grasp C’s compilation model.

### 6. Key Differences from C#
- **No Garbage Collection**: Unlike C#, you’ll manually manage memory (we’ll cover this in Lesson 4).
- **No Classes**: C uses functions and structs, not objects.
- **Manual Compilation**: No `dotnet run`—you compile to a binary.
- **Error Handling**: C doesn’t throw exceptions; you’ll check return values (e.g., `NULL` for pointers).

## Hands-On Exercise
Modify `main.c` to print a custom welcome message for your hero, Carl, including a fake stat line (e.g., "Health: 100, Strength: 10"). Run and debug it in CLion to ensure it works. Example output:
```
Welcome to Carl's Dungeon Crawler!
Hero: Carl, Health: 100, Strength: 10
Prepare for absurd loot and deadly donuts...
```

**Tip**: Use multiple `printf` calls or a single one with `\n` for newlines.
