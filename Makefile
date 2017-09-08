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

KML_SUPPORT_SRCS := $(KML_SRC_DIR)/support_lib/ml_multi_prec_lib.c \
										$(KML_SRC_DIR)/support_lib/ml_libm_compatibility.c \

KML_COMMON_FLOAT_SRCS :=  $(KML_SRC_DIR)/tests/test_template_float.c \
										      $(KML_SRC_DIR)/test_lib/test_lib.c \
                          $(KML_SUPPORT_SRCS)

KML_COMMON_DOUBLE_SRCS :=  $(KML_SRC_DIR)/tests/test_template_double.c \
										      $(KML_SRC_DIR)/test_lib/test_lib.c \
                          $(KML_SUPPORT_SRCS)

kml_exp_f2_f_test-srcs   := $(KML_SRC_DIR)/tests/ml_k1_k1b_exp2f_test_vectors_0.c $(KML_COMMON_FLOAT_SRCS) 
kml_exp_f2_f_test-cflags := $(KML_TEST_FLAGS) -DTEST_FUNCTION=kml_exp_f2_f
kml_exp_f2_f_test-name   := kml_exp_f2_f_test
kml_exp_f2_f_test-lflags := -lkml -lm
kml_exp_f2_f_test-deps   := kml

kml_log_f2_f_test-srcs   := $(KML_SRC_DIR)/tests/ml_k1_k1b_log2f_test_vectors_0.c $(KML_COMMON_FLOAT_SRCS) 
kml_log_f2_f_test-cflags := $(KML_TEST_FLAGS) -DTEST_FUNCTION=kml_log_f2_f
kml_log_f2_f_test-name   := kml_log_f2_f_test
kml_log_f2_f_test-lflags :=  -lkml -lm
kml_log_f2_f_test-deps   := kml

kml_exp_d2_f_test-srcs := $(KML_SRC_DIR)/tests/ml_k1_k1b_exp2d_test_vectors_0.c $(KML_COMMON_DOUBLE_SRCS) 
kml_exp_d2_f_test-cflags := $(KML_TEST_FLAGS) -DTEST_FUNCTION=kml_exp_d2_f
kml_exp_d2_f_test-name   := kml_exp_d2_f_test
kml_exp_d2_f_test-lflags :=  -lkml -lm
kml_exp_d2_f_test-deps := kml

kml_log_d2_f_test-srcs   := $(KML_SRC_DIR)/tests/ml_k1_k1b_log2d_test_vectors_0.c $(KML_COMMON_DOUBLE_SRCS) 
kml_log_d2_f_test-cflags := $(KML_TEST_FLAGS) -DTEST_FUNCTION=kml_log_d2_f
kml_log_d2_f_test-name   := kml_log_d2_f_test
kml_log_d2_f_test-lflags :=  -lkml -lm
kml_log_d2_f_test-deps   := kml


kml_cos_f2_f_test-srcs    := $(KML_SRC_DIR)/tests/test_kml_cos_f2_f.c $(KML_SUPPORT_SRCS) 
kml_cos_f2_f_test-cflags  := $(KML_CFLAGS) 
kml_cos_f2_f_test-name    := kml_cos_f2_f_test
kml_cos_f2_f_test-lflags  :=  -lkml -lm
kml_cos_f2_f_test-deps    := kml
kml_cos_f2_f_test-sim-cmd := $(kml_cos_f2_f_test)
kml_cos_f2_f_test-labels  := functional

kml_sin_f2_f_test-srcs    := $(KML_SRC_DIR)/tests/test_kml_sin_f2_f.c $(KML_SUPPORT_SRCS) 
kml_sin_f2_f_test-cflags  := $(KML_CFLAGS) 
kml_sin_f2_f_test-name    := kml_sin_f2_f_test
kml_sin_f2_f_test-lflags  :=  -lkml -lm
kml_sin_f2_f_test-deps    := kml
kml_sin_f2_f_test-sim-cmd := $(kml_sin_f2_f_test)
kml_sin_f2_f_test-labels  := functional


cluster-lib := kml

cluster-bin := kml_exp_f2_f_test kml_log_f2_f_test \
               kml_exp_d2_f_test kml_log_d2_f_test \
							 kml_sin_f2_f_test kml_cos_f2_f_test

cluster-tests := kml_log_d2_f_test kml_log_f2_f_test \
                 kml_exp_d2_f_test kml_exp_f2_f_test \
							 kml_sin_f2_f_test kml_cos_f2_f_test

system-name := bare



include $(K1_TOOLCHAIN_DIR)/share/make/Makefile.kalray   

# $(1) is test name
define gen_test_targets

$(1).sim_test: $(O)/bin/$(1)
	$(K1_TOOLCHAIN_DIR)/bin/k1-cluster -- $(O)/bin/$(1)

$(1).hw_test: $(O)/bin/$(1)
	$(K1_TOOLCHAIN_DIR)/bin/k1-jtag-runner --exec-file=Cluster0:$(O)/bin/$(1)

test: $(1).sim_test
test_hw: $(1).hw_test

endef

$(foreach test_name,$(cluster-tests),\
	$(eval $(call gen_test_targets,$(test_name))))

K1_REQ=$(K1_TOOLCHAIN_DIR)/../k1Req/

install:  
	echo "libkml INSTALL" $(DESTDIR) $(cluster-lib) 
	mkdir -p $(LIBDIR)
	mkdir -p $(INCLUDEDIR)
	cp $(BUILD_DIR)/../lib/cluster/libkml.a $(LIBDIR) 
	cp $(KML_SRC_DIR)/include/kml.h $(INCLUDEDIR)/ 

doc:
	mkdir -p $(O) 
	BUILD_DIR=$(O) DOXYGEN_DIR=$(K1_REQ)/doxygen/1.8.8/ $(K1_REQ)/doxygen/1.8.8/bin/doxygen Doxyfile
	[ ! -s $(O)/doxygen_errors.log ] || echo "Aborting, some functions are badly documented"
	O=$(O) make -f Makefile.doc

install_doc:
	$(info "nothing to do")

.PHONY: doc
