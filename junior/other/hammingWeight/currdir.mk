#by jeff
LOCAL_DIR := $(call my-dir)
include $(CLEAR_VAR)

LOCAL_SRC_FILE:=main.c hammingWeight.c
LOCAL_MODULE:= hammingWeight
LOCAL_TARGET_SUFFIX:=.exe
LOCAL_STATIC_LIBRARIES:= libtree
LOCAL_SHARED_LIBRARIES:= 
LOCAL_LD_FLAGS:= -Wl,--gc-sections

include $(BUILD_MODULE)

