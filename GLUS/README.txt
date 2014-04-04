OpenGL Utilities (GLUS):
------------------------

How to build GLUS:

1. Install Eclipse IDE for C/C++ Developers and a GNU Compiler Collection for your operating system.
   For building with Visual C++ 2010, CMake and the Windows SDK 8.1 are needed. 
2. Extract this ZIP file and set GLUS-master folder as your Eclipse workspace.
3. Import GLUS as an existing project.
4. Set the build configuration in Eclipse to your operating system.
5. Build GLUS.

If you get build errors:

- Please make sure, that you install all the needed header and libraries.
- Pre-build libraries are located in the External project folder. If you want, replace these libraries with your own build.
- Libraries for the Raspberry PI platform are not included.
- Libraries for the i.MX6 platform are not included.

OpenGL ES SDKs and Libraries:

- OpenGL ES 3.0: PowerVR SDK 3.1 http://www.imgtec.com/powervr/insider/sdkdownloads/
				 Mali OpenGL ES 3.0 Emulator http://malideveloper.arm.com/develop-for-mali/tools/opengl-es-3-0-emulator/
- OpenGL ES 2.0: PowerVR SDK 3.1 http://www.imgtec.com/powervr/insider/sdkdownloads/
				 Mali OpenGL ES 2.0 Emulator http://malideveloper.arm.com/develop-for-mali/tools/opengl-es-2-0-emulator/
				 ANGLE http://code.google.com/p/angleproject/
				 AMD OpenGL ES 2.0 SDK http://developer.amd.com/tools-and-sdks/graphics-development/amd-opengl-es-sdk/

OpenVG SDKs and Libraries:

- OpenVG 1.1: Sample Implementation http://www.khronos.org/registry/vg/

SDKs/Libraries/Images used for Raspberry Pi:

- GCC Toolchain for Raspberry Pi https://github.com/raspberrypi/tools
- SDL 1.2 http://www.libsdl.org/download-1.2.php
- Raspbian "wheezy" http://www.raspberrypi.org/downloads

SDKs/Libraries/Images used for i.MX6:

- i.MX 6 Series Software and Development Tool Resources http://www.freescale.com/webapp/sps/site/prod_summary.jsp?code=IMX6_SW

Build configuration naming:

[CPU]_[GPU]_[OS]_[OpenGL]_[Compiler]_[Configuration]

CPU:						ARMv6, ARMv7, x64, x86
GPU/Emulator (Optional):	AMD, ANGLE, Mali, PowerVR, VC4, Vivante, Khronos 
OS: 						Darwin, Linux, Windows
OpenGL/OpenVG (Optional):	GLES2, GLES3, VG11
Compiler:					GCC, MinGW
Configuration:				Debug, Release

e.g. x86__Windows__MinGW_Debug or ARMv6_VC4_Linux_GLES2_GCC_Release

04.04.2014 Norbert Nopper (norbert@nopper.tv)

Changelog:

04.04.2013 - Added OpenVG profile.

16.02.2014 - Updated README

09.02.2014 - Removed MSVC build profile. Use CMakeLists.txt to create Visual C++ project

30.01.2014 - Added latest PowerVR SDK (3.2)

05.12.2013 - Added GLUS for i.MX6
		   - Fixed some bugs in GLUS 

26.11.2013 - Added GPU Emulator Option

10.11.2013 - Updated README

04.11.2013 - Fixed doxygen issues

28.10.2013 - Added GLES3 X11 profile

19.10.2013 - Added latest GLFW (3.0.3)

14.08.2013 - Added latest PowerVR SDK (3.1)

06.06.2013 - Added latest GLFW (2.7.9)

07.05.2013 - Added improved wavefront object file loader. Now supports groups and materials.

29.04.2012 - Added adjacent geometry creation

11.04.2012 - Added latest GLFW (2.7.8)

10.04.2013 - Added screenshot functionality

09.04.2013 - Added possibility to save a TGA image

10.03.2013 - Added new line primitive (grid)

04.03.2013 - Changed build configuration naming

27.02.2013 - Finalized GLUS for Raspberry Pi

22.02.2013 - Added GLUS for Raspberry Pi

13.02.2013 - Added GLUS for OpenGL ES 2.0

28.01.2013 - Added GLUS for OpenGL ES 3.0

21.12.2012 - Added latest GLFW (2.7.7)
		   - Added function to copy shapes
		   - Fixed out of bounds in euler angles gathering
		   - Added GLFW terminate function when creation of windows fails

03.10.2012 - Minor bug fixes and improvements in GLUS
           - GLUS is now 1.0 Final!

31.08.2012 - Added latest version of GLEW (2.9.0)
           - Added more build configurations
           - Added OpenGL 4.3 features for GLUS
		   - Refactoring and bug fixing in GLUS. GLUS is now in 1.0 Beta!
		   - Added documenation(!) for GLUS
