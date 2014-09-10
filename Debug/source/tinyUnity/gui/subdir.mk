################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../source/tinyUnity/gui/GUI.cpp 

OBJS += \
./source/tinyUnity/gui/GUI.o 

CPP_DEPS += \
./source/tinyUnity/gui/GUI.d 


# Each subdirectory must supply rules for building sources it contributes
source/tinyUnity/gui/%.o: ../source/tinyUnity/gui/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: ARM devkitPro Mac OS X GCC C++ Compiler'
	arm-none-eabi-g++ -DARM9 -I/Users/awiebe/devkitPro/libnds/include -I/Users/awiebe/devkitPro/devkitARM/arm-none-eabi/include/c++/4.8.2 -O0 -fpermissive -Wall -std=c++0x -Wa,-adhlns="$@.lst" -fno-exceptions -fno-rtti -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -mcpu=arm9 -mthumb-interwork -g3 -gdwarf-2 -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


