#by jeff
LOCAL_DIR := $(call my-dir)
include $(CLEAR_VAR)

LOCAL_SRC_FILE:= sort.c
LOCAL_MODULE:= sort
LOCAL_TARGET_SUFFIX:=.a
LOCAL_STATIC_LIBRARIES:= 
LOCAL_SHARED_LIBRARIES:= 
LOCAL_LD_FLAGS:= -Wl,--gc-sections

include $(BUILD_MODULE)

