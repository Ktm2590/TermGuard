#!/bin/bash
architecture=`uname -m`

if [ $architecture = aarch64 ];
then cp aarch64/tguard ~/../usr/bin
chmod +x ~/../usr/bin/tguard
mkdir ~/../usr/etc/TermGuard
cp database/database.json ~/../usr/etc/TermGuard/database.json
echo "Installation on architecture aarch64 completed"
fi
termux-open https://t.me/TermGuard
