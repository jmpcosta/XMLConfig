################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../code/xmlParser.cpp \
../code/xmlProc.cpp 

OBJS += \
./code/xmlParser.o \
./code/xmlProc.o 

CPP_DEPS += \
./code/xmlParser.d \
./code/xmlProc.d 


# Each subdirectory must supply rules for building sources it contributes
code/%.o: ../code/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -DOSAPI_TRACING -DOSAPI_TRACE_CLIENT -I"${ARTA_DIR}/code" -I"${XERCES_DIR}/src" -I"${OSAPI_PLUS_DIR}/code" -O0 -g3 -Wall -c -fmessage-length=0 -v -fPIC -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


