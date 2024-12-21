# CPPBP | C++ BluePrint / C++ BoilerPlate

I like my C++ projects to have similar basic structures. This project provides simple and easy to use boiler plate to get started with C++ projects of any size.

Simple CMakeSetup with easy to use macros for efficient logging with [SPDLOG](https://github.com/gabime/spdlog).
 - ```cpp
   CPPBP_INFO("Print Numbers: {0} and {1}.", 420, 69);
   ```
 - ```CPP
   CPPBP_ERROR("Failed to {0} | {1} ", "resize window", error.c_str());
   ```
 - ```CPP
   CPPBP_WARN("Tried to print null value: {0}", neededValue);
   ```
 - ```CPP
   CPPBP_ASSERT(result, "Failed to process numbers. {0}", error.c_str());
   ```

