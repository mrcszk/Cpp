# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.3.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.3.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\marci\Desktop\Programy w C++\11. Najwiekszy iloczyn liczb podanych na wejsciu"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\marci\Desktop\Programy w C++\11. Najwiekszy iloczyn liczb podanych na wejsciu\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles\11__Najwiekszy_iloczyn_liczb_podanych_na_wejsciu.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\11__Najwiekszy_iloczyn_liczb_podanych_na_wejsciu.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\11__Najwiekszy_iloczyn_liczb_podanych_na_wejsciu.dir\flags.make

CMakeFiles\11__Najwiekszy_iloczyn_liczb_podanych_na_wejsciu.dir\main.cpp.obj: CMakeFiles\11__Najwiekszy_iloczyn_liczb_podanych_na_wejsciu.dir\flags.make
CMakeFiles\11__Najwiekszy_iloczyn_liczb_podanych_na_wejsciu.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\marci\Desktop\Programy w C++\11. Najwiekszy iloczyn liczb podanych na wejsciu\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/11__Najwiekszy_iloczyn_liczb_podanych_na_wejsciu.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\11__Najwiekszy_iloczyn_liczb_podanych_na_wejsciu.dir\main.cpp.obj /FdCMakeFiles\11__Najwiekszy_iloczyn_liczb_podanych_na_wejsciu.dir\ /FS -c "C:\Users\marci\Desktop\Programy w C++\11. Najwiekszy iloczyn liczb podanych na wejsciu\main.cpp"
<<

CMakeFiles\11__Najwiekszy_iloczyn_liczb_podanych_na_wejsciu.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/11__Najwiekszy_iloczyn_liczb_podanych_na_wejsciu.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe > CMakeFiles\11__Najwiekszy_iloczyn_liczb_podanych_na_wejsciu.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\marci\Desktop\Programy w C++\11. Najwiekszy iloczyn liczb podanych na wejsciu\main.cpp"
<<

CMakeFiles\11__Najwiekszy_iloczyn_liczb_podanych_na_wejsciu.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/11__Najwiekszy_iloczyn_liczb_podanych_na_wejsciu.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\11__Najwiekszy_iloczyn_liczb_podanych_na_wejsciu.dir\main.cpp.s /c "C:\Users\marci\Desktop\Programy w C++\11. Najwiekszy iloczyn liczb podanych na wejsciu\main.cpp"
<<

# Object files for target 11__Najwiekszy_iloczyn_liczb_podanych_na_wejsciu
11__Najwiekszy_iloczyn_liczb_podanych_na_wejsciu_OBJECTS = \
"CMakeFiles\11__Najwiekszy_iloczyn_liczb_podanych_na_wejsciu.dir\main.cpp.obj"

# External object files for target 11__Najwiekszy_iloczyn_liczb_podanych_na_wejsciu
11__Najwiekszy_iloczyn_liczb_podanych_na_wejsciu_EXTERNAL_OBJECTS =

11__Najwiekszy_iloczyn_liczb_podanych_na_wejsciu.exe: CMakeFiles\11__Najwiekszy_iloczyn_liczb_podanych_na_wejsciu.dir\main.cpp.obj
11__Najwiekszy_iloczyn_liczb_podanych_na_wejsciu.exe: CMakeFiles\11__Najwiekszy_iloczyn_liczb_podanych_na_wejsciu.dir\build.make
11__Najwiekszy_iloczyn_liczb_podanych_na_wejsciu.exe: CMakeFiles\11__Najwiekszy_iloczyn_liczb_podanych_na_wejsciu.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\marci\Desktop\Programy w C++\11. Najwiekszy iloczyn liczb podanych na wejsciu\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 11__Najwiekszy_iloczyn_liczb_podanych_na_wejsciu.exe"
	"C:\Program Files\JetBrains\CLion 2018.3.4\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\11__Najwiekszy_iloczyn_liczb_podanych_na_wejsciu.dir --manifests  -- C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\11__Najwiekszy_iloczyn_liczb_podanych_na_wejsciu.dir\objects1.rsp @<<
 /out:11__Najwiekszy_iloczyn_liczb_podanych_na_wejsciu.exe /implib:11__Najwiekszy_iloczyn_liczb_podanych_na_wejsciu.lib /pdb:"C:\Users\marci\Desktop\Programy w C++\11. Najwiekszy iloczyn liczb podanych na wejsciu\cmake-build-debug\11__Najwiekszy_iloczyn_liczb_podanych_na_wejsciu.pdb" /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\11__Najwiekszy_iloczyn_liczb_podanych_na_wejsciu.dir\build: 11__Najwiekszy_iloczyn_liczb_podanych_na_wejsciu.exe

.PHONY : CMakeFiles\11__Najwiekszy_iloczyn_liczb_podanych_na_wejsciu.dir\build

CMakeFiles\11__Najwiekszy_iloczyn_liczb_podanych_na_wejsciu.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\11__Najwiekszy_iloczyn_liczb_podanych_na_wejsciu.dir\cmake_clean.cmake
.PHONY : CMakeFiles\11__Najwiekszy_iloczyn_liczb_podanych_na_wejsciu.dir\clean

CMakeFiles\11__Najwiekszy_iloczyn_liczb_podanych_na_wejsciu.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" "C:\Users\marci\Desktop\Programy w C++\11. Najwiekszy iloczyn liczb podanych na wejsciu" "C:\Users\marci\Desktop\Programy w C++\11. Najwiekszy iloczyn liczb podanych na wejsciu" "C:\Users\marci\Desktop\Programy w C++\11. Najwiekszy iloczyn liczb podanych na wejsciu\cmake-build-debug" "C:\Users\marci\Desktop\Programy w C++\11. Najwiekszy iloczyn liczb podanych na wejsciu\cmake-build-debug" "C:\Users\marci\Desktop\Programy w C++\11. Najwiekszy iloczyn liczb podanych na wejsciu\cmake-build-debug\CMakeFiles\11__Najwiekszy_iloczyn_liczb_podanych_na_wejsciu.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles\11__Najwiekszy_iloczyn_liczb_podanych_na_wejsciu.dir\depend
