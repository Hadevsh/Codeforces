# Codeforces Problemset Solutions

A curated collection of solutions to Codeforces problems, organized by problem round letter and implemented in C++, Python, and accompanied by compiled executables for Windows.

[Problemset](https://codeforces.com/problemset)

## 📁 Project Structure
```
├── A/                     # Solutions for "A" problems
│   ├── cpp/               # C++ implementations
│   │   ├── solution1.cpp  # C++ source file
│   │   └── solution1.exe  # Compiled executable (Windows)
│   └── py/                # Python implementations
│       └── solution2.py   # Python solution
├── B/                     # Solutions for "B" problems
│   ├── cpp/
│   │   ├── solution1.cpp
│   │   └── solution1.exe
│   └── py/
│       └── solution2.py
├── C/                     # Solutions for "C" problems
│   ├── cpp/
│   └── py/
└── README.md              # This file
```

* **Folder naming**: Each directory corresponds to the problem letter (A, B, C, …).
* **File naming**:

  * Source files: descriptive names or the Codeforces problem ID, e.g., `1462A.cpp` or `1234.py`.
  * Executables: same base name as source (e.g., `1462A.exe`) for quick runs on Windows.

## 🚀 Getting Started

### Prerequisites

* C++ compiler (e.g., `g++`) for compiling C++ files
* Python 3.x for running Python scripts
* Windows environment for `.exe` binaries (optional)

### Running a Solution

#### C++

```bash
# Compile (Linux/macOS)
g++ -std=c++17 -O2 A/solution1.cpp -o A/solution1
# Executable "solution1" is created and can be run:
./A/solution1 < input.txt > output.txt

# On Windows:
g++ -std=c++17 -O2 A/solution1.cpp -o A/solution1.exe
# Executable "solution1.exe" can be run directly:
A\solution1.exe < input.txt > output.txt
```

#### Python

```bash
python3 B/solution2.py < input.txt > output.txt
```

## ✍️ Contributing

1. Fork this repository
2. Create a new branch: `git checkout -b feature/problemX`
3. Add your solution file in the appropriate folder
4. Follow naming conventions:
   * `X_<problemID>.<cpp|py>` for source
   * `X_<problemID>.exe` for compiled Windows binaries (optional)
5. Commit your changes and push: `git push origin feature/problemX`
6. Open a pull request

Please ensure your code is well-documented and tested against sample inputs.
Happy coding! 🎉
