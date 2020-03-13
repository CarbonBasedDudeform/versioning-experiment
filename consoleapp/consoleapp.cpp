// consoleapp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "SomeSingleFileLibrary.h"
#include "SomeOtherSingleFileLibrary.h"

int main()
{
    //uncomment to switch to using the old version.
    namespace SomeSingleFileLibrary = SomeSingleFileLibrary::v1;
    std::cout << "Who runs the world: " << SomeSingleFileLibrary::whoRunsTheWorld() << std::endl;
    std::cout << "Who wrote when doves cry? " << SomeOtherSingleFileLibrary::getNameOfArtist() << std::endl;
}