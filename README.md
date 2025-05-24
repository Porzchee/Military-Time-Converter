# Military-Time-Converter
Simple C++ program that collects user input and converts military time (24hr) to standard time (12hr)

Program will ask the user to input a time in Military Time, and will validate the time from 0000-2359. Program will then ask for seconds between 0-59. It will then display the military time and the standard time.

Time.h and MilTime.h required files for running program.
Both files required to run the program because the MilTime class inherits from the Time class, which is defined in a separate file. The compiler needs to access the Time class definition to understand how MilTime works.
