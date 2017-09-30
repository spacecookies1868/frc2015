# Wind River Workbench generated Makefile.
# Do not edit!!!
#
# The file ".wrmakefile" is the template used by the Wind River Workbench to
# generate the makefiles of this project. Add user-specific build targets and
# make rules only(!) in this project's ".wrmakefile" file. These will then be
# automatically dumped into the makefiles.

WIND_HOME := $(subst \,/,$(WIND_HOME))
WIND_BASE := $(subst \,/,$(WIND_BASE))
WIND_USR := $(subst \,/,$(WIND_USR))

all : pre_build main_all post_build

_clean ::
	@echo "make: removing targets and objects of `pwd`"

TRACE=0
TRACEON=$(TRACE:0=@)
TRACE_FLAG=$(TRACEON:1=)

MAKEFILE := Makefile

FLEXIBLE_BUILD := 1

BUILD_SPEC = PPC603gnu
DEBUG_MODE = 1
ifeq ($(DEBUG_MODE),1)
MODE_DIR := Debug
else
MODE_DIR := NonDebug
endif
OBJ_DIR := .
WS_ROOT_DIR := C:/WindRiver/workspace
PRJ_ROOT_DIR := $(WS_ROOT_DIR)/MecanumDriveTest



#Global Build Macros
PROJECT_TYPE = DKM
DEFINES = 
EXPAND_DBG = 0


#BuildSpec specific Build Macros
VX_CPU_FAMILY = ppc
CPU = PPC603
TOOL_FAMILY = gnu
TOOL = gnu
TOOL_PATH = 
CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 

IDE_DEFINES = 



#BuildTool flags
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
DEBUGFLAGS_C++-Compiler = -g
DEBUGFLAGS_Linker = -g
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif


#Project Targets
PROJECT_TARGETS = MecanumDriveTest/$(MODE_DIR)/MecanumDriveTest.out \
	 MecanumDriveTest_partialImage/$(MODE_DIR)/MecanumDriveTest_partialImage.out


#Rules

# MecanumDriveTest
ifeq ($(DEBUG_MODE),1)
MecanumDriveTest/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
MecanumDriveTest/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
MecanumDriveTest/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
MecanumDriveTest/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
MecanumDriveTest/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
MecanumDriveTest/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
MecanumDriveTest/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
MecanumDriveTest/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
MecanumDriveTest/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
MecanumDriveTest/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
MecanumDriveTest/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
MecanumDriveTest/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
MecanumDriveTest/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 
MecanumDriveTest/$(MODE_DIR)/% : IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 
MecanumDriveTest/$(MODE_DIR)/% : IDE_DEFINES = 
MecanumDriveTest/$(MODE_DIR)/% : PROJECT_TYPE = DKM
MecanumDriveTest/$(MODE_DIR)/% : DEFINES = 
MecanumDriveTest/$(MODE_DIR)/% : EXPAND_DBG = 0
MecanumDriveTest/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
MecanumDriveTest/$(MODE_DIR)/% : CPU = PPC603
MecanumDriveTest/$(MODE_DIR)/% : TOOL_FAMILY = gnu
MecanumDriveTest/$(MODE_DIR)/% : TOOL = gnu
MecanumDriveTest/$(MODE_DIR)/% : TOOL_PATH = 
MecanumDriveTest/$(MODE_DIR)/% : CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
MecanumDriveTest/$(MODE_DIR)/% : LIBPATH = 
MecanumDriveTest/$(MODE_DIR)/% : LIBS = 
MecanumDriveTest/$(MODE_DIR)/% : OBJ_DIR := MecanumDriveTest/$(MODE_DIR)

MecanumDriveTest/$(MODE_DIR)/Objects/MecanumDriveTest/Debugging.o : $(PRJ_ROOT_DIR)/Debugging.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


MecanumDriveTest/$(MODE_DIR)/Objects/MecanumDriveTest/MyRobot.o : $(PRJ_ROOT_DIR)/MyRobot.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


