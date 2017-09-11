#
# MIT License
#
# Copyright (c) 2016-2017 Kalray
#
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included
# in all copies or substantial portions of the Software.
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
# SOFTWARE.
#
KML_SRC_DIR := .# $(PWD)

# Kalray Math Library target
kml-srcs := $(KML_SRC_DIR)/src/kml_exp_f2_f.c $(KML_SRC_DIR)/src/kml_exp_d2_f.c \
            $(KML_SRC_DIR)/src/kml_log_f2_f.c $(KML_SRC_DIR)/src/kml_log_d2_f.c \
						$(KML_SRC_DIR)/src/kml_cos_f2_f.c $(KML_SRC_DIR)/src/kml_sin_f2_f.c 
kml-name := kml
kml-cflags := -O2 -Werror -I$(KML_SRC_DIR)/include/ -I$(KML_SRC_DIR)

KML_CFLAGS := -I$(ML_TEST_LIB_SRC)/src -I$(KML_SRC_DIR)/test_lib/ \
							-I$(KML_SRC_DIR)/include/ -I$(KML_SRC_DIR)
KML_TEST_FLAGS := -DTEST_START=0 -DTEST_END=9999 -DNUM_TEST=10000 -DCOUNT_CYCLE -O3 -Wall \
									$(KML_CFLAGS)

# support library source files
KML_SUPPORT_SRCS := $(KML_SRC_DIR)/support_lib/ml_multi_prec_lib.c \
					$(KML_SRC_DIR)/support_lib/ml_libm_compatibility.c \
# single-precision implementation source files
KML_COMMON_FLOAT_SRCS :=  $(KML_SRC_DIR)/tests/test_template_float.c \
                          $(KML_SRC_DIR)/test_lib/test_lib.c \
                          $(KML_SUPPORT_SRCS)
# double-precision implementation source files
KML_COMMON_DOUBLE_SRCS := $(KML_SRC_DIR)/tests/test_template_double.c \
                          $(KML_SRC_DIR)/test_lib/test_lib.c \
                            $(KML_SUPPORT_SRCS)




cluster-lib := kml



include $(KML_SRC_DIR)/tests/Makefile.test

system-name := bare



include $(K1_TOOLCHAIN_DIR)/share/make/Makefile.kalray

install:
	echo "libkml INSTALL" $(DESTDIR) $(cluster-lib) 
	mkdir -p $(LIBDIR)
	mkdir -p $(INCLUDEDIR)
	cp $(BUILD_DIR)/../lib/cluster/libkml.a $(LIBDIR) 
	cp $(KML_SRC_DIR)/include/kml.h $(INCLUDEDIR)/ 

doc:
	mkdir -p $(O) 
	BUILD_DIR=$(O) doxygen Doxyfile

install_doc:
	$(info "nothing to do")

.PHONY: doc
