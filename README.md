# versioning-experiment
 a short program using namespaces or objects for versioning in C++
 
 conclusion:
  objects suck, namespaces are nicer

for example, [see this toy example single file library](https://github.com/CarbonBasedDudeform/versioning-experiment/blob/master/consoleapp/SomeSingleFileLibrary.h) that uses namespaces and allows switching between versions via
```cpp
namespace SomeSingleFileLibrary = SomeSingleFileLibrary::v1;
std::cout << "Who runs the world: " << SomeSingleFileLibrary::whoRunsTheWorld() << std::endl;
```

or 
```cpp
namespace SomeSingleFileLibrary = SomeSingleFileLibrary::v2;
std::cout << "Who runs the world: " << SomeSingleFileLibrary::whoRunsTheWorld() << std::endl;
```
or by default,
```cpp
std::cout << "Who runs the world: " << SomeSingleFileLibrary::whoRunsTheWorld() << std::endl;
```