MecanumDriveTest/$(MODE_DIR)/Objects/MecanumDriveTest/ini.o : $(PRJ_ROOT_DIR)/ini.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


OBJECTS_MecanumDriveTest = MecanumDriveTest/$(MODE_DIR)/Objects/MecanumDriveTest/Debugging.o \
	 MecanumDriveTest/$(MODE_DIR)/Objects/MecanumDriveTest/MyRobot.o \
	 MecanumDriveTest/$(MODE_DIR)/Objects/MecanumDriveTest/ini.o

MecanumDriveTest/$(MODE_DIR)/MecanumDriveTest.out : $(OBJECTS_MecanumDriveTest)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@";rm -f "$@";nmppc $(OBJECTS_MecanumDriveTest) $(IDE_LIBRARIES) | tclsh $(WIND_BASE)/host/resource/hutils/tcl/munch.tcl -c ppc > $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc $(DEBUGFLAGS_Linker) $(CC_ARCH_SPEC) -fdollars-in-identifiers -Wall $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES)  -o $(OBJ_DIR)/ctdt.o -c $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc -r -nostdlib -Wl,-X -T $(WIND_BASE)/target/h/tool/gnu/ldscripts/link.OUT -o "$@" $(OBJ_DIR)/ctdt.o $(OBJECTS_MecanumDriveTest) $(IDE_LIBRARIES) $(LIBPATH) $(LIBS)  $(ADDED_LIBPATH) $(ADDED_LIBS) && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

MecanumDriveTest/$(MODE_DIR)/MecanumDriveTest_compile_file : $(FILE) ;

_clean :: MecanumDriveTest/$(MODE_DIR)/MecanumDriveTest_clean

MecanumDriveTest/$(MODE_DIR)/MecanumDriveTest_clean : 
	$(TRACE_FLAG)if [ -d "MecanumDriveTest" ]; then cd "MecanumDriveTest"; rm -rf $(MODE_DIR); fi


# MecanumDriveTest_partialImage
ifeq ($(DEBUG_MODE),1)
MecanumDriveTest_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
MecanumDriveTest_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
MecanumDriveTest_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
MecanumDriveTest_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
MecanumDriveTest_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
MecanumDriveTest_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
MecanumDriveTest_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
MecanumDriveTest_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
MecanumDriveTest_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
MecanumDriveTest_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
MecanumDriveTest_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
MecanumDriveTest_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
MecanumDriveTest_partialImage/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 
MecanumDriveTest_partialImage/$(MODE_DIR)/% : IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 
MecanumDriveTest_partialImage/$(MODE_DIR)/% : IDE_DEFINES = 
MecanumDriveTest_partialImage/$(MODE_DIR)/% : PROJECT_TYPE = DKM
MecanumDriveTest_partialImage/$(MODE_DIR)/% : DEFINES = 
MecanumDriveTest_partialImage/$(MODE_DIR)/% : EXPAND_DBG = 0
MecanumDriveTest_partialImage/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
MecanumDriveTest_partialImage/$(MODE_DIR)/% : CPU = PPC603
MecanumDriveTest_partialImage/$(MODE_DIR)/% : TOOL_FAMILY = gnu
MecanumDriveTest_partialImage/$(MODE_DIR)/% : TOOL = gnu
MecanumDriveTest_partialImage/$(MODE_DIR)/% : TOOL_PATH = 
MecanumDriveTest_partialImage/$(MODE_DIR)/% : CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
MecanumDriveTest_partialImage/$(MODE_DIR)/% : LIBPATH = 
MecanumDriveTest_partialImage/$(MODE_DIR)/% : LIBS = 
MecanumDriveTest_partialImage/$(MODE_DIR)/% : OBJ_DIR := MecanumDriveTest_partialImage/$(MODE_DIR)

MecanumDriveTest_partialImage/$(MODE_DIR)/Objects/MecanumDriveTest/Debugging.o : $(PRJ_ROOT_DIR)/Debugging.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


