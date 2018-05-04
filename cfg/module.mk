
BASE_MODULE:=  junior middle advanced \
				utils

include $(foreach m,$(BASE_MODULE),$(m)/currdir.mk)



