rd /S /Q build
mkdir build
cmake -B "build" -S %cd%
cmake --build build
