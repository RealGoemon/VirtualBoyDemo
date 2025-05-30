############################################################################################################################################
###############################################  THIS FILE WAS AUTO-GENERATED - DO NOT EDIT  ###############################################
############################################################################################################################################

# VUEngine plugins which the project uses
PLUGINS							= vuengine//actors/LowPowerActor \
								  vuengine//other/LowPowerIndicator

# Optimization level
OPTIMIZATION					= O2

# Frame pointer's usage
# 0: Omit.
# 1: Use.
USE_FRAME_POINTER				= 0

# Prolog functions' usage
# 0: Omit.
# 1: Use.
USE_PROLOG_FUNCTIONS			= 0

# Sections' usage
# SRAM's usage
# You can use SRAM as WRAM. It adds, theoretically, 16MB of WRAM where all non initialized variables can be allocated.
# This feature is experimental and only works properly on emulators.
# Since only 8KB of SRAM is available on real carts, more than that will only work on emulators.
# To make effective any change to these options, the whole project needs to be recompiled.
# DRAM can be used as WRAM too, you must edit the linker script vb.ld to accommodate this
# taking into account that the Param Table's last address normally is 0x0003D800, where
# the WORLD attributes start.

# valid options are [/.data/.sdata/.dram_data/.sram_data]
MEMORY_POOL_SECTION					= .sdata
# valid options are [/.bss/.sbss/.dram_bss/.sram_bss]
NON_INITIALIZED_GLOBAL_DATA_SECTION	= .sbss
# valid options are [/.data/.sdata/.dram_data/.sram_data]
INITIALIZED_GLOBAL_DATA_SECTION		= .sdata
# valid options are [/.bss/.sbss/.dram_bss/.sram_bss]
STATIC_SINGLETONS_DATA_SECTION		= .dram_bss
# valid options are [/.bss/.sbss/.dram_bss/.sram_bss]
VIRTUAL_TABLES_DATA_SECTION			= .dram_bss

# Size of variables to be loaded in the .sdata section
# Not working properly because rosdata is used instead of rodata section
# MSDA_SIZE							= 0
