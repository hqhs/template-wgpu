C++ project template for WebGPU development
==================

Sister project of [template](https://github.com/hqhs/template) -- I prototype a lot, I wanted something to help me start new projects quickly.

Initially project is supported for Windows, OSX, Linux and Web. I plan to investigate mobile platforms hopefully in the future.

Project structure 
==================

- cmake -- (god I hate build systems) reusable functions to compile things
- lib -- dependencies
- engine -- contains code shared between your project, generally reusable
- src -- actual functionality
- bin -- entry point for binaries (e.g. game, editor, etc.)
- tests -- all shapes and colors of testing
- assets -- self explanatory

Dependencies 
==================

- WebGPU implementation: Dawn or wgpu
- glfw for window management
- wgpu3glfw to connect the two
- imgui to develop UI tooling

Naming
==================

- 'simple' for primitive types
- 'ClassName' (pascal case) for types/structures
- 'functionName' (camel case) for functions/methods
- 'variable_name' (snake case) for variables

Memory management
==================

ZAII

Types of allocators:
- stack allocator
Utility allocators 
- Pool (the most popular one)
- Scratch
- frame 

General advices and links
==================

- [Learn WebGPU for C++](https://eliemichel.github.io/LearnWebGPU)
- [Learn wgpu (rust tutorial)](https://sotrh.github.io/learn-wgpu/)
- [Custom allocators (Generally great resource for engine development)](https://bitsquid.blogspot.com/2010/09/custom-memory-allocation-in-c.html)
- [Casey Muratori's handmade hero course](https://www.youtube.com/watch?v=I5fNrmQYeuI&list=PLnuhp3Xd9PYTt6svyQPyRO_AAuMWGxPzU)
