Hello, in this repository I learned how to use the Unity and Cmock framework, and the makefile syntax.
* http://www.throwtheswitch.org/unity

I got acquainted with the syntax of makefiles and thanks to that **_I built my own build system_**
* In my opinion, the created building system is very easy and convenient

This example usage CubeMX to generate project template for STM32F103
* Of course, it is not necessary to use STM32CubeMX **_the build system for unit tests is independent._** STM32CubeMX only create template for microcontroller Project.
	* I am thinking of other microcontrollers like atmega, NXP, Renesas, MicroChip dk else ;) 

**_Created build system using non recursive makefile and is fully independent_**
* Evry one tested file may be compilated totally independent! :) 
	* It may be benefits

To download this repository tap in your command line:
* git clone --recursive https://github.com/trteodor/UnitTest_InEmbedded_Ex_OnSTM32F103RB

To compile this project i used:
* GNU Make 3.81
* ruby 2.7.4p191
* gcovr 5.0
* gcc 6.3.0

* These programs obviously had to be in the ("PATH") path of environment variables
* It means that it was possible to use this programs directly from the console


## Call "make" in the project localisation to show this information:

	Call: make help    -show this information
	How Use it:
	1. call: make all    -To compile output files for Microcontroller
	Its default target generated by CubeMX so was Decided to dont modify it
	------------------------------------
	2. Call: make test-ra       -To start compilation or fully recompilation all unit-test
	3. Call: make test-s        -Only to rebuild source files and start unit tests
	4. Call: make coverage      -To refresh coverage report
	------------------------------------
	5. call: make clean-test    -To delete all test result
	6. call: make clean-docs    -Remove Docs Folder (currently contain only unit-tests coverage report)
	6. call: make clean         -Remove build Folder (Carefully)


