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
PRJ_ROOT_DIR := $(WS_ROOT_DIR)/RollerPrototype



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
PROJECT_TARGETS = RollerPrototype/$(MODE_DIR)/RollerPrototype.out


#Rules

# RollerPrototype
ifeq ($(DEBUG_MODE),1)
RollerPrototype/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
RollerPrototype/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
RollerPrototype/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
RollerPrototype/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
RollerPrototype/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
RollerPrototype/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
RollerPrototype/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
RollerPrototype/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
RollerPrototype/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
RollerPrototype/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
RollerPrototype/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
RollerPrototype/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
RollerPrototype/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 
RollerPrototype/$(MODE_DIR)/% : IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 
RollerPrototype/$(MODE_DIR)/% : IDE_DEFINES = 
RollerPrototype/$(MODE_DIR)/% : PROJECT_TYPE = DKM
RollerPrototype/$(MODE_DIR)/% : DEFINES = 
RollerPrototype/$(MODE_DIR)/% : EXPAND_DBG = 0
RollerPrototype/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
RollerPrototype/$(MODE_DIR)/% : CPU = PPC603
RollerPrototype/$(MODE_DIR)/% : TOOL_FAMILY = gnu
RollerPrototype/$(MODE_DIR)/% : TOOL = gnu
RollerPrototype/$(MODE_DIR)/% : TOOL_PATH = 
RollerPrototype/$(MODE_DIR)/% : CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
RollerPrototype/$(MODE_DIR)/% : LIBPATH = 
RollerPrototype/$(MODE_DIR)/% : LIBS = 
RollerPrototype/$(MODE_DIR)/% : OBJ_DIR := RollerPrototype/$(MODE_DIR)

RollerPrototype/$(MODE_DIR)/Objects/RollerPrototype/ButtonReader.o : $(PRJ_ROOT_DIR)/ButtonReader.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


RollerPrototype/$(MODE_DIR)/Objects/RollerPrototype/MyRobot.o : $(PRJ_ROOT_DIR)/MyRobot.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


RollerPrototype/$(MODE_DIR)/Objects/RollerPrototype/ini.o : $(PRJ_ROOT_DIR)/ini.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


OBJECTS_RollerPrototype = RollerPrototype/$(MODE_DIR)/Objects/RollerPrototype/ButtonReader.o \
	 RollerPrototype/$(MODE_DIR)/Objects/RollerPrototype/MyRobot.o \
	 RollerPrototype/$(MODE_DIR)/Objects/RollerPrototype/ini.o

RollerPrototype/$(MODE_DIR)/RollerPrototype.out : $(OBJECTS_RollerPrototype)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@";rm -f "$@";nmppc $(OBJECTS_RollerPrototype) $(IDE_LIBRARIES) | tclsh $(WIND_BASE)/host/resource/hutils/tcl/munch.tcl -c ppc > $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc $(DEBUGFLAGS_Linker) $(CC_ARCH_SPEC) -fdollars-in-identifiers -Wall $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES)  -o $(OBJ_DIR)/ctdt.o -c $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc -r -nostdlib -Wl,-X -T $(WIND_BASE)/target/h/tool/gnu/ldscripts/link.OUT -o "$@" $(OBJ_DIR)/ctdt.o $(OBJECTS_RollerPrototype) $(IDE_LIBRARIES) $(LIBPATH) $(LIBS)  $(ADDED_LIBPATH) $(ADDED_LIBS) && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

RollerPrototype/$(MODE_DIR)/RollerPrototype_compile_file : $(FILE) ;

_clean :: RollerPrototype/$(MODE_DIR)/RollerPrototype_clean

RollerPrototype/$(MODE_DIR)/RollerPrototype_clean : 
	$(TRACE_FLAG)if [ -d "RollerPrototype" ]; then cd "RollerPrototype"; rm -rf $(MODE_DIR); fi

force : 

DEP_FILES := RollerPrototype/$(MODE_DIR)/Objects/RollerPrototype/ButtonReader.d RollerPrototype/$(MODE_DIR)/Objects/RollerPrototype/MyRobot.d RollerPrototype/$(MODE_DIR)/Objects/RollerPrototype/ini.d
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
