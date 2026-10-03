# 🚀 My Computer Science & Software Engineering Journey

Welcome to my central repository! This repository serves as a living portfolio of my Computer Science learning path, practical software engineering experiments, problem-solving workflows, and self-directed study in game development.

---

## 📌 Table of Contents
1. [About the Repository](#-about-the-repository)
2. [Topics & Technologies Covered](#-topics--technologies-covered)
3. [Self-Directed Learning & Game Development](#-self-directed-learning--game-development)
4. [Troubleshooting & Problem-Solving Log](#-troubleshooting--problem-solving-log)
5. [Getting Started Locally](#-getting-started-locally)

---

## 🎯 About the Repository
The primary goal of this repository is not only to store code, but also to document my **analytical thinking, problem-solving, and engineering process**. I believe that becoming a great developer requires continuous experimentation, understanding core fundamentals, and mastering how to debug and resolve technical roadblocks.

---

## 📚 Topics & Technologies Covered

### 1. C++ Fundamentals
* **Core Concepts:** Variables, control flow, functions, memory layout, and compilation basics using `g++`.
* **Problem Solving:** Implementing algorithms and basic data structures to build strong foundational knowledge.

### 2. C# & .NET Ecosystem
* **Core Language Concepts:** Syntax, object-oriented programming (OOP), data types, and methods.
* **Toolchain & Environment:** Building and running applications cross-platform using the `.NET 9 SDK` on Linux (Fedora).

### 3. Version Control & DevOps Workflows (Git & GitHub)
* Basic and intermediate Git operations (`init`, `add`, `commit`, `push`, `remote` management).
* Secure authentication mechanisms using GitHub Personal Access Tokens (PAT).
* Repository hygiene using `.gitignore` templates to prevent committing build artifacts (`bin/`, `obj/`, binaries).

---

## 🎮 Self-Directed Learning & Game Development

Beyond my structured Computer Science coursework, I actively explore **Game Development** out of a passion for real-time systems, graphics, and interactive design:

* **Engine & Logic Foundations:** Studying game loops, state management, and real-time interaction logic in C# and C++.
* **Core Game Mechanics:** Implementing player movement, collision detection, and basic physics handling.
* **Future Transition:** Preparing to leverage C# fundamentals for game development engines (e.g., Unity/Godot) on Windows platforms.

---

## 🛠️ Troubleshooting & Problem-Solving Log

A dedicated log documenting technical challenges encountered during development and how they were resolved:

### 1. Network Timeout during Git Push
* **Issue:** Received a `fatal: unable to access ... unexpected eof while reading` error during `git push`.
* **Root Cause:** A temporary network packet drop/disconnection while transferring packfiles over SSL.
* **Resolution:** Since the commits were already saved locally, verifying network stability and re-running `git push` successfully updated the remote branch.

### 2. Preventing Build Artifacts in Git Tracking
* **Issue:** Git tracked compiled binaries and temporary `.NET` cache directories (`bin/` and `obj/`).
* **Root Cause:** Absence of a language-specific ignore file prior to initial commits.
* **Resolution:** Generated a dotnet `.gitignore` file using `dotnet new gitignore` to automatically exclude temporary build assets and keep the repository clean.

### 3. Secure Credential Management with Personal Access Tokens
* **Issue:** GitHub deprecated password authentication for HTTPS operations.
* **Resolution:** Configured Git to use a Personal Access Token (PAT) with `repo` scopes, and enabled local credential storage using `git config --global credential.helper store`.

---

## 🚀 Getting Started Locally

To clone and run any project from this repository on your local machine:

1. **Clone the Repository:**
   ```bash
   git clone [https://github.com/kareemul/cs-roadmap.git](https://github.com/kareemul/cs-roadmap.git)
   cd cs-roadmap
