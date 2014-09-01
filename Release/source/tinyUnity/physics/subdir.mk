################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../source/tinyUnity/physics/AABB.cpp \
../source/tinyUnity/physics/AABBNode.cpp \
../source/tinyUnity/physics/Box.cpp \
../source/tinyUnity/physics/BoxCollider.cpp \
../source/tinyUnity/physics/Collider.cpp \
../source/tinyUnity/physics/Physics.cpp \
../source/tinyUnity/physics/Ray.cpp \
../source/tinyUnity/physics/Rigidbody.cpp \
../source/tinyUnity/physics/SphereCollider.cpp 

OBJS += \
./source/tinyUnity/physics/AABB.o \
./source/tinyUnity/physics/AABBNode.o \
./source/tinyUnity/physics/Box.o \
./source/tinyUnity/physics/BoxCollider.o \
./source/tinyUnity/physics/Collider.o \
./source/tinyUnity/physics/Physics.o \
./source/tinyUnity/physics/Ray.o \
./source/tinyUnity/physics/Rigidbody.o \
./source/tinyUnity/physics/SphereCollider.o 

CPP_DEPS += \
./source/tinyUnity/physics/AABB.d \
./source/tinyUnity/physics/AABBNode.d \
./source/tinyUnity/physics/Box.d \
./source/tinyUnity/physics/BoxCollider.d \
./source/tinyUnity/physics/Collider.d \
./source/tinyUnity/physics/Physics.d \
./source/tinyUnity/physics/Ray.d \
./source/tinyUnity/physics/Rigidbody.d \
./source/tinyUnity/physics/SphereCollider.d 


# Each subdirectory must supply rules for building sources it contributes
source/tinyUnity/physics/%.o: ../source/tinyUnity/physics/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: ARM devkitPro Mac OS X GCC C++ Compiler'
	arm-none-eabi-g++ -DARM9 -I/Users/awiebe/devkitPro/libnds/include -Os -pedantic -Wall -Wextra -Wa,-adhlns="$@.lst" -fno-exceptions -fno-rtti -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -mcpu=arm9 -mthumb-interwork -g3 -gdwarf-2 -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


