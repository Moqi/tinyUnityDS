################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../source/tinyUnity/AssetDatabase.cpp \
../source/tinyUnity/Debug.cpp \
../source/tinyUnity/Engine.cpp \
../source/tinyUnity/GameObject.cpp \
../source/tinyUnity/Material.cpp \
../source/tinyUnity/Mesh.cpp \
../source/tinyUnity/Object.cpp \
../source/tinyUnity/PhysicsMaster.cpp \
../source/tinyUnity/RenderMaster.cpp \
../source/tinyUnity/Renderer.cpp \
../source/tinyUnity/SceneRenderer.cpp \
../source/tinyUnity/ShaderMaterial.cpp \
../source/tinyUnity/StaticMaterial.cpp \
../source/tinyUnity/SubMesh.cpp \
../source/tinyUnity/Texture.cpp \
../source/tinyUnity/Texture2D.cpp \
../source/tinyUnity/Transform.cpp \
../source/tinyUnity/Vector3.cpp 

OBJS += \
./source/tinyUnity/AssetDatabase.o \
./source/tinyUnity/Debug.o \
./source/tinyUnity/Engine.o \
./source/tinyUnity/GameObject.o \
./source/tinyUnity/Material.o \
./source/tinyUnity/Mesh.o \
./source/tinyUnity/Object.o \
./source/tinyUnity/PhysicsMaster.o \
./source/tinyUnity/RenderMaster.o \
./source/tinyUnity/Renderer.o \
./source/tinyUnity/SceneRenderer.o \
./source/tinyUnity/ShaderMaterial.o \
./source/tinyUnity/StaticMaterial.o \
./source/tinyUnity/SubMesh.o \
./source/tinyUnity/Texture.o \
./source/tinyUnity/Texture2D.o \
./source/tinyUnity/Transform.o \
./source/tinyUnity/Vector3.o 

CPP_DEPS += \
./source/tinyUnity/AssetDatabase.d \
./source/tinyUnity/Debug.d \
./source/tinyUnity/Engine.d \
./source/tinyUnity/GameObject.d \
./source/tinyUnity/Material.d \
./source/tinyUnity/Mesh.d \
./source/tinyUnity/Object.d \
./source/tinyUnity/PhysicsMaster.d \
./source/tinyUnity/RenderMaster.d \
./source/tinyUnity/Renderer.d \
./source/tinyUnity/SceneRenderer.d \
./source/tinyUnity/ShaderMaterial.d \
./source/tinyUnity/StaticMaterial.d \
./source/tinyUnity/SubMesh.d \
./source/tinyUnity/Texture.d \
./source/tinyUnity/Texture2D.d \
./source/tinyUnity/Transform.d \
./source/tinyUnity/Vector3.d 


# Each subdirectory must supply rules for building sources it contributes
source/tinyUnity/%.o: ../source/tinyUnity/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: ARM devkitPro Mac OS X GCC C++ Compiler'
	arm-none-eabi-g++ -DARM9 -I/Users/awiebe/devkitPro/libnds/include -O0 -pedantic -Wall -Wextra -Wa,-adhlns="$@.lst" -fno-exceptions -fno-rtti -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -mcpu=arm9 -mthumb-interwork -g3 -gdwarf-2 -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


