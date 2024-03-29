
# Advent of Code 2022 - C++ solutions

## Project structure

The project contains a folder for each day, and a `Common/` folder providing functions used across puzzles.

The build system used is CMake.  
CMake can generate Makefile build files on Unix systems, and VS solution files on Windows.  
The generated build files are created under a separate `build/` folder.

## Build

### Manual build with Make (Unix) from a terminal

The code uses some C++20 features (especially header `<ranges>`).  
If the default C++ compiler used by CMake does not support C++20 features, specify a more recent compiler with the `-DCMAKE_CXX_COMPILER` parameter.

```bash
$>  mkdir build
$>  cd build/
$>  cmake .. -DCMAKE_CXX_COMPILER='<FULL_PATH_TO_G++>'
$>  make
```

### Manual build with MSBuild (Windows) from Powershell

On Windows, CMake generates MS solution files that can be built into binaries with MSBuild.  
MSBuild is included in the Microsoft Visual Studio installation.

```bash
$>  mkdir build
$>  cd build/
$>  cmake ..
$>  & "C:\Program Files\Microsoft Visual Studio\2022\Community\MSBuild\Current\Bin\MSBuild.exe" .\advent_of_code_2022.sln /property:Configuration=Release
```

### Automatic build in VS Code (Windows)

 - install the VS Dev tools from VS Installer that includes CMake
 - open VS Code from the "Developer Command Prompt for VS" terminal
 - install the C++ and the CMake Tools extensions, then restart VS Code
 - CMake should be detected when opening the C++ project
 - select either Release or Debug Cmake build in the blue footer
 - click the Build button to generate the `.sln` and `.vcxproj` build files and the binaries


## Running all binaries

Once the daily binaries are built, we can either run them individually, or call the `runAllDays.bin` binary to run them all.

#### Unix

```
$>  cd build
$>  ./day01/day01.bin            // run the binary for a specific day
$>  ./runAllDays.bin             // run binaries for all days
```

#### Windows

```
$>  cd build
$>  .\day01\Release\day01.bin.exe            // run the binary for a specific day
$>  .\Release\runAllDays.bin.exe WINDOWS     // run binaries for all days
```

Running the `runAllDays.bin` binary shows the results and execution time for each day :

```
DAY 01 : day01\Release\day01.bin.exe
Part 1 : 73211  (0 ms)
Part 2 : 213958  (0 ms)

DAY 02 : day02\Release\day02.bin.exe
Part 1 : 11906  (0 ms)
Part 2 : 11186  (1 ms)

[ ... ] 

DAY 24 : day24\Release\day24.bin.exe
Part 1 : 232  (505 ms)
Part 2 : 715  (1598 ms)

DAY 25 : day25\Release\day25.bin.exe
Part 1 : 2=0=02-0----2-=02-10  (0 ms)

All days solutions took 37 seconds to complete.
```

## Debugging in VS Code

We can debug an executable generated by CMake (built with MSBuild or Make) by creating a launch configuration referencing that executable.  
Open a `main.cpp` file in VS Code, click on the Debug menu in the left toolbar, and create a new configuration.  
For example the `launch.json` can be something like :

```json
{
    "version": "0.2.0",
    "configurations": [ 
        {
            "name": "day01 (Windows)",
            "type": "cppvsdbg",
            "request": "launch",
            "program": "C:\\PATH_TO_REPO\\advent_of_code_2022\\c++\\build\\day01\\Debug\\day01.bin.exe",
            "console": "integratedTerminal",
            "logging": {
              "moduleLoad": false,
              "trace": true
            },
            "cwd": "${workspaceRoot}/build"
          }
    ]
}
```

This debug launch configuration lets us run the executable in Debug mode by clicking on the Play icon of the Debug left panel.  
This can be confirmed by adding a breakpoint in the code and ensuring that the execution pauses at the breakpoint.
