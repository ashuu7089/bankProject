# This file is generated by gyp; do not edit.

TOOLSET := target
TARGET := run_gen-regexp-special-case
### Rules for action "run_gen-regexp-special-case_action":
quiet_cmd__home_ashuu_Desktop_projects_bank_project_bankenv_src_node_v19_2_0_tools_v8_gypfiles_v8_gyp_run_gen_regexp_special_case_target_run_gen_regexp_special_case_action = ACTION _home_ashuu_Desktop_projects_bank_project_bankenv_src_node_v19_2_0_tools_v8_gypfiles_v8_gyp_run_gen_regexp_special_case_target_run_gen_regexp_special_case_action $@
cmd__home_ashuu_Desktop_projects_bank_project_bankenv_src_node_v19_2_0_tools_v8_gypfiles_v8_gyp_run_gen_regexp_special_case_target_run_gen_regexp_special_case_action = LD_LIBRARY_PATH=$(builddir)/lib.host:$(builddir)/lib.target:$$LD_LIBRARY_PATH; export LD_LIBRARY_PATH; cd $(srcdir)/tools/v8_gypfiles; mkdir -p $(obj)/gen/src/regexp; /usr/bin/python3.10 ../../deps/v8/tools/run.py "$(builddir)/gen-regexp-special-case" "$(obj)/gen/src/regexp/special-case.cc"

$(obj)/gen/src/regexp/special-case.cc: obj := $(abs_obj)
$(obj)/gen/src/regexp/special-case.cc: builddir := $(abs_builddir)
$(obj)/gen/src/regexp/special-case.cc: TOOLSET := $(TOOLSET)
$(obj)/gen/src/regexp/special-case.cc: $(builddir)/gen-regexp-special-case FORCE_DO_CMD
	$(call do_cmd,_home_ashuu_Desktop_projects_bank_project_bankenv_src_node_v19_2_0_tools_v8_gypfiles_v8_gyp_run_gen_regexp_special_case_target_run_gen_regexp_special_case_action)

all_deps += $(obj)/gen/src/regexp/special-case.cc
action__home_ashuu_Desktop_projects_bank_project_bankenv_src_node_v19_2_0_tools_v8_gypfiles_v8_gyp_run_gen_regexp_special_case_target_run_gen_regexp_special_case_action_outputs := $(obj)/gen/src/regexp/special-case.cc


### Rules for final target.
# Build our special outputs first.
$(obj).target/tools/v8_gypfiles/run_gen-regexp-special-case.stamp: | $(action__home_ashuu_Desktop_projects_bank_project_bankenv_src_node_v19_2_0_tools_v8_gypfiles_v8_gyp_run_gen_regexp_special_case_target_run_gen_regexp_special_case_action_outputs)

# Preserve order dependency of special output on deps.
$(action__home_ashuu_Desktop_projects_bank_project_bankenv_src_node_v19_2_0_tools_v8_gypfiles_v8_gyp_run_gen_regexp_special_case_target_run_gen_regexp_special_case_action_outputs): | $(builddir)/gen-regexp-special-case

$(obj).target/tools/v8_gypfiles/run_gen-regexp-special-case.stamp: TOOLSET := $(TOOLSET)
$(obj).target/tools/v8_gypfiles/run_gen-regexp-special-case.stamp: $(builddir)/gen-regexp-special-case FORCE_DO_CMD
	$(call do_cmd,touch)

all_deps += $(obj).target/tools/v8_gypfiles/run_gen-regexp-special-case.stamp
# Add target alias
.PHONY: run_gen-regexp-special-case
run_gen-regexp-special-case: $(obj).target/tools/v8_gypfiles/run_gen-regexp-special-case.stamp

# Add target alias to "all" target.
.PHONY: all
all: run_gen-regexp-special-case
