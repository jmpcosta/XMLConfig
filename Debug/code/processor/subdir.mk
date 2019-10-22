################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../code/processor/processor.cpp 

OBJS += \
./code/processor/processor.o 

CPP_DEPS += \
./code/processor/processor.d 


# Each subdirectory must supply rules for building sources it contributes
code/processor/%.o: ../code/processor/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -DOSAPI_TRACING -I"${ARTA_DIR}/code" -I"${XERCES_DIR}/src" -I"${OSAPI_PLUS_DIR}/code" -O0 -g3 -Wall -c -fmessage-length=0 -v -fPIC -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


