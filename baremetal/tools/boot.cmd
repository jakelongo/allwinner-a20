setenv bootargs console=ttyS0 root=/dev/mmcblk0p1 rootwait panic=10
fatload mmc 0 0x50000000 image.bin
go 0x50000000
