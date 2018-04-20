
BASE_MODULE:=  junior intermediate advanced

include $(foreach m,$(BASE_MODULE),$(m)/currdir.mk)



