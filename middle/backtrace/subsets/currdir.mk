#by jeff
LOCAL_DIR := $(call my-dir)
include $(CLEAR_VAR)

LOCAL_SRC_FILE:=main.c subsets.c
LOCAL_MODULE:= subsets
LOCAL_TARGET_SUFFIX:=.exe
LOCAL_STATIC_LIBRARIES:=
LOCAL_SHARED_LIBRARIES:= 
LOCAL_LD_FLAGS:= -Wl,--gc-sections

include $(BUILD_MODULE)

