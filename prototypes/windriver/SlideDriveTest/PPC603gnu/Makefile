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
PRJ_ROOT_DIR := $(WS_ROOT_DIR)/SlideDriveTest



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
PROJECT_TARGETS = SlideDriveTest/$(MODE_DIR)/SlideDriveTest.out \
	 SlideDriveTest_partialImage/$(MODE_DIR)/SlideDriveTest_partialImage.out


#Rules

# SlideDriveTest
ifeq ($(DEBUG_MODE),1)
SlideDriveTest/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
SlideDriveTest/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
SlideDriveTest/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
SlideDriveTest/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
SlideDriveTest/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
SlideDriveTest/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
SlideDriveTest/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
SlideDriveTest/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
SlideDriveTest/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
SlideDriveTest/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
SlideDriveTest/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
SlideDriveTest/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
SlideDriveTest/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 
SlideDriveTest/$(MODE_DIR)/% : IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 
SlideDriveTest/$(MODE_DIR)/% : IDE_DEFINES = 
SlideDriveTest/$(MODE_DIR)/% : PROJECT_TYPE = DKM
SlideDriveTest/$(MODE_DIR)/% : DEFINES = 
SlideDriveTest/$(MODE_DIR)/% : EXPAND_DBG = 0
SlideDriveTest/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
SlideDriveTest/$(MODE_DIR)/% : CPU = PPC603
SlideDriveTest/$(MODE_DIR)/% : TOOL_FAMILY = gnu
SlideDriveTest/$(MODE_DIR)/% : TOOL = gnu
SlideDriveTest/$(MODE_DIR)/% : TOOL_PATH = 
SlideDriveTest/$(MODE_DIR)/% : CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
SlideDriveTest/$(MODE_DIR)/% : LIBPATH = 
SlideDriveTest/$(MODE_DIR)/% : LIBS = 
SlideDriveTest/$(MODE_DIR)/% : OBJ_DIR := SlideDriveTest/$(MODE_DIR)

SlideDriveTest/$(MODE_DIR)/Objects/SlideDriveTest/MyRobot.o : $(PRJ_ROOT_DIR)/MyRobot.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


OBJECTS_SlideDriveTest = SlideDriveTest/$(MODE_DIR)/Objects/SlideDriveTest/MyRobot.o

SlideDriveTest/$(MODE_DIR)/SlideDriveTest.out : $(OBJECTS_SlideDriveTest)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@";rm -f "$@";nmppc $(OBJECTS_SlideDriveTest) $(IDE_LIBRARIES) | tclsh $(WIND_BASE)/host/resource/hutils/tcl/munch.tcl -c ppc > $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc $(DEBUGFLAGS_Linker) $(CC_ARCH_SPEC) -fdollars-in-identifiers -Wall $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES)  -o $(OBJ_DIR)/ctdt.o -c $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc -r -nostdlib -Wl,-X -T $(WIND_BASE)/target/h/tool/gnu/ldscripts/link.OUT -o "$@" $(OBJ_DIR)/ctdt.o $(OBJECTS_SlideDriveTest) $(IDE_LIBRARIES) $(LIBPATH) $(LIBS)  $(ADDED_LIBPATH) $(ADDED_LIBS) && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

SlideDriveTest/$(MODE_DIR)/SlideDriveTest_compile_file : $(FILE) ;

_clean :: SlideDriveTest/$(MODE_DIR)/SlideDriveTest_clean

SlideDriveTest/$(MODE_DIR)/SlideDriveTest_clean : 
	$(TRACE_FLAG)if [ -d "SlideDriveTest" ]; then cd "SlideDriveTest"; rm -rf $(MODE_DIR); fi


# SlideDriveTest_partialImage
ifeq ($(DEBUG_MODE),1)
SlideDriveTest_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
SlideDriveTest_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
SlideDriveTest_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
SlideDriveTest_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
SlideDriveTest_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
SlideDriveTest_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
SlideDriveTest_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
SlideDriveTest_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
SlideDriveTest_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
SlideDriveTest_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
SlideDriveTest_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
SlideDriveTest_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
SlideDriveTest_partialImage/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 
SlideDriveTest_partialImage/$(MODE_DIR)/% : IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 
SlideDriveTest_partialImage/$(MODE_DIR)/% : IDE_DEFINES = 
SlideDriveTest_partialImage/$(MODE_DIR)/% : PROJECT_TYPE = DKM
SlideDriveTest_partialImage/$(MODE_DIR)/% : DEFINES = 
SlideDriveTest_partialImage/$(MODE_DIR)/% : EXPAND_DBG = 0
SlideDriveTest_partialImage/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
SlideDriveTest_partialImage/$(MODE_DIR)/% : CPU = PPC603
SlideDriveTest_partialImage/$(MODE_DIR)/% : TOOL_FAMILY = gnu
SlideDriveTest_partialImage/$(MODE_DIR)/% : TOOL = gnu
SlideDriveTest_partialImage/$(MODE_DIR)/% : TOOL_PATH = 
SlideDriveTest_partialImage/$(MODE_DIR)/% : CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
SlideDriveTest_partialImage/$(MODE_DIR)/% : LIBPATH = 
SlideDriveTest_partialImage/$(MODE_DIR)/% : LIBS = 
SlideDriveTest_partialImage/$(MODE_DIR)/% : OBJ_DIR := SlideDriveTest_partialImage/$(MODE_DIR)

SlideDriveTest_partialImage/$(MODE_DIR)/Objects/SlideDriveTest/MyRobot.o : $(PRJ_ROOT_DIR)/MyRobot.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


OBJECTS_SlideDriveTest_partialImage = SlideDriveTest_partialImage/$(MODE_DIR)/Objects/SlideDriveTest/MyRobot.o

SlideDriveTest_partialImage/$(MODE_DIR)/SlideDriveTest_partialImage.out : $(OBJECTS_SlideDriveTest_partialImage)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@";rm -f "$@";nmppc $(OBJECTS_SlideDriveTest_partialImage) $(IDE_LIBRARIES) | tclsh $(WIND_BASE)/host/resource/hutils/tcl/munch.tcl -c ppc > $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc $(DEBUGFLAGS_Linker) $(CC_ARCH_SPEC) -fdollars-in-identifiers -Wall $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES)  -o $(OBJ_DIR)/ctdt.o -c $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc -r -nostdlib -Wl,-X -T $(WIND_BASE)/target/h/tool/gnu/ldscripts/link.OUT -o "$@" $(OBJ_DIR)/ctdt.o $(OBJECTS_SlideDriveTest_partialImage) $(IDE_LIBRARIES) $(LIBPATH) $(LIBS)  $(ADDED_LIBPATH) $(ADDED_LIBS) && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

SlideDriveTest_partialImage/$(MODE_DIR)/SlideDriveTest_partialImage_compile_file : $(FILE) ;

_clean :: SlideDriveTest_partialImage/$(MODE_DIR)/SlideDriveTest_partialImage_clean

SlideDriveTest_partialImage/$(MODE_DIR)/SlideDriveTest_partialImage_clean : 
	$(TRACE_FLAG)if [ -d "SlideDriveTest_partialImage" ]; then cd "SlideDriveTest_partialImage"; rm -rf $(MODE_DIR); fi

force : 

DEP_FILES := SlideDriveTest/$(MODE_DIR)/Objects/SlideDriveTest/MyRobot.d SlideDriveTest_partialImage/$(MODE_DIR)/Objects/SlideDriveTest/MyRobot.d
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