MecanumDriveTest_partialImage/$(MODE_DIR)/Objects/MecanumDriveTest/MyRobot.o : $(PRJ_ROOT_DIR)/MyRobot.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


MecanumDriveTest_partialImage/$(MODE_DIR)/Objects/MecanumDriveTest/ini.o : $(PRJ_ROOT_DIR)/ini.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


OBJECTS_MecanumDriveTest_partialImage = MecanumDriveTest_partialImage/$(MODE_DIR)/Objects/MecanumDriveTest/Debugging.o \
	 MecanumDriveTest_partialImage/$(MODE_DIR)/Objects/MecanumDriveTest/MyRobot.o \
	 MecanumDriveTest_partialImage/$(MODE_DIR)/Objects/MecanumDriveTest/ini.o

MecanumDriveTest_partialImage/$(MODE_DIR)/MecanumDriveTest_partialImage.out : $(OBJECTS_MecanumDriveTest_partialImage)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@";rm -f "$@";nmppc $(OBJECTS_MecanumDriveTest_partialImage) $(IDE_LIBRARIES) | tclsh $(WIND_BASE)/host/resource/hutils/tcl/munch.tcl -c ppc > $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc $(DEBUGFLAGS_Linker) $(CC_ARCH_SPEC) -fdollars-in-identifiers -Wall $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES)  -o $(OBJ_DIR)/ctdt.o -c $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc -r -nostdlib -Wl,-X -T $(WIND_BASE)/target/h/tool/gnu/ldscripts/link.OUT -o "$@" $(OBJ_DIR)/ctdt.o $(OBJECTS_MecanumDriveTest_partialImage) $(IDE_LIBRARIES) $(LIBPATH) $(LIBS)  $(ADDED_LIBPATH) $(ADDED_LIBS) && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

MecanumDriveTest_partialImage/$(MODE_DIR)/MecanumDriveTest_partialImage_compile_file : $(FILE) ;

_clean :: MecanumDriveTest_partialImage/$(MODE_DIR)/MecanumDriveTest_partialImage_clean

MecanumDriveTest_partialImage/$(MODE_DIR)/MecanumDriveTest_partialImage_clean : 
	$(TRACE_FLAG)if [ -d "MecanumDriveTest_partialImage" ]; then cd "MecanumDriveTest_partialImage"; rm -rf $(MODE_DIR); fi

force : 

DEP_FILES := MecanumDriveTest/$(MODE_DIR)/Objects/MecanumDriveTest/Debugging.d MecanumDriveTest/$(MODE_DIR)/Objects/MecanumDriveTest/MyRobot.d MecanumDriveTest/$(MODE_DIR)/Objects/MecanumDriveTest/ini.d \
	 MecanumDriveTest_partialImage/$(MODE_DIR)/Objects/MecanumDriveTest/Debugging.d MecanumDriveTest_partialImage/$(MODE_DIR)/Objects/MecanumDriveTest/MyRobot.d MecanumDriveTest_partialImage/$(MODE_DIR)/Objects/MecanumDriveTest/ini.d
-include $(DEP_FILES)



-include $(PRJ_ROOT_DIR)/*.makefile

-include *.makefile

main_all : external_build $(PROJECT_TARGETS)
	@echo "make: built targets of `pwd`"

# entry point for extending the build
external_build ::
	@echo ""

# main entry point for pre processing prior to the build
pre_build :: $(PRE_BUILD_STEP) generate_sources
	@echo ""

# entry point for generating sources prior to the build
generate_sources ::
	@echo ""

# main entry point for post processing after the build
post_build :: $(POST_BUILD_STEP) deploy_output
	@echo ""

# entry point for deploying output after the build
deploy_output ::
	@echo ""

clean :: external_clean $(CLEAN_STEP) _clean

# entry point for extending the build clean
external_clean ::
	@echo ""
