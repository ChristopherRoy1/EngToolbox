################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Catalogue.cpp \
../Equation.cpp \
../Subject.cpp \
../Topic.cpp 

OBJS += \
./Catalogue.o \
./Equation.o \
./Subject.o \
./Topic.o 

CPP_DEPS += \
./Catalogue.d \
./Equation.d \
./Subject.d \
./Topic.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/usr/include/c++/5.4.0/ -I/usr/include/ -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


