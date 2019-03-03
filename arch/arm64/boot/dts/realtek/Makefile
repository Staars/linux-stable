dtb-$(CONFIG_ARCH_REALTEK) += rtd1295-mele-v9.dtb
dtb-$(CONFIG_ARCH_REALTEK) += rtd1295-probox2-ava.dtb
dtb-$(CONFIG_ARCH_REALTEK) += rtd1295-zidoo-x9s.dtb

dts-dirs += rtd129x
dts-dirs += rtd139x
dts-dirs += rtd16xx

always		:= $(dtb-y)
subdir-y	:= $(dts-dirs)
clean-files	:= rtd129x/*.dtb *.dtb
clean-files	:= rtd139x/*.dtb *.dtb
clean-files	:= rtd16xx/*.dtb *.dtb
