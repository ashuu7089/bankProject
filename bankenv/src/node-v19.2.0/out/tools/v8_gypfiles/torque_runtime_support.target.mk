# This file is generated by gyp; do not edit.

TOOLSET := target
TARGET := torque_runtime_support
### Rules for final target.
$(obj).target/tools/v8_gypfiles/torque_runtime_support.stamp: TOOLSET := $(TOOLSET)
$(obj).target/tools/v8_gypfiles/torque_runtime_support.stamp:  FORCE_DO_CMD
	$(call do_cmd,touch)

all_deps += $(obj).target/tools/v8_gypfiles/torque_runtime_support.stamp
# Add target alias
.PHONY: torque_runtime_support
torque_runtime_support: $(obj).target/tools/v8_gypfiles/torque_runtime_support.stamp

# Add target alias to "all" target.
.PHONY: all
all: torque_runtime_support

