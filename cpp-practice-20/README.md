# C++ Practice: 20 Programs

A small collection of beginner-friendly C++ exercises written in a straightforward style. Each `.cpp` file has its own `main()` function, so compile and run one file at a time.

## Topics

- **Arrays (01–05):** Two Sum, Best Time to Buy and Sell Stock, Contains Duplicate, Maximum Subarray, Move Zeroes
- **Structures (06–10):** Student average, Merge Intervals, Sort Students, Reverse Linked List, Interval Overlap
- **Enums (11–15):** Traffic Light, Rock Paper Scissors, Days in Month, Order Status, Calculator Operation
- **Pointers (16–19):** Swap, Reverse Array, Find Maximum, Count Vowels
- **Union (20):** Shared value storage using a union and an enum tag

## Requirements

- A C++ compiler such as `g++` or `clang++`
- C++11 or newer

## Compile and run one program

From the project folder, for example:

```bash
g++ -std=c++17 01_arrays/01_two_sum.cpp -o two_sum
./two_sum
```

On macOS, the same commands work if the Xcode Command Line Tools are installed. Repeat with the path and output name for whichever program you want to run.

## Important note

These are standalone practice programs inspired by common coding-interview patterns. Some are LeetCode-style algorithm exercises; the structure, enum, pointer, and union examples are C++ concept exercises rather than official LeetCode submissions. For LeetCode, copy the relevant function into the platform's expected `class Solution` format and remove `main()` if required.

## Push this project to GitHub

Create a new **empty** repository on GitHub named `cpp-programming-practice` (do not initialize it with a README if you already have this README locally). Then run these commands from inside this project folder:

```bash
git init
git add .
git commit -m "Add 20 C++ practice programs"
git branch -M main
git remote add origin https://github.com/raahul4559/cpp-programming-practice.git
git push -u origin main
```

If Git says `remote origin already exists`, use:

```bash
git remote -v
git remote set-url origin https://github.com/raahul4559/cpp-programming-practice.git
git push -u origin main
```

If Git rejects the push because the remote has commits you do not have locally, run:

```bash
git pull --rebase origin main
git push -u origin main
```

Only use the last commands if the remote repository already contains a commit, such as a README created on GitHub. If a merge conflict appears, resolve it before pushing.

## Suggested GitHub description

`20 beginner-friendly C++ practice programs covering arrays, structures, enums, pointers, and unions.`
