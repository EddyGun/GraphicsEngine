GLUS - Modern OpenGL, OpenGL ES and OpenVG Utilities:
-----------------------------------------------------

How to build GLUS:

1. Install Eclipse IDE for C/C++ Developers and a GNU Compiler Collection for your operating system.
   For building with Visual C++ 2012, CMake and the Windows SDK 8.1 are needed. 
2. Import GLUS as an existing project.
3. Set the build configuration in Eclipse to your operating system.
4. Build GLUS.

If you get build errors:

- Please make sure, that you install all the needed header and libraries.
- Pre-build libraries are located in the External project folder. If you want, replace these libraries with your own build.
- Libraries for the Raspberry PI platform are not included.
- Libraries for the i.MX6 platform are not included.
- Libraries for OpenGL ES and OpenVG are not included.


OpenGL ES SDKs and Libraries:

- OpenGL ES 3.1: PowerVR SDK 3.3 http://community.imgtec.com/developers/powervr-insider/graphics-sdk/
- OpenGL ES 3.0: PowerVR SDK 3.3 http://community.imgtec.com/developers/powervr-insider/graphics-sdk/
				 Mali OpenGL ES 3.0 Emulator http://malideveloper.arm.com/develop-for-mali/tools/opengl-es-3-0-emulator/
- OpenGL ES 2.0: PowerVR SDK 3.3 http://community.imgtec.com/developers/powervr-insider/graphics-sdk/
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

CPU:								ARMv6, ARMv7, x64, x86
GPU/Emulator (Optional):			AMD, ANGLE, Khronos, Mali, PowerVR, VC4, Vivante  
OS: 								Darwin, Linux, Windows
OpenGL/OpenGL ES/OpenVG (Optional):	GLES2, GLES3, GLES31, VG11
Compiler:							GCC, MinGW
Configuration:						Debug, Release

e.g. x86__Windows__MinGW_Debug or ARMv6_VC4_Linux_GLES2_GCC_Release


Yours Norbert Nopper


Changelog:

27.08.2014 - Cleaning up and refactoring code inside GLUS 2.0 draft version. No interface changes.

26.08.2014 - Draft version of GLUS 2.0.
