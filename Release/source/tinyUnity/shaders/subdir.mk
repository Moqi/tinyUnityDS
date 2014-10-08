################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../source/tinyUnity/shaders/DiffuseShader.cpp \
../source/tinyUnity/shaders/StaticShader.cpp 

OBJS += \
./source/tinyUnity/shaders/DiffuseShader.o \
./source/tinyUnity/shaders/StaticShader.o 

CPP_DEPS += \
./source/tinyUnity/shaders/DiffuseShader.d \
./source/tinyUnity/shaders/StaticShader.d 


# Each subdirectory must supply rules for building sources it contributes
source/tinyUnity/shaders/%.o: ../source/tinyUnity/shaders/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: ARM devkitPro Mac OS X GCC C++ Compiler'
	arm-none-eabi-g++ -DARM9 -I/Users/awiebe/devkitPro/libnds/include -Os -fwhole-program -Wall -Wextra -Weffc++ -Wa,-adhlns="$@.lst" -fno-exceptions -fno-rtti -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -mcpu=arm9 -mthumb-interwork -g3 -gdwarf-2 -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


