#by jeff
LOCAL_DIR := $(call my-dir)
include $(CLEAR_VAR)

LOCAL_SRC_FILE:=main.c oddEvenList.c
LOCAL_MODULE:= oddEvenList
LOCAL_TARGET_SUFFIX:=.exe
LOCAL_STATIC_LIBRARIES:= libsLinkList
LOCAL_SHARED_LIBRARIES:= 
LOCAL_LD_FLAGS:= -Wl,--gc-sections

include $(BUILD_MODULE)

