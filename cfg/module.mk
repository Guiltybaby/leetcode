
BASE_MODULE:=  junior intermediate advanced \
				utils

include $(foreach m,$(BASE_MODULE),$(m)/currdir.mk)



