################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../source/tinyUnity/audio/AudioClip.cpp \
../source/tinyUnity/audio/AudioListener.cpp \
../source/tinyUnity/audio/AudioSource.cpp 

OBJS += \
./source/tinyUnity/audio/AudioClip.o \
./source/tinyUnity/audio/AudioListener.o \
./source/tinyUnity/audio/AudioSource.o 

CPP_DEPS += \
./source/tinyUnity/audio/AudioClip.d \
./source/tinyUnity/audio/AudioListener.d \
./source/tinyUnity/audio/AudioSource.d 


# Each subdirectory must supply rules for building sources it contributes
source/tinyUnity/audio/%.o: ../source/tinyUnity/audio/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: ARM devkitPro Mac OS X GCC C++ Compiler'
	arm-none-eabi-g++ -DARM9 -I/Users/awiebe/devkitPro/libnds/include -Os -pedantic -Wall -Wextra -Wa,-adhlns="$@.lst" -fno-exceptions -fno-rtti -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -mcpu=arm9 -mthumb-interwork -g3 -gdwarf-2 -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


