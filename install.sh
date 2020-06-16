#!/bin/bash
architecture=`uname -m`

if [ $architecture = aarch64 ];
then cp aarch64/tguard ~/../usr/bin
chmod +x ~/../usr/bin/tguard
echo "Installation on architecture aarch64 completed"
fi
