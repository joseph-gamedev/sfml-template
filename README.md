# SFML CMake Template

This is a simple template for starting SFML projects using CMake. SFML (Simple and Fast Multimedia Library) provides a simple interface to various multimedia components like graphics, audio, and input. CMake is a cross-platform build system generator widely used for C++ projects.

## Prerequisites

Before using this template, ensure you have the following installed:

- CMake (version 3.0 or higher)

```bash
## Project Structure
sfml-template/
│
├── external/
│ └── SFML-2.6.1/ (Place SFML library files here)
├── inc/ (Header files for your project)
│ └── ...
│
├── src/ (Source files for your project)
│ ├── main.cpp
│ └── ...
│
├── CMakeLists.txt (CMake configuration file)
└── README.md (This file)
```

## Usage

1. Clone this repository or download and extract the ZIP archive.
2. Modify the source files in the `src/` directory according to your project requirements.
3. Run Setup.bat or Configure and build the project using CMake:

   ```sh
   mkdir build
   cd build
   cmake ..
   cmake --build .
   
  

