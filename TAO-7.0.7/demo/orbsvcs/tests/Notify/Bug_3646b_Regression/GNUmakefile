# -*- makefile -*-
#----------------------------------------------------------------------------
#       GNU ACE Workspace
#
# 
#
# This file was generated by MPC.  Any changes made directly to
# this file will be lost the next time it is generated.
#
# MPC Command:
# /home/johnny/DOC_ROOT/stage-8519/ACE_wrappers/bin/mwc.pl -type gnuace -exclude TAO/TAO_ACE.mwc -workers 12 -recurse -hierarchy -relative ACE_ROOT=/home/johnny/DOC_ROOT/stage-8519/ACE_wrappers -relative TAO_ROOT=/home/johnny/DOC_ROOT/stage-8519/ACE_wrappers/TAO
#
#----------------------------------------------------------------------------

MAKEFILE = GNUmakefile

ifeq ($(findstring k,$(MAKEFLAGS)),k)
  KEEP_GOING = -
endif

include $(ACE_ROOT)/include/makeinclude/macros.GNU

all: Bug_3646b_Regression_Lib Bug_3646b_Regression_Server

depend: Bug_3646b_Regression_Lib-depend Bug_3646b_Regression_Server-depend

REMAINING_TARGETS := $(filter-out all depend,$(TARGETS_NESTED:.nested=)) $(CUSTOM_TARGETS)
.PHONY: $(REMAINING_TARGETS)

$(REMAINING_TARGETS):
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.Bug_3646b_Regression_Lib $(@)
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.Bug_3646b_Regression_Server $(@)

.PHONY: Bug_3646b_Regression_Lib
Bug_3646b_Regression_Lib:
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.Bug_3646b_Regression_Lib all

.PHONY: Bug_3646b_Regression_Lib-depend
Bug_3646b_Regression_Lib-depend:
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.Bug_3646b_Regression_Lib depend

.PHONY: Bug_3646b_Regression_Server
Bug_3646b_Regression_Server: Bug_3646b_Regression_Lib
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.Bug_3646b_Regression_Server all

.PHONY: Bug_3646b_Regression_Server-depend
Bug_3646b_Regression_Server-depend:
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.Bug_3646b_Regression_Server depend

project_name_list:
	@echo Bug_3646b_Regression_Lib
	@echo Bug_3646b_Regression_Server
