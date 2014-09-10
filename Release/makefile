################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include source/tinyUnity/shaders/subdir.mk
-include source/tinyUnity/physics/subdir.mk
-include source/tinyUnity/audio/subdir.mk
-include source/tinyUnity/subdir.mk
-include source/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
USER_OBJS \

SECONDARY_FLASH += \
tinyUnity.hex \

SECONDARY_LIST += \
tinyUnity.lst \

SECONDARY_SIZE += \
tinyUnity.siz \


# All Target
all: tinyUnity.a

# Tool invocations
	@echo 'No tool found that can build the extension specified with the build artifact name $@'
USER_OBJS: $(OBJS) $(USER_OBJS)
	@echo 'Invoking: ARM devkitPro Mac OS X GCC C++ Linker'
	arm-none-eabi-g++ -Wl,-Map,tinyUnity.map -mcpu=arm9 -mthumb-interwork -g3 -gdwarf-2 -o "USER_OBJS" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building: $@'
	@echo ' '

tinyUnity.hex: tinyUnity.a
	@echo 'Invoking: ARM devkitPro Mac OS X GNU Create Flash Image'
	arm-none-eabi-objcopy -O ihex tinyUnity.a  "tinyUnity.hex"
	@echo 'Finished building: $@'
	@echo ' '

tinyUnity.lst: tinyUnity.a
	@echo 'Invoking: ARM devkitPro Mac OS X GNU Create Listing'
	arm-none-eabi-objdump -h -S tinyUnity.a > "tinyUnity.lst"
	@echo 'Finished building: $@'
	@echo ' '

tinyUnity.siz: tinyUnity.a
	@echo 'Invoking: ARM devkitPro Mac OS X GNU Print Size'
	arm-none-eabi-size  --format=berkeley tinyUnity.a
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(OBJS)$(C_DEPS)$(SECONDARY_FLASH)$(CXX_DEPS)$(S_UPPER_DEPS)$(SECONDARY_LIST)$(SECONDARY_SIZE)$(C++_DEPS)$(ASM_DEPS)$(CC_DEPS)$(CPP_DEPS)$(EXECUTABLES)$(C_UPPER_DEPS) tinyUnity.a
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
