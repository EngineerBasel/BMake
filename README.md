# 🛠️ BMake (Build Make) - C++ Build System

> **⚠️ Status: Under Development** > This project is currently in the active development phase. Features and structures are subject to frequent changes.

**BMake** is a build automation tool designed to streamline the compilation and linking process for C++ and C projects. It aims to provide a structured and efficient alternative for managing complex build workflows.

---

## ⚖️ License (TFO License)

This software is distributed under **The True Founder Ownership License (TFO License)**, Version 1.0.

* **True Founder:** Basel Abdelrahman Abdelfattah Omar.
* **Commercial Rights:** All commercial rights are exclusively reserved for the True Founder.
* **Restrictions:** Commercial distribution, selling, or leasing of this software or its derivatives is strictly prohibited.
* **Usage:** Free for personal, educational, and research purposes.

---

## 🌟 Planned & Core Features

* **Smart Compilation:** Intelligent management of source and header files.
* **Qt GUI Interface:** Graphical project management built with the **Qt Framework**.
* **JSON Configuration:** Project definitions via `build.json`.
* **Resource Management:** Automatic organization for `Release` and `Debug` binaries.

---

## 📂 Project Structure

* **`New/`**: Core build engine and source files.
* **`BMake GUI/`**: Graphical interface for project management.
* **`real_program_builder/`**: Backend component for compiler command execution.
* **`run_executable/`**: Integrated utility to test binaries post-build.

---

## 🚀 Usage (Development Stage)

1.  Create a `build.json` in your project root.
2.  Define the compiler and source paths.
3.  Run the build command:
    ```bash
    bmake.exe --build
    ```