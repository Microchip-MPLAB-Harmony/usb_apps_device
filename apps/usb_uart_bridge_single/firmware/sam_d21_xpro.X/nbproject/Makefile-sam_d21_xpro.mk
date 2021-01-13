#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Include project Makefile
ifeq "${IGNORE_LOCAL}" "TRUE"
# do not include local makefile. User is passing all local related variables already
else
include Makefile
# Include makefile containing local settings
ifeq "$(wildcard nbproject/Makefile-local-sam_d21_xpro.mk)" "nbproject/Makefile-local-sam_d21_xpro.mk"
include nbproject/Makefile-local-sam_d21_xpro.mk
endif
endif

# Environment
MKDIR=gnumkdir -p
RM=rm -f 
MV=mv 
CP=cp 

# Macros
CND_CONF=sam_d21_xpro
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
IMAGE_TYPE=debug
OUTPUT_SUFFIX=elf
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=dist/${CND_CONF}/${IMAGE_TYPE}/sam_d21_xpro.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
else
IMAGE_TYPE=production
OUTPUT_SUFFIX=hex
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=dist/${CND_CONF}/${IMAGE_TYPE}/sam_d21_xpro.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
endif

ifeq ($(COMPARE_BUILD), true)
COMPARISON_BUILD=-mafrlcsj
else
COMPARISON_BUILD=
endif

ifdef SUB_IMAGE_ADDRESS

else
SUB_IMAGE_ADDRESS_COMMAND=
endif

# Object Directory
OBJECTDIR=build/${CND_CONF}/${IMAGE_TYPE}

# Distribution Directory
DISTDIR=dist/${CND_CONF}/${IMAGE_TYPE}

# Source Files Quoted if spaced
SOURCEFILES_QUOTED_IF_SPACED=../src/config/sam_d21_xpro/bsp/bsp.c ../src/config/sam_d21_xpro/driver/usb/usbfsv1/src/drv_usbfsv1.c ../src/config/sam_d21_xpro/driver/usb/usbfsv1/src/drv_usbfsv1_device.c ../src/config/sam_d21_xpro/peripheral/clock/plib_clock.c ../src/config/sam_d21_xpro/peripheral/dmac/plib_dmac.c ../src/config/sam_d21_xpro/peripheral/evsys/plib_evsys.c ../src/config/sam_d21_xpro/peripheral/nvic/plib_nvic.c ../src/config/sam_d21_xpro/peripheral/nvmctrl/plib_nvmctrl.c ../src/config/sam_d21_xpro/peripheral/port/plib_port.c ../src/config/sam_d21_xpro/peripheral/sercom/usart/plib_sercom1_usart.c ../src/config/sam_d21_xpro/peripheral/tc/plib_tc3.c ../src/config/sam_d21_xpro/stdio/xc32_monitor.c ../src/config/sam_d21_xpro/system/int/src/sys_int.c ../src/config/sam_d21_xpro/usb/src/usb_device.c ../src/config/sam_d21_xpro/usb/src/usb_device_cdc.c ../src/config/sam_d21_xpro/usb/src/usb_device_cdc_acm.c ../src/config/sam_d21_xpro/initialization.c ../src/config/sam_d21_xpro/interrupts.c ../src/config/sam_d21_xpro/exceptions.c ../src/config/sam_d21_xpro/startup_xc32.c ../src/config/sam_d21_xpro/libc_syscalls.c ../src/config/sam_d21_xpro/usb_device_init_data.c ../src/config/sam_d21_xpro/tasks.c ../src/main.c ../src/app_sam_d21_xpro.c

# Object Files Quoted if spaced
OBJECTFILES_QUOTED_IF_SPACED=${OBJECTDIR}/_ext/1011596308/bsp.o ${OBJECTDIR}/_ext/488633594/drv_usbfsv1.o ${OBJECTDIR}/_ext/488633594/drv_usbfsv1_device.o ${OBJECTDIR}/_ext/600686086/plib_clock.o ${OBJECTDIR}/_ext/2097617267/plib_dmac.o ${OBJECTDIR}/_ext/602835572/plib_evsys.o ${OBJECTDIR}/_ext/2097924074/plib_nvic.o ${OBJECTDIR}/_ext/1104193656/plib_nvmctrl.o ${OBJECTDIR}/_ext/2097977225/plib_port.o ${OBJECTDIR}/_ext/1136425057/plib_sercom1_usart.o ${OBJECTDIR}/_ext/480497801/plib_tc3.o ${OBJECTDIR}/_ext/1497164574/xc32_monitor.o ${OBJECTDIR}/_ext/189042961/sys_int.o ${OBJECTDIR}/_ext/1703922222/usb_device.o ${OBJECTDIR}/_ext/1703922222/usb_device_cdc.o ${OBJECTDIR}/_ext/1703922222/usb_device_cdc_acm.o ${OBJECTDIR}/_ext/128142748/initialization.o ${OBJECTDIR}/_ext/128142748/interrupts.o ${OBJECTDIR}/_ext/128142748/exceptions.o ${OBJECTDIR}/_ext/128142748/startup_xc32.o ${OBJECTDIR}/_ext/128142748/libc_syscalls.o ${OBJECTDIR}/_ext/128142748/usb_device_init_data.o ${OBJECTDIR}/_ext/128142748/tasks.o ${OBJECTDIR}/_ext/1360937237/main.o ${OBJECTDIR}/_ext/1360937237/app_sam_d21_xpro.o
POSSIBLE_DEPFILES=${OBJECTDIR}/_ext/1011596308/bsp.o.d ${OBJECTDIR}/_ext/488633594/drv_usbfsv1.o.d ${OBJECTDIR}/_ext/488633594/drv_usbfsv1_device.o.d ${OBJECTDIR}/_ext/600686086/plib_clock.o.d ${OBJECTDIR}/_ext/2097617267/plib_dmac.o.d ${OBJECTDIR}/_ext/602835572/plib_evsys.o.d ${OBJECTDIR}/_ext/2097924074/plib_nvic.o.d ${OBJECTDIR}/_ext/1104193656/plib_nvmctrl.o.d ${OBJECTDIR}/_ext/2097977225/plib_port.o.d ${OBJECTDIR}/_ext/1136425057/plib_sercom1_usart.o.d ${OBJECTDIR}/_ext/480497801/plib_tc3.o.d ${OBJECTDIR}/_ext/1497164574/xc32_monitor.o.d ${OBJECTDIR}/_ext/189042961/sys_int.o.d ${OBJECTDIR}/_ext/1703922222/usb_device.o.d ${OBJECTDIR}/_ext/1703922222/usb_device_cdc.o.d ${OBJECTDIR}/_ext/1703922222/usb_device_cdc_acm.o.d ${OBJECTDIR}/_ext/128142748/initialization.o.d ${OBJECTDIR}/_ext/128142748/interrupts.o.d ${OBJECTDIR}/_ext/128142748/exceptions.o.d ${OBJECTDIR}/_ext/128142748/startup_xc32.o.d ${OBJECTDIR}/_ext/128142748/libc_syscalls.o.d ${OBJECTDIR}/_ext/128142748/usb_device_init_data.o.d ${OBJECTDIR}/_ext/128142748/tasks.o.d ${OBJECTDIR}/_ext/1360937237/main.o.d ${OBJECTDIR}/_ext/1360937237/app_sam_d21_xpro.o.d

# Object Files
OBJECTFILES=${OBJECTDIR}/_ext/1011596308/bsp.o ${OBJECTDIR}/_ext/488633594/drv_usbfsv1.o ${OBJECTDIR}/_ext/488633594/drv_usbfsv1_device.o ${OBJECTDIR}/_ext/600686086/plib_clock.o ${OBJECTDIR}/_ext/2097617267/plib_dmac.o ${OBJECTDIR}/_ext/602835572/plib_evsys.o ${OBJECTDIR}/_ext/2097924074/plib_nvic.o ${OBJECTDIR}/_ext/1104193656/plib_nvmctrl.o ${OBJECTDIR}/_ext/2097977225/plib_port.o ${OBJECTDIR}/_ext/1136425057/plib_sercom1_usart.o ${OBJECTDIR}/_ext/480497801/plib_tc3.o ${OBJECTDIR}/_ext/1497164574/xc32_monitor.o ${OBJECTDIR}/_ext/189042961/sys_int.o ${OBJECTDIR}/_ext/1703922222/usb_device.o ${OBJECTDIR}/_ext/1703922222/usb_device_cdc.o ${OBJECTDIR}/_ext/1703922222/usb_device_cdc_acm.o ${OBJECTDIR}/_ext/128142748/initialization.o ${OBJECTDIR}/_ext/128142748/interrupts.o ${OBJECTDIR}/_ext/128142748/exceptions.o ${OBJECTDIR}/_ext/128142748/startup_xc32.o ${OBJECTDIR}/_ext/128142748/libc_syscalls.o ${OBJECTDIR}/_ext/128142748/usb_device_init_data.o ${OBJECTDIR}/_ext/128142748/tasks.o ${OBJECTDIR}/_ext/1360937237/main.o ${OBJECTDIR}/_ext/1360937237/app_sam_d21_xpro.o

# Source Files
SOURCEFILES=../src/config/sam_d21_xpro/bsp/bsp.c ../src/config/sam_d21_xpro/driver/usb/usbfsv1/src/drv_usbfsv1.c ../src/config/sam_d21_xpro/driver/usb/usbfsv1/src/drv_usbfsv1_device.c ../src/config/sam_d21_xpro/peripheral/clock/plib_clock.c ../src/config/sam_d21_xpro/peripheral/dmac/plib_dmac.c ../src/config/sam_d21_xpro/peripheral/evsys/plib_evsys.c ../src/config/sam_d21_xpro/peripheral/nvic/plib_nvic.c ../src/config/sam_d21_xpro/peripheral/nvmctrl/plib_nvmctrl.c ../src/config/sam_d21_xpro/peripheral/port/plib_port.c ../src/config/sam_d21_xpro/peripheral/sercom/usart/plib_sercom1_usart.c ../src/config/sam_d21_xpro/peripheral/tc/plib_tc3.c ../src/config/sam_d21_xpro/stdio/xc32_monitor.c ../src/config/sam_d21_xpro/system/int/src/sys_int.c ../src/config/sam_d21_xpro/usb/src/usb_device.c ../src/config/sam_d21_xpro/usb/src/usb_device_cdc.c ../src/config/sam_d21_xpro/usb/src/usb_device_cdc_acm.c ../src/config/sam_d21_xpro/initialization.c ../src/config/sam_d21_xpro/interrupts.c ../src/config/sam_d21_xpro/exceptions.c ../src/config/sam_d21_xpro/startup_xc32.c ../src/config/sam_d21_xpro/libc_syscalls.c ../src/config/sam_d21_xpro/usb_device_init_data.c ../src/config/sam_d21_xpro/tasks.c ../src/main.c ../src/app_sam_d21_xpro.c

# Pack Options 
PACK_COMMON_OPTIONS=-I "${CMSIS_DIR}/CMSIS/Core/Include"



CFLAGS=
ASFLAGS=
LDLIBSOPTIONS=

############# Tool locations ##########################################
# If you copy a project from one host to another, the path where the  #
# compiler is installed may be different.                             #
# If you open this project with MPLAB X in the new host, this         #
# makefile will be regenerated and the paths will be corrected.       #
#######################################################################
# fixDeps replaces a bunch of sed/cat/printf statements that slow down the build
FIXDEPS=fixDeps

.build-conf:  ${BUILD_SUBPROJECTS}
ifneq ($(INFORMATION_MESSAGE), )
	@echo $(INFORMATION_MESSAGE)
endif
	${MAKE}  -f nbproject/Makefile-sam_d21_xpro.mk dist/${CND_CONF}/${IMAGE_TYPE}/sam_d21_xpro.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}

MP_PROCESSOR_OPTION=ATSAMD21J18A
MP_LINKER_FILE_OPTION=,--script="..\src\config\sam_d21_xpro\ATSAMD21J18A.ld"
# ------------------------------------------------------------------------------------
# Rules for buildStep: assemble
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: assembleWithPreprocess
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: compile
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
${OBJECTDIR}/_ext/1011596308/bsp.o: ../src/config/sam_d21_xpro/bsp/bsp.c  .generated_files/6b353a2cdd631d3f7a2efbd20dcffbdda19a4551.flag .generated_files/7095a10d6a9ce5b674cac7a972746c30fac5d764.flag
	@${MKDIR} "${OBJECTDIR}/_ext/1011596308" 
	@${RM} ${OBJECTDIR}/_ext/1011596308/bsp.o.d 
	@${RM} ${OBJECTDIR}/_ext/1011596308/bsp.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -I"../src" -I"../src/config/sam_d21_xpro" -I"../src/packs/ATSAMD21J18A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/packs/CMSIS/" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1011596308/bsp.o.d" -o ${OBJECTDIR}/_ext/1011596308/bsp.o ../src/config/sam_d21_xpro/bsp/bsp.c    -DXPRJ_sam_d21_xpro=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd21a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/488633594/drv_usbfsv1.o: ../src/config/sam_d21_xpro/driver/usb/usbfsv1/src/drv_usbfsv1.c  .generated_files/666fc3aaf479046a8a3bc47d81d42bfc81933afd.flag .generated_files/7095a10d6a9ce5b674cac7a972746c30fac5d764.flag
	@${MKDIR} "${OBJECTDIR}/_ext/488633594" 
	@${RM} ${OBJECTDIR}/_ext/488633594/drv_usbfsv1.o.d 
	@${RM} ${OBJECTDIR}/_ext/488633594/drv_usbfsv1.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -I"../src" -I"../src/config/sam_d21_xpro" -I"../src/packs/ATSAMD21J18A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/packs/CMSIS/" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/488633594/drv_usbfsv1.o.d" -o ${OBJECTDIR}/_ext/488633594/drv_usbfsv1.o ../src/config/sam_d21_xpro/driver/usb/usbfsv1/src/drv_usbfsv1.c    -DXPRJ_sam_d21_xpro=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd21a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/488633594/drv_usbfsv1_device.o: ../src/config/sam_d21_xpro/driver/usb/usbfsv1/src/drv_usbfsv1_device.c  .generated_files/479dfa59636256a456a3bda4f53183d4e11bd37b.flag .generated_files/7095a10d6a9ce5b674cac7a972746c30fac5d764.flag
	@${MKDIR} "${OBJECTDIR}/_ext/488633594" 
	@${RM} ${OBJECTDIR}/_ext/488633594/drv_usbfsv1_device.o.d 
	@${RM} ${OBJECTDIR}/_ext/488633594/drv_usbfsv1_device.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -I"../src" -I"../src/config/sam_d21_xpro" -I"../src/packs/ATSAMD21J18A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/packs/CMSIS/" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/488633594/drv_usbfsv1_device.o.d" -o ${OBJECTDIR}/_ext/488633594/drv_usbfsv1_device.o ../src/config/sam_d21_xpro/driver/usb/usbfsv1/src/drv_usbfsv1_device.c    -DXPRJ_sam_d21_xpro=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd21a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/600686086/plib_clock.o: ../src/config/sam_d21_xpro/peripheral/clock/plib_clock.c  .generated_files/3b5d635e675a6fc2f0c636ad282ba6b2f02ec1e1.flag .generated_files/7095a10d6a9ce5b674cac7a972746c30fac5d764.flag
	@${MKDIR} "${OBJECTDIR}/_ext/600686086" 
	@${RM} ${OBJECTDIR}/_ext/600686086/plib_clock.o.d 
	@${RM} ${OBJECTDIR}/_ext/600686086/plib_clock.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -I"../src" -I"../src/config/sam_d21_xpro" -I"../src/packs/ATSAMD21J18A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/packs/CMSIS/" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/600686086/plib_clock.o.d" -o ${OBJECTDIR}/_ext/600686086/plib_clock.o ../src/config/sam_d21_xpro/peripheral/clock/plib_clock.c    -DXPRJ_sam_d21_xpro=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd21a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/2097617267/plib_dmac.o: ../src/config/sam_d21_xpro/peripheral/dmac/plib_dmac.c  .generated_files/41c32374d0fdf42d5a87b9dc8ae1081d953a6a8c.flag .generated_files/7095a10d6a9ce5b674cac7a972746c30fac5d764.flag
	@${MKDIR} "${OBJECTDIR}/_ext/2097617267" 
	@${RM} ${OBJECTDIR}/_ext/2097617267/plib_dmac.o.d 
	@${RM} ${OBJECTDIR}/_ext/2097617267/plib_dmac.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -I"../src" -I"../src/config/sam_d21_xpro" -I"../src/packs/ATSAMD21J18A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/packs/CMSIS/" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/2097617267/plib_dmac.o.d" -o ${OBJECTDIR}/_ext/2097617267/plib_dmac.o ../src/config/sam_d21_xpro/peripheral/dmac/plib_dmac.c    -DXPRJ_sam_d21_xpro=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd21a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/602835572/plib_evsys.o: ../src/config/sam_d21_xpro/peripheral/evsys/plib_evsys.c  .generated_files/60a6646248bcff1ee66442ca42ba778ef0fb9230.flag .generated_files/7095a10d6a9ce5b674cac7a972746c30fac5d764.flag
	@${MKDIR} "${OBJECTDIR}/_ext/602835572" 
	@${RM} ${OBJECTDIR}/_ext/602835572/plib_evsys.o.d 
	@${RM} ${OBJECTDIR}/_ext/602835572/plib_evsys.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -I"../src" -I"../src/config/sam_d21_xpro" -I"../src/packs/ATSAMD21J18A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/packs/CMSIS/" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/602835572/plib_evsys.o.d" -o ${OBJECTDIR}/_ext/602835572/plib_evsys.o ../src/config/sam_d21_xpro/peripheral/evsys/plib_evsys.c    -DXPRJ_sam_d21_xpro=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd21a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/2097924074/plib_nvic.o: ../src/config/sam_d21_xpro/peripheral/nvic/plib_nvic.c  .generated_files/6cef2d02441c547de69917d3baec7ad59db8f23f.flag .generated_files/7095a10d6a9ce5b674cac7a972746c30fac5d764.flag
	@${MKDIR} "${OBJECTDIR}/_ext/2097924074" 
	@${RM} ${OBJECTDIR}/_ext/2097924074/plib_nvic.o.d 
	@${RM} ${OBJECTDIR}/_ext/2097924074/plib_nvic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -I"../src" -I"../src/config/sam_d21_xpro" -I"../src/packs/ATSAMD21J18A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/packs/CMSIS/" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/2097924074/plib_nvic.o.d" -o ${OBJECTDIR}/_ext/2097924074/plib_nvic.o ../src/config/sam_d21_xpro/peripheral/nvic/plib_nvic.c    -DXPRJ_sam_d21_xpro=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd21a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1104193656/plib_nvmctrl.o: ../src/config/sam_d21_xpro/peripheral/nvmctrl/plib_nvmctrl.c  .generated_files/e76a0011fba852f970fe19fba131b42000e716c7.flag .generated_files/7095a10d6a9ce5b674cac7a972746c30fac5d764.flag
	@${MKDIR} "${OBJECTDIR}/_ext/1104193656" 
	@${RM} ${OBJECTDIR}/_ext/1104193656/plib_nvmctrl.o.d 
	@${RM} ${OBJECTDIR}/_ext/1104193656/plib_nvmctrl.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -I"../src" -I"../src/config/sam_d21_xpro" -I"../src/packs/ATSAMD21J18A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/packs/CMSIS/" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1104193656/plib_nvmctrl.o.d" -o ${OBJECTDIR}/_ext/1104193656/plib_nvmctrl.o ../src/config/sam_d21_xpro/peripheral/nvmctrl/plib_nvmctrl.c    -DXPRJ_sam_d21_xpro=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd21a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/2097977225/plib_port.o: ../src/config/sam_d21_xpro/peripheral/port/plib_port.c  .generated_files/f194d5df0a98745f6e18a3247ae1e8ee9bedbb62.flag .generated_files/7095a10d6a9ce5b674cac7a972746c30fac5d764.flag
	@${MKDIR} "${OBJECTDIR}/_ext/2097977225" 
	@${RM} ${OBJECTDIR}/_ext/2097977225/plib_port.o.d 
	@${RM} ${OBJECTDIR}/_ext/2097977225/plib_port.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -I"../src" -I"../src/config/sam_d21_xpro" -I"../src/packs/ATSAMD21J18A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/packs/CMSIS/" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/2097977225/plib_port.o.d" -o ${OBJECTDIR}/_ext/2097977225/plib_port.o ../src/config/sam_d21_xpro/peripheral/port/plib_port.c    -DXPRJ_sam_d21_xpro=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd21a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1136425057/plib_sercom1_usart.o: ../src/config/sam_d21_xpro/peripheral/sercom/usart/plib_sercom1_usart.c  .generated_files/f0ffc077f1a8fb81cb5e80a81d8b6c0160617e88.flag .generated_files/7095a10d6a9ce5b674cac7a972746c30fac5d764.flag
	@${MKDIR} "${OBJECTDIR}/_ext/1136425057" 
	@${RM} ${OBJECTDIR}/_ext/1136425057/plib_sercom1_usart.o.d 
	@${RM} ${OBJECTDIR}/_ext/1136425057/plib_sercom1_usart.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -I"../src" -I"../src/config/sam_d21_xpro" -I"../src/packs/ATSAMD21J18A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/packs/CMSIS/" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1136425057/plib_sercom1_usart.o.d" -o ${OBJECTDIR}/_ext/1136425057/plib_sercom1_usart.o ../src/config/sam_d21_xpro/peripheral/sercom/usart/plib_sercom1_usart.c    -DXPRJ_sam_d21_xpro=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd21a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/480497801/plib_tc3.o: ../src/config/sam_d21_xpro/peripheral/tc/plib_tc3.c  .generated_files/b95ecc1d561b8378752be66cb4b4f4a615b0c47c.flag .generated_files/7095a10d6a9ce5b674cac7a972746c30fac5d764.flag
	@${MKDIR} "${OBJECTDIR}/_ext/480497801" 
	@${RM} ${OBJECTDIR}/_ext/480497801/plib_tc3.o.d 
	@${RM} ${OBJECTDIR}/_ext/480497801/plib_tc3.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -I"../src" -I"../src/config/sam_d21_xpro" -I"../src/packs/ATSAMD21J18A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/packs/CMSIS/" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/480497801/plib_tc3.o.d" -o ${OBJECTDIR}/_ext/480497801/plib_tc3.o ../src/config/sam_d21_xpro/peripheral/tc/plib_tc3.c    -DXPRJ_sam_d21_xpro=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd21a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1497164574/xc32_monitor.o: ../src/config/sam_d21_xpro/stdio/xc32_monitor.c  .generated_files/71d94f42de4b56db508f928e50b23f3be007631c.flag .generated_files/7095a10d6a9ce5b674cac7a972746c30fac5d764.flag
	@${MKDIR} "${OBJECTDIR}/_ext/1497164574" 
	@${RM} ${OBJECTDIR}/_ext/1497164574/xc32_monitor.o.d 
	@${RM} ${OBJECTDIR}/_ext/1497164574/xc32_monitor.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -I"../src" -I"../src/config/sam_d21_xpro" -I"../src/packs/ATSAMD21J18A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/packs/CMSIS/" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1497164574/xc32_monitor.o.d" -o ${OBJECTDIR}/_ext/1497164574/xc32_monitor.o ../src/config/sam_d21_xpro/stdio/xc32_monitor.c    -DXPRJ_sam_d21_xpro=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd21a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/189042961/sys_int.o: ../src/config/sam_d21_xpro/system/int/src/sys_int.c  .generated_files/67e9bf006bafd2339602ed131531c10ba7937861.flag .generated_files/7095a10d6a9ce5b674cac7a972746c30fac5d764.flag
	@${MKDIR} "${OBJECTDIR}/_ext/189042961" 
	@${RM} ${OBJECTDIR}/_ext/189042961/sys_int.o.d 
	@${RM} ${OBJECTDIR}/_ext/189042961/sys_int.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -I"../src" -I"../src/config/sam_d21_xpro" -I"../src/packs/ATSAMD21J18A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/packs/CMSIS/" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/189042961/sys_int.o.d" -o ${OBJECTDIR}/_ext/189042961/sys_int.o ../src/config/sam_d21_xpro/system/int/src/sys_int.c    -DXPRJ_sam_d21_xpro=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd21a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1703922222/usb_device.o: ../src/config/sam_d21_xpro/usb/src/usb_device.c  .generated_files/270017524a552cbd4bbb388515d8ef2829183e3f.flag .generated_files/7095a10d6a9ce5b674cac7a972746c30fac5d764.flag
	@${MKDIR} "${OBJECTDIR}/_ext/1703922222" 
	@${RM} ${OBJECTDIR}/_ext/1703922222/usb_device.o.d 
	@${RM} ${OBJECTDIR}/_ext/1703922222/usb_device.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -I"../src" -I"../src/config/sam_d21_xpro" -I"../src/packs/ATSAMD21J18A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/packs/CMSIS/" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1703922222/usb_device.o.d" -o ${OBJECTDIR}/_ext/1703922222/usb_device.o ../src/config/sam_d21_xpro/usb/src/usb_device.c    -DXPRJ_sam_d21_xpro=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd21a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1703922222/usb_device_cdc.o: ../src/config/sam_d21_xpro/usb/src/usb_device_cdc.c  .generated_files/2c2f77a3ceec04dc634224062204c59ff25ec695.flag .generated_files/7095a10d6a9ce5b674cac7a972746c30fac5d764.flag
	@${MKDIR} "${OBJECTDIR}/_ext/1703922222" 
	@${RM} ${OBJECTDIR}/_ext/1703922222/usb_device_cdc.o.d 
	@${RM} ${OBJECTDIR}/_ext/1703922222/usb_device_cdc.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -I"../src" -I"../src/config/sam_d21_xpro" -I"../src/packs/ATSAMD21J18A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/packs/CMSIS/" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1703922222/usb_device_cdc.o.d" -o ${OBJECTDIR}/_ext/1703922222/usb_device_cdc.o ../src/config/sam_d21_xpro/usb/src/usb_device_cdc.c    -DXPRJ_sam_d21_xpro=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd21a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1703922222/usb_device_cdc_acm.o: ../src/config/sam_d21_xpro/usb/src/usb_device_cdc_acm.c  .generated_files/60303caa20497a7650ff12e1c3ab5db392ce9741.flag .generated_files/7095a10d6a9ce5b674cac7a972746c30fac5d764.flag
	@${MKDIR} "${OBJECTDIR}/_ext/1703922222" 
	@${RM} ${OBJECTDIR}/_ext/1703922222/usb_device_cdc_acm.o.d 
	@${RM} ${OBJECTDIR}/_ext/1703922222/usb_device_cdc_acm.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -I"../src" -I"../src/config/sam_d21_xpro" -I"../src/packs/ATSAMD21J18A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/packs/CMSIS/" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1703922222/usb_device_cdc_acm.o.d" -o ${OBJECTDIR}/_ext/1703922222/usb_device_cdc_acm.o ../src/config/sam_d21_xpro/usb/src/usb_device_cdc_acm.c    -DXPRJ_sam_d21_xpro=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd21a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/128142748/initialization.o: ../src/config/sam_d21_xpro/initialization.c  .generated_files/e2edd08c04e7099f1a89b574168985ea4d194a2c.flag .generated_files/7095a10d6a9ce5b674cac7a972746c30fac5d764.flag
	@${MKDIR} "${OBJECTDIR}/_ext/128142748" 
	@${RM} ${OBJECTDIR}/_ext/128142748/initialization.o.d 
	@${RM} ${OBJECTDIR}/_ext/128142748/initialization.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -I"../src" -I"../src/config/sam_d21_xpro" -I"../src/packs/ATSAMD21J18A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/packs/CMSIS/" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/128142748/initialization.o.d" -o ${OBJECTDIR}/_ext/128142748/initialization.o ../src/config/sam_d21_xpro/initialization.c    -DXPRJ_sam_d21_xpro=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd21a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/128142748/interrupts.o: ../src/config/sam_d21_xpro/interrupts.c  .generated_files/22086a2d6300064b475c1f0215e40b56f38754d0.flag .generated_files/7095a10d6a9ce5b674cac7a972746c30fac5d764.flag
	@${MKDIR} "${OBJECTDIR}/_ext/128142748" 
	@${RM} ${OBJECTDIR}/_ext/128142748/interrupts.o.d 
	@${RM} ${OBJECTDIR}/_ext/128142748/interrupts.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -I"../src" -I"../src/config/sam_d21_xpro" -I"../src/packs/ATSAMD21J18A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/packs/CMSIS/" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/128142748/interrupts.o.d" -o ${OBJECTDIR}/_ext/128142748/interrupts.o ../src/config/sam_d21_xpro/interrupts.c    -DXPRJ_sam_d21_xpro=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd21a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/128142748/exceptions.o: ../src/config/sam_d21_xpro/exceptions.c  .generated_files/d0cd9ac5ae2a17872bb37dce0c963272c6f77a50.flag .generated_files/7095a10d6a9ce5b674cac7a972746c30fac5d764.flag
	@${MKDIR} "${OBJECTDIR}/_ext/128142748" 
	@${RM} ${OBJECTDIR}/_ext/128142748/exceptions.o.d 
	@${RM} ${OBJECTDIR}/_ext/128142748/exceptions.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -I"../src" -I"../src/config/sam_d21_xpro" -I"../src/packs/ATSAMD21J18A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/packs/CMSIS/" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/128142748/exceptions.o.d" -o ${OBJECTDIR}/_ext/128142748/exceptions.o ../src/config/sam_d21_xpro/exceptions.c    -DXPRJ_sam_d21_xpro=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd21a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/128142748/startup_xc32.o: ../src/config/sam_d21_xpro/startup_xc32.c  .generated_files/eae2b53280e2d7c523aa5d16d0d6097a1020cc5a.flag .generated_files/7095a10d6a9ce5b674cac7a972746c30fac5d764.flag
	@${MKDIR} "${OBJECTDIR}/_ext/128142748" 
	@${RM} ${OBJECTDIR}/_ext/128142748/startup_xc32.o.d 
	@${RM} ${OBJECTDIR}/_ext/128142748/startup_xc32.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -I"../src" -I"../src/config/sam_d21_xpro" -I"../src/packs/ATSAMD21J18A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/packs/CMSIS/" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/128142748/startup_xc32.o.d" -o ${OBJECTDIR}/_ext/128142748/startup_xc32.o ../src/config/sam_d21_xpro/startup_xc32.c    -DXPRJ_sam_d21_xpro=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd21a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/128142748/libc_syscalls.o: ../src/config/sam_d21_xpro/libc_syscalls.c  .generated_files/21e8bd46ad3b73c45031f1a4c973f95b9db3175c.flag .generated_files/7095a10d6a9ce5b674cac7a972746c30fac5d764.flag
	@${MKDIR} "${OBJECTDIR}/_ext/128142748" 
	@${RM} ${OBJECTDIR}/_ext/128142748/libc_syscalls.o.d 
	@${RM} ${OBJECTDIR}/_ext/128142748/libc_syscalls.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -I"../src" -I"../src/config/sam_d21_xpro" -I"../src/packs/ATSAMD21J18A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/packs/CMSIS/" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/128142748/libc_syscalls.o.d" -o ${OBJECTDIR}/_ext/128142748/libc_syscalls.o ../src/config/sam_d21_xpro/libc_syscalls.c    -DXPRJ_sam_d21_xpro=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd21a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/128142748/usb_device_init_data.o: ../src/config/sam_d21_xpro/usb_device_init_data.c  .generated_files/a195fd41ba9a76c84f6c3c514851ed58d9e1b52e.flag .generated_files/7095a10d6a9ce5b674cac7a972746c30fac5d764.flag
	@${MKDIR} "${OBJECTDIR}/_ext/128142748" 
	@${RM} ${OBJECTDIR}/_ext/128142748/usb_device_init_data.o.d 
	@${RM} ${OBJECTDIR}/_ext/128142748/usb_device_init_data.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -I"../src" -I"../src/config/sam_d21_xpro" -I"../src/packs/ATSAMD21J18A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/packs/CMSIS/" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/128142748/usb_device_init_data.o.d" -o ${OBJECTDIR}/_ext/128142748/usb_device_init_data.o ../src/config/sam_d21_xpro/usb_device_init_data.c    -DXPRJ_sam_d21_xpro=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd21a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/128142748/tasks.o: ../src/config/sam_d21_xpro/tasks.c  .generated_files/bacfc7e034de030953499e2451ad28c9fda059a3.flag .generated_files/7095a10d6a9ce5b674cac7a972746c30fac5d764.flag
	@${MKDIR} "${OBJECTDIR}/_ext/128142748" 
	@${RM} ${OBJECTDIR}/_ext/128142748/tasks.o.d 
	@${RM} ${OBJECTDIR}/_ext/128142748/tasks.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -I"../src" -I"../src/config/sam_d21_xpro" -I"../src/packs/ATSAMD21J18A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/packs/CMSIS/" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/128142748/tasks.o.d" -o ${OBJECTDIR}/_ext/128142748/tasks.o ../src/config/sam_d21_xpro/tasks.c    -DXPRJ_sam_d21_xpro=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd21a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1360937237/main.o: ../src/main.c  .generated_files/e0f9fc0391b73a3606f54c70dde52fb03854d869.flag .generated_files/7095a10d6a9ce5b674cac7a972746c30fac5d764.flag
	@${MKDIR} "${OBJECTDIR}/_ext/1360937237" 
	@${RM} ${OBJECTDIR}/_ext/1360937237/main.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937237/main.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -I"../src" -I"../src/config/sam_d21_xpro" -I"../src/packs/ATSAMD21J18A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/packs/CMSIS/" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1360937237/main.o.d" -o ${OBJECTDIR}/_ext/1360937237/main.o ../src/main.c    -DXPRJ_sam_d21_xpro=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd21a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1360937237/app_sam_d21_xpro.o: ../src/app_sam_d21_xpro.c  .generated_files/9101de18e2ecafb1745122e40f07ab311185a53c.flag .generated_files/7095a10d6a9ce5b674cac7a972746c30fac5d764.flag
	@${MKDIR} "${OBJECTDIR}/_ext/1360937237" 
	@${RM} ${OBJECTDIR}/_ext/1360937237/app_sam_d21_xpro.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937237/app_sam_d21_xpro.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -I"../src" -I"../src/config/sam_d21_xpro" -I"../src/packs/ATSAMD21J18A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/packs/CMSIS/" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1360937237/app_sam_d21_xpro.o.d" -o ${OBJECTDIR}/_ext/1360937237/app_sam_d21_xpro.o ../src/app_sam_d21_xpro.c    -DXPRJ_sam_d21_xpro=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd21a" ${PACK_COMMON_OPTIONS} 
	
else
${OBJECTDIR}/_ext/1011596308/bsp.o: ../src/config/sam_d21_xpro/bsp/bsp.c  .generated_files/a1feba0f1c4d5d0a44e8296d418af5c7589f200f.flag .generated_files/7095a10d6a9ce5b674cac7a972746c30fac5d764.flag
	@${MKDIR} "${OBJECTDIR}/_ext/1011596308" 
	@${RM} ${OBJECTDIR}/_ext/1011596308/bsp.o.d 
	@${RM} ${OBJECTDIR}/_ext/1011596308/bsp.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -I"../src" -I"../src/config/sam_d21_xpro" -I"../src/packs/ATSAMD21J18A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/packs/CMSIS/" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1011596308/bsp.o.d" -o ${OBJECTDIR}/_ext/1011596308/bsp.o ../src/config/sam_d21_xpro/bsp/bsp.c    -DXPRJ_sam_d21_xpro=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd21a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/488633594/drv_usbfsv1.o: ../src/config/sam_d21_xpro/driver/usb/usbfsv1/src/drv_usbfsv1.c  .generated_files/858e2b5b22358ec6b988e6075c540d1e2bef4e8b.flag .generated_files/7095a10d6a9ce5b674cac7a972746c30fac5d764.flag
	@${MKDIR} "${OBJECTDIR}/_ext/488633594" 
	@${RM} ${OBJECTDIR}/_ext/488633594/drv_usbfsv1.o.d 
	@${RM} ${OBJECTDIR}/_ext/488633594/drv_usbfsv1.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -I"../src" -I"../src/config/sam_d21_xpro" -I"../src/packs/ATSAMD21J18A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/packs/CMSIS/" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/488633594/drv_usbfsv1.o.d" -o ${OBJECTDIR}/_ext/488633594/drv_usbfsv1.o ../src/config/sam_d21_xpro/driver/usb/usbfsv1/src/drv_usbfsv1.c    -DXPRJ_sam_d21_xpro=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd21a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/488633594/drv_usbfsv1_device.o: ../src/config/sam_d21_xpro/driver/usb/usbfsv1/src/drv_usbfsv1_device.c  .generated_files/622509332d96b0e653280a01fd89a77802608461.flag .generated_files/7095a10d6a9ce5b674cac7a972746c30fac5d764.flag
	@${MKDIR} "${OBJECTDIR}/_ext/488633594" 
	@${RM} ${OBJECTDIR}/_ext/488633594/drv_usbfsv1_device.o.d 
	@${RM} ${OBJECTDIR}/_ext/488633594/drv_usbfsv1_device.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -I"../src" -I"../src/config/sam_d21_xpro" -I"../src/packs/ATSAMD21J18A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/packs/CMSIS/" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/488633594/drv_usbfsv1_device.o.d" -o ${OBJECTDIR}/_ext/488633594/drv_usbfsv1_device.o ../src/config/sam_d21_xpro/driver/usb/usbfsv1/src/drv_usbfsv1_device.c    -DXPRJ_sam_d21_xpro=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd21a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/600686086/plib_clock.o: ../src/config/sam_d21_xpro/peripheral/clock/plib_clock.c  .generated_files/e98031deed6857add7e26a23f82dc599a72a12cb.flag .generated_files/7095a10d6a9ce5b674cac7a972746c30fac5d764.flag
	@${MKDIR} "${OBJECTDIR}/_ext/600686086" 
	@${RM} ${OBJECTDIR}/_ext/600686086/plib_clock.o.d 
	@${RM} ${OBJECTDIR}/_ext/600686086/plib_clock.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -I"../src" -I"../src/config/sam_d21_xpro" -I"../src/packs/ATSAMD21J18A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/packs/CMSIS/" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/600686086/plib_clock.o.d" -o ${OBJECTDIR}/_ext/600686086/plib_clock.o ../src/config/sam_d21_xpro/peripheral/clock/plib_clock.c    -DXPRJ_sam_d21_xpro=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd21a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/2097617267/plib_dmac.o: ../src/config/sam_d21_xpro/peripheral/dmac/plib_dmac.c  .generated_files/bf49ef2199a72c67fbcf0096dbcd2ce5b6fc75a8.flag .generated_files/7095a10d6a9ce5b674cac7a972746c30fac5d764.flag
	@${MKDIR} "${OBJECTDIR}/_ext/2097617267" 
	@${RM} ${OBJECTDIR}/_ext/2097617267/plib_dmac.o.d 
	@${RM} ${OBJECTDIR}/_ext/2097617267/plib_dmac.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -I"../src" -I"../src/config/sam_d21_xpro" -I"../src/packs/ATSAMD21J18A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/packs/CMSIS/" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/2097617267/plib_dmac.o.d" -o ${OBJECTDIR}/_ext/2097617267/plib_dmac.o ../src/config/sam_d21_xpro/peripheral/dmac/plib_dmac.c    -DXPRJ_sam_d21_xpro=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd21a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/602835572/plib_evsys.o: ../src/config/sam_d21_xpro/peripheral/evsys/plib_evsys.c  .generated_files/793a91b25d03a47694850bdcef2b0909d6c09432.flag .generated_files/7095a10d6a9ce5b674cac7a972746c30fac5d764.flag
	@${MKDIR} "${OBJECTDIR}/_ext/602835572" 
	@${RM} ${OBJECTDIR}/_ext/602835572/plib_evsys.o.d 
	@${RM} ${OBJECTDIR}/_ext/602835572/plib_evsys.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -I"../src" -I"../src/config/sam_d21_xpro" -I"../src/packs/ATSAMD21J18A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/packs/CMSIS/" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/602835572/plib_evsys.o.d" -o ${OBJECTDIR}/_ext/602835572/plib_evsys.o ../src/config/sam_d21_xpro/peripheral/evsys/plib_evsys.c    -DXPRJ_sam_d21_xpro=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd21a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/2097924074/plib_nvic.o: ../src/config/sam_d21_xpro/peripheral/nvic/plib_nvic.c  .generated_files/5d4d8a842144c970b37ea59257e95def93b91b5d.flag .generated_files/7095a10d6a9ce5b674cac7a972746c30fac5d764.flag
	@${MKDIR} "${OBJECTDIR}/_ext/2097924074" 
	@${RM} ${OBJECTDIR}/_ext/2097924074/plib_nvic.o.d 
	@${RM} ${OBJECTDIR}/_ext/2097924074/plib_nvic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -I"../src" -I"../src/config/sam_d21_xpro" -I"../src/packs/ATSAMD21J18A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/packs/CMSIS/" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/2097924074/plib_nvic.o.d" -o ${OBJECTDIR}/_ext/2097924074/plib_nvic.o ../src/config/sam_d21_xpro/peripheral/nvic/plib_nvic.c    -DXPRJ_sam_d21_xpro=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd21a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1104193656/plib_nvmctrl.o: ../src/config/sam_d21_xpro/peripheral/nvmctrl/plib_nvmctrl.c  .generated_files/8af0d9965d0d74204003881cfa8872812759ae75.flag .generated_files/7095a10d6a9ce5b674cac7a972746c30fac5d764.flag
	@${MKDIR} "${OBJECTDIR}/_ext/1104193656" 
	@${RM} ${OBJECTDIR}/_ext/1104193656/plib_nvmctrl.o.d 
	@${RM} ${OBJECTDIR}/_ext/1104193656/plib_nvmctrl.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -I"../src" -I"../src/config/sam_d21_xpro" -I"../src/packs/ATSAMD21J18A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/packs/CMSIS/" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1104193656/plib_nvmctrl.o.d" -o ${OBJECTDIR}/_ext/1104193656/plib_nvmctrl.o ../src/config/sam_d21_xpro/peripheral/nvmctrl/plib_nvmctrl.c    -DXPRJ_sam_d21_xpro=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd21a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/2097977225/plib_port.o: ../src/config/sam_d21_xpro/peripheral/port/plib_port.c  .generated_files/6805978958c3140c3e7c1d697723fe5117821f9e.flag .generated_files/7095a10d6a9ce5b674cac7a972746c30fac5d764.flag
	@${MKDIR} "${OBJECTDIR}/_ext/2097977225" 
	@${RM} ${OBJECTDIR}/_ext/2097977225/plib_port.o.d 
	@${RM} ${OBJECTDIR}/_ext/2097977225/plib_port.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -I"../src" -I"../src/config/sam_d21_xpro" -I"../src/packs/ATSAMD21J18A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/packs/CMSIS/" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/2097977225/plib_port.o.d" -o ${OBJECTDIR}/_ext/2097977225/plib_port.o ../src/config/sam_d21_xpro/peripheral/port/plib_port.c    -DXPRJ_sam_d21_xpro=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd21a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1136425057/plib_sercom1_usart.o: ../src/config/sam_d21_xpro/peripheral/sercom/usart/plib_sercom1_usart.c  .generated_files/baa4b7315e81a98ae61a5ffd1dc066825cfae095.flag .generated_files/7095a10d6a9ce5b674cac7a972746c30fac5d764.flag
	@${MKDIR} "${OBJECTDIR}/_ext/1136425057" 
	@${RM} ${OBJECTDIR}/_ext/1136425057/plib_sercom1_usart.o.d 
	@${RM} ${OBJECTDIR}/_ext/1136425057/plib_sercom1_usart.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -I"../src" -I"../src/config/sam_d21_xpro" -I"../src/packs/ATSAMD21J18A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/packs/CMSIS/" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1136425057/plib_sercom1_usart.o.d" -o ${OBJECTDIR}/_ext/1136425057/plib_sercom1_usart.o ../src/config/sam_d21_xpro/peripheral/sercom/usart/plib_sercom1_usart.c    -DXPRJ_sam_d21_xpro=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd21a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/480497801/plib_tc3.o: ../src/config/sam_d21_xpro/peripheral/tc/plib_tc3.c  .generated_files/d19534959cc27b4c3b32feed4e789f798a9a0577.flag .generated_files/7095a10d6a9ce5b674cac7a972746c30fac5d764.flag
	@${MKDIR} "${OBJECTDIR}/_ext/480497801" 
	@${RM} ${OBJECTDIR}/_ext/480497801/plib_tc3.o.d 
	@${RM} ${OBJECTDIR}/_ext/480497801/plib_tc3.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -I"../src" -I"../src/config/sam_d21_xpro" -I"../src/packs/ATSAMD21J18A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/packs/CMSIS/" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/480497801/plib_tc3.o.d" -o ${OBJECTDIR}/_ext/480497801/plib_tc3.o ../src/config/sam_d21_xpro/peripheral/tc/plib_tc3.c    -DXPRJ_sam_d21_xpro=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd21a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1497164574/xc32_monitor.o: ../src/config/sam_d21_xpro/stdio/xc32_monitor.c  .generated_files/9898c09dfc6cc82f4611362ba236c81bef434cd5.flag .generated_files/7095a10d6a9ce5b674cac7a972746c30fac5d764.flag
	@${MKDIR} "${OBJECTDIR}/_ext/1497164574" 
	@${RM} ${OBJECTDIR}/_ext/1497164574/xc32_monitor.o.d 
	@${RM} ${OBJECTDIR}/_ext/1497164574/xc32_monitor.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -I"../src" -I"../src/config/sam_d21_xpro" -I"../src/packs/ATSAMD21J18A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/packs/CMSIS/" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1497164574/xc32_monitor.o.d" -o ${OBJECTDIR}/_ext/1497164574/xc32_monitor.o ../src/config/sam_d21_xpro/stdio/xc32_monitor.c    -DXPRJ_sam_d21_xpro=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd21a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/189042961/sys_int.o: ../src/config/sam_d21_xpro/system/int/src/sys_int.c  .generated_files/b963a5b83e40d323a68b14d5d4ae77dba21f539f.flag .generated_files/7095a10d6a9ce5b674cac7a972746c30fac5d764.flag
	@${MKDIR} "${OBJECTDIR}/_ext/189042961" 
	@${RM} ${OBJECTDIR}/_ext/189042961/sys_int.o.d 
	@${RM} ${OBJECTDIR}/_ext/189042961/sys_int.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -I"../src" -I"../src/config/sam_d21_xpro" -I"../src/packs/ATSAMD21J18A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/packs/CMSIS/" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/189042961/sys_int.o.d" -o ${OBJECTDIR}/_ext/189042961/sys_int.o ../src/config/sam_d21_xpro/system/int/src/sys_int.c    -DXPRJ_sam_d21_xpro=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd21a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1703922222/usb_device.o: ../src/config/sam_d21_xpro/usb/src/usb_device.c  .generated_files/26d723bc405a3aa304a906659c18b91141d75dc4.flag .generated_files/7095a10d6a9ce5b674cac7a972746c30fac5d764.flag
	@${MKDIR} "${OBJECTDIR}/_ext/1703922222" 
	@${RM} ${OBJECTDIR}/_ext/1703922222/usb_device.o.d 
	@${RM} ${OBJECTDIR}/_ext/1703922222/usb_device.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -I"../src" -I"../src/config/sam_d21_xpro" -I"../src/packs/ATSAMD21J18A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/packs/CMSIS/" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1703922222/usb_device.o.d" -o ${OBJECTDIR}/_ext/1703922222/usb_device.o ../src/config/sam_d21_xpro/usb/src/usb_device.c    -DXPRJ_sam_d21_xpro=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd21a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1703922222/usb_device_cdc.o: ../src/config/sam_d21_xpro/usb/src/usb_device_cdc.c  .generated_files/c8c44a04f05bbead44d214fd873438c4543c59c1.flag .generated_files/7095a10d6a9ce5b674cac7a972746c30fac5d764.flag
	@${MKDIR} "${OBJECTDIR}/_ext/1703922222" 
	@${RM} ${OBJECTDIR}/_ext/1703922222/usb_device_cdc.o.d 
	@${RM} ${OBJECTDIR}/_ext/1703922222/usb_device_cdc.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -I"../src" -I"../src/config/sam_d21_xpro" -I"../src/packs/ATSAMD21J18A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/packs/CMSIS/" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1703922222/usb_device_cdc.o.d" -o ${OBJECTDIR}/_ext/1703922222/usb_device_cdc.o ../src/config/sam_d21_xpro/usb/src/usb_device_cdc.c    -DXPRJ_sam_d21_xpro=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd21a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1703922222/usb_device_cdc_acm.o: ../src/config/sam_d21_xpro/usb/src/usb_device_cdc_acm.c  .generated_files/191f5ca4161498f0265ca819651a92a5b6223b91.flag .generated_files/7095a10d6a9ce5b674cac7a972746c30fac5d764.flag
	@${MKDIR} "${OBJECTDIR}/_ext/1703922222" 
	@${RM} ${OBJECTDIR}/_ext/1703922222/usb_device_cdc_acm.o.d 
	@${RM} ${OBJECTDIR}/_ext/1703922222/usb_device_cdc_acm.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -I"../src" -I"../src/config/sam_d21_xpro" -I"../src/packs/ATSAMD21J18A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/packs/CMSIS/" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1703922222/usb_device_cdc_acm.o.d" -o ${OBJECTDIR}/_ext/1703922222/usb_device_cdc_acm.o ../src/config/sam_d21_xpro/usb/src/usb_device_cdc_acm.c    -DXPRJ_sam_d21_xpro=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd21a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/128142748/initialization.o: ../src/config/sam_d21_xpro/initialization.c  .generated_files/948e55aec8c8ee069892ff156301b2c949c546ed.flag .generated_files/7095a10d6a9ce5b674cac7a972746c30fac5d764.flag
	@${MKDIR} "${OBJECTDIR}/_ext/128142748" 
	@${RM} ${OBJECTDIR}/_ext/128142748/initialization.o.d 
	@${RM} ${OBJECTDIR}/_ext/128142748/initialization.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -I"../src" -I"../src/config/sam_d21_xpro" -I"../src/packs/ATSAMD21J18A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/packs/CMSIS/" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/128142748/initialization.o.d" -o ${OBJECTDIR}/_ext/128142748/initialization.o ../src/config/sam_d21_xpro/initialization.c    -DXPRJ_sam_d21_xpro=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd21a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/128142748/interrupts.o: ../src/config/sam_d21_xpro/interrupts.c  .generated_files/c9093cf063a302ed25981d26fd00a015c3cdd021.flag .generated_files/7095a10d6a9ce5b674cac7a972746c30fac5d764.flag
	@${MKDIR} "${OBJECTDIR}/_ext/128142748" 
	@${RM} ${OBJECTDIR}/_ext/128142748/interrupts.o.d 
	@${RM} ${OBJECTDIR}/_ext/128142748/interrupts.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -I"../src" -I"../src/config/sam_d21_xpro" -I"../src/packs/ATSAMD21J18A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/packs/CMSIS/" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/128142748/interrupts.o.d" -o ${OBJECTDIR}/_ext/128142748/interrupts.o ../src/config/sam_d21_xpro/interrupts.c    -DXPRJ_sam_d21_xpro=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd21a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/128142748/exceptions.o: ../src/config/sam_d21_xpro/exceptions.c  .generated_files/e79c14cc93d82cd13b0ef7708beb8fc35696c549.flag .generated_files/7095a10d6a9ce5b674cac7a972746c30fac5d764.flag
	@${MKDIR} "${OBJECTDIR}/_ext/128142748" 
	@${RM} ${OBJECTDIR}/_ext/128142748/exceptions.o.d 
	@${RM} ${OBJECTDIR}/_ext/128142748/exceptions.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -I"../src" -I"../src/config/sam_d21_xpro" -I"../src/packs/ATSAMD21J18A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/packs/CMSIS/" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/128142748/exceptions.o.d" -o ${OBJECTDIR}/_ext/128142748/exceptions.o ../src/config/sam_d21_xpro/exceptions.c    -DXPRJ_sam_d21_xpro=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd21a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/128142748/startup_xc32.o: ../src/config/sam_d21_xpro/startup_xc32.c  .generated_files/bfde302246bfcff05470b7c7ae919da1989c58ef.flag .generated_files/7095a10d6a9ce5b674cac7a972746c30fac5d764.flag
	@${MKDIR} "${OBJECTDIR}/_ext/128142748" 
	@${RM} ${OBJECTDIR}/_ext/128142748/startup_xc32.o.d 
	@${RM} ${OBJECTDIR}/_ext/128142748/startup_xc32.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -I"../src" -I"../src/config/sam_d21_xpro" -I"../src/packs/ATSAMD21J18A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/packs/CMSIS/" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/128142748/startup_xc32.o.d" -o ${OBJECTDIR}/_ext/128142748/startup_xc32.o ../src/config/sam_d21_xpro/startup_xc32.c    -DXPRJ_sam_d21_xpro=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd21a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/128142748/libc_syscalls.o: ../src/config/sam_d21_xpro/libc_syscalls.c  .generated_files/d1ba1bb4bdfeede3a0b92345e0e933179b8ebd73.flag .generated_files/7095a10d6a9ce5b674cac7a972746c30fac5d764.flag
	@${MKDIR} "${OBJECTDIR}/_ext/128142748" 
	@${RM} ${OBJECTDIR}/_ext/128142748/libc_syscalls.o.d 
	@${RM} ${OBJECTDIR}/_ext/128142748/libc_syscalls.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -I"../src" -I"../src/config/sam_d21_xpro" -I"../src/packs/ATSAMD21J18A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/packs/CMSIS/" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/128142748/libc_syscalls.o.d" -o ${OBJECTDIR}/_ext/128142748/libc_syscalls.o ../src/config/sam_d21_xpro/libc_syscalls.c    -DXPRJ_sam_d21_xpro=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd21a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/128142748/usb_device_init_data.o: ../src/config/sam_d21_xpro/usb_device_init_data.c  .generated_files/15ef217dec002da8a17ec2deb13a85ec9044d830.flag .generated_files/7095a10d6a9ce5b674cac7a972746c30fac5d764.flag
	@${MKDIR} "${OBJECTDIR}/_ext/128142748" 
	@${RM} ${OBJECTDIR}/_ext/128142748/usb_device_init_data.o.d 
	@${RM} ${OBJECTDIR}/_ext/128142748/usb_device_init_data.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -I"../src" -I"../src/config/sam_d21_xpro" -I"../src/packs/ATSAMD21J18A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/packs/CMSIS/" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/128142748/usb_device_init_data.o.d" -o ${OBJECTDIR}/_ext/128142748/usb_device_init_data.o ../src/config/sam_d21_xpro/usb_device_init_data.c    -DXPRJ_sam_d21_xpro=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd21a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/128142748/tasks.o: ../src/config/sam_d21_xpro/tasks.c  .generated_files/48ad5869b80a20a7a9d833bd44b525e4bd0d5ca1.flag .generated_files/7095a10d6a9ce5b674cac7a972746c30fac5d764.flag
	@${MKDIR} "${OBJECTDIR}/_ext/128142748" 
	@${RM} ${OBJECTDIR}/_ext/128142748/tasks.o.d 
	@${RM} ${OBJECTDIR}/_ext/128142748/tasks.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -I"../src" -I"../src/config/sam_d21_xpro" -I"../src/packs/ATSAMD21J18A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/packs/CMSIS/" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/128142748/tasks.o.d" -o ${OBJECTDIR}/_ext/128142748/tasks.o ../src/config/sam_d21_xpro/tasks.c    -DXPRJ_sam_d21_xpro=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd21a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1360937237/main.o: ../src/main.c  .generated_files/2e44a7912bb2a6344d4c6bb1bffd9bb051997883.flag .generated_files/7095a10d6a9ce5b674cac7a972746c30fac5d764.flag
	@${MKDIR} "${OBJECTDIR}/_ext/1360937237" 
	@${RM} ${OBJECTDIR}/_ext/1360937237/main.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937237/main.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -I"../src" -I"../src/config/sam_d21_xpro" -I"../src/packs/ATSAMD21J18A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/packs/CMSIS/" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1360937237/main.o.d" -o ${OBJECTDIR}/_ext/1360937237/main.o ../src/main.c    -DXPRJ_sam_d21_xpro=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd21a" ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1360937237/app_sam_d21_xpro.o: ../src/app_sam_d21_xpro.c  .generated_files/aa7c6b34557150b35f666a78fa9a87b51539be40.flag .generated_files/7095a10d6a9ce5b674cac7a972746c30fac5d764.flag
	@${MKDIR} "${OBJECTDIR}/_ext/1360937237" 
	@${RM} ${OBJECTDIR}/_ext/1360937237/app_sam_d21_xpro.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937237/app_sam_d21_xpro.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fdata-sections -O1 -I"../src" -I"../src/config/sam_d21_xpro" -I"../src/packs/ATSAMD21J18A_DFP" -I"../src/packs/CMSIS/CMSIS/Core/Include" -I"../src/packs/CMSIS/" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1360937237/app_sam_d21_xpro.o.d" -o ${OBJECTDIR}/_ext/1360937237/app_sam_d21_xpro.o ../src/app_sam_d21_xpro.c    -DXPRJ_sam_d21_xpro=$(CND_CONF)    $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}/samd21a" ${PACK_COMMON_OPTIONS} 
	
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: compileCPP
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: link
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
dist/${CND_CONF}/${IMAGE_TYPE}/sam_d21_xpro.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk    ../src/config/sam_d21_xpro/ATSAMD21J18A.ld
	@${MKDIR} dist/${CND_CONF}/${IMAGE_TYPE} 
	${MP_CC} $(MP_EXTRA_LD_PRE) -g   -mprocessor=$(MP_PROCESSOR_OPTION) -mno-device-startup-code -o dist/${CND_CONF}/${IMAGE_TYPE}/sam_d21_xpro.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX} ${OBJECTFILES_QUOTED_IF_SPACED}          -DXPRJ_sam_d21_xpro=$(CND_CONF)    $(COMPARISON_BUILD)  -Wl,--defsym=__MPLAB_BUILD=1$(MP_EXTRA_LD_POST)$(MP_LINKER_FILE_OPTION),--defsym=__ICD2RAM=1,--defsym=__MPLAB_DEBUG=1,--defsym=__DEBUG=1,-D=__DEBUG_D,--defsym=_min_heap_size=512,--gc-sections,-Map="${DISTDIR}/${PROJECTNAME}.${IMAGE_TYPE}.map",--memorysummary,dist/${CND_CONF}/${IMAGE_TYPE}/memoryfile.xml -mdfp="${DFP_DIR}/samd21a"
	
else
dist/${CND_CONF}/${IMAGE_TYPE}/sam_d21_xpro.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk   ../src/config/sam_d21_xpro/ATSAMD21J18A.ld
	@${MKDIR} dist/${CND_CONF}/${IMAGE_TYPE} 
	${MP_CC} $(MP_EXTRA_LD_PRE)  -mprocessor=$(MP_PROCESSOR_OPTION) -mno-device-startup-code -o dist/${CND_CONF}/${IMAGE_TYPE}/sam_d21_xpro.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX} ${OBJECTFILES_QUOTED_IF_SPACED}          -DXPRJ_sam_d21_xpro=$(CND_CONF)    $(COMPARISON_BUILD)  -Wl,--defsym=__MPLAB_BUILD=1$(MP_EXTRA_LD_POST)$(MP_LINKER_FILE_OPTION),--defsym=_min_heap_size=512,--gc-sections,-Map="${DISTDIR}/${PROJECTNAME}.${IMAGE_TYPE}.map",--memorysummary,dist/${CND_CONF}/${IMAGE_TYPE}/memoryfile.xml -mdfp="${DFP_DIR}/samd21a"
	${MP_CC_DIR}\\xc32-bin2hex dist/${CND_CONF}/${IMAGE_TYPE}/sam_d21_xpro.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX} 
endif


# Subprojects
.build-subprojects:


# Subprojects
.clean-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r build/sam_d21_xpro
	${RM} -r dist/sam_d21_xpro
