# OOP-Project-FlappyBird
Inspired by the Flappy Bird Game this is our Final Project for Object Oriented Programming & Design Methodologies course offered by Habib University in Fall of 2023. It makes use of SDL libraries for the GUI and tests basic OOP concepts like abstraction, operator overloading, runtime polymorphism, inheritance etc.

Group Members: Syeda Samah Daniyal, Rubab Shah, Shifa Shah
How to Compile:
**THE FILES ABOVE ARE MODIFIED TO RUN ON WINDOWS. YOU MAY NEED TO MAKE THE FOLLOWING CHANGES**

Windows:
Open this folder in VSCode and then in the terminal copy the commands for compiling and running the game.

Compiling:
g++ *.cpp -IC:\mingw_dev_lib\include\SDL2 -LC:\mingw_dev_lib\lib -w -lmingw32 -lSDL2main -lSDL2 -lSDL2_image -lSDL2_mixer

Running the game:
.\a.exe

Mac:
Open this folder in VSCode, make the following changes in the files and then in the terminal copy the command for compiling and running the game.

Change #include<SDL.h> to #include<SDL2.h> 
Change #include<SDL_image.h> to #include<SDL2/SDL_image.h>
Change #include<SDL_mixer.h> to #include<SDL2/SDL_mixer.h>

Compiling:
g++ *.cpp -std=c++11 -lSDL2 -lSDL2_image -lSDL2_mixer

Running the game:
./a.out
