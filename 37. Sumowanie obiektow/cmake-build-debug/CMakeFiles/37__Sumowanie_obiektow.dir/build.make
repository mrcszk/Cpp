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
CMAKE_SOURCE_DIR = "C:\Users\marci\Desktop\Programy w C++\37. Sumowanie obiektow"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\marci\Desktop\Programy w C++\37. Sumowanie obiektow\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles\37__Sumowanie_obiektow.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\37__Sumowanie_obiektow.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\37__Sumowanie_obiektow.dir\flags.make

CMakeFiles\37__Sumowanie_obiektow.dir\main.cpp.obj: CMakeFiles\37__Sumowanie_obiektow.dir\flags.make
CMakeFiles\37__Sumowanie_obiektow.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\marci\Desktop\Programy w C++\37. Sumowanie obiektow\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/37__Sumowanie_obiektow.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\37__Sumowanie_obiektow.dir\main.cpp.obj /FdCMakeFiles\37__Sumowanie_obiektow.dir\ /FS -c "C:\Users\marci\Desktop\Programy w C++\37. Sumowanie obiektow\main.cpp"
<<

CMakeFiles\37__Sumowanie_obiektow.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/37__Sumowanie_obiektow.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe > CMakeFiles\37__Sumowanie_obiektow.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\marci\Desktop\Programy w C++\37. Sumowanie obiektow\main.cpp"
<<

CMakeFiles\37__Sumowanie_obiektow.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/37__Sumowanie_obiektow.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\37__Sumowanie_obiektow.dir\main.cpp.s /c "C:\Users\marci\Desktop\Programy w C++\37. Sumowanie obiektow\main.cpp"
<<

# Object files for target 37__Sumowanie_obiektow
37__Sumowanie_obiektow_OBJECTS = \
"CMakeFiles\37__Sumowanie_obiektow.dir\main.cpp.obj"

# External object files for target 37__Sumowanie_obiektow
37__Sumowanie_obiektow_EXTERNAL_OBJECTS =

37__Sumowanie_obiektow.exe: CMakeFiles\37__Sumowanie_obiektow.dir\main.cpp.obj
37__Sumowanie_obiektow.exe: CMakeFiles\37__Sumowanie_obiektow.dir\build.make
37__Sumowanie_obiektow.exe: CMakeFiles\37__Sumowanie_obiektow.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\marci\Desktop\Programy w C++\37. Sumowanie obiektow\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 37__Sumowanie_obiektow.exe"
	"C:\Program Files\JetBrains\CLion 2018.3.4\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\37__Sumowanie_obiektow.dir --manifests  -- C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\37__Sumowanie_obiektow.dir\objects1.rsp @<<
 /out:37__Sumowanie_obiektow.exe /implib:37__Sumowanie_obiektow.lib /pdb:"C:\Users\marci\Desktop\Programy w C++\37. Sumowanie obiektow\cmake-build-debug\37__Sumowanie_obiektow.pdb" /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\37__Sumowanie_obiektow.dir\build: 37__Sumowanie_obiektow.exe

.PHONY : CMakeFiles\37__Sumowanie_obiektow.dir\build

CMakeFiles\37__Sumowanie_obiektow.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\37__Sumowanie_obiektow.dir\cmake_clean.cmake
.PHONY : CMakeFiles\37__Sumowanie_obiektow.dir\clean

CMakeFiles\37__Sumowanie_obiektow.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" "C:\Users\marci\Desktop\Programy w C++\37. Sumowanie obiektow" "C:\Users\marci\Desktop\Programy w C++\37. Sumowanie obiektow" "C:\Users\marci\Desktop\Programy w C++\37. Sumowanie obiektow\cmake-build-debug" "C:\Users\marci\Desktop\Programy w C++\37. Sumowanie obiektow\cmake-build-debug" "C:\Users\marci\Desktop\Programy w C++\37. Sumowanie obiektow\cmake-build-debug\CMakeFiles\37__Sumowanie_obiektow.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles\37__Sumowanie_obiektow.dir\depend
