#by jeff
LOCAL_DIR := $(call my-dir)
include $(CLEAR_VAR)

LOCAL_SRC_FILE:=main.c maxProfit.c
LOCAL_MODULE:= maxProfit
LOCAL_TARGET_SUFFIX:=.exe
LOCAL_STATIC_LIBRARIES:= 
LOCAL_SHARED_LIBRARIES:= 
LOCAL_LD_FLAGS:= -Wl,--gc-sections

include $(BUILD_MODULE)

