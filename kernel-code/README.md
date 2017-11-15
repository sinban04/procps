
# KERNEL Code

This kernel is based on linux-4.9.45.

This kernel codes are used for the systemcall in procps.
I newly added new features in procps, which trace the information in kernel.

So you need to download the kernel (linux-4.9.45) from kernel.org


At first, download the kernel source code, 

```
$ wget https://cdn.kernel.org/pub/linux/kernel/v4.x/linux-4.9.45.tar.xz
```

and then untar the file


```
$ tar xvf linux-4.9.45.tar.xz 
```

Install the dependent packages

```
$ sudo apt-get install ncurses-dev libssl-dev
```

Configure the kernel source

```
$ make menuconfig
```
pick save and enter several times

and then

build the kernel source
```
$ make -j4
```
This would take long time (maybe 20 minutes)
it depends on your computer

build modules and install

```
$ make modules
$ sudo make modules_install
$ sudo make install 
```

## Setting Grub

To use the new kernel you built, you need to use grub to choose the kernel during booting

```
$ vim /etc/default/grub
```

make the part 'GRUB_HIDDEN_TIMEOUT=0' to be a comment.
(disable GRUB_HIDDEN_TIMEOUT=0)

GRUB_HIDDEN_TIMEOUT=0 makes grub does not appear.





