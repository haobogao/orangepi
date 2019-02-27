TARGETS = mountkernfs.sh hostname.sh mountdevsubfs.sh procps urandom hwclock.sh checkroot.sh bootmisc.sh mountall.sh checkfs.sh checkroot-bootclean.sh mountnfs.sh mountnfs-bootclean.sh mountall-bootclean.sh
INTERACTIVE = checkroot.sh checkfs.sh
mountdevsubfs.sh: mountkernfs.sh
procps: mountkernfs.sh
urandom: hwclock.sh
hwclock.sh: mountdevsubfs.sh
checkroot.sh: hwclock.sh mountdevsubfs.sh hostname.sh
bootmisc.sh: mountnfs-bootclean.sh checkroot-bootclean.sh mountall-bootclean.sh
mountall.sh: checkfs.sh checkroot-bootclean.sh
checkfs.sh: checkroot.sh
checkroot-bootclean.sh: checkroot.sh
mountnfs-bootclean.sh: mountnfs.sh
mountall-bootclean.sh: mountall.sh
