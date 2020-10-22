#!/bin/bash
apt install make -y
make
mkdir ~/.TermGuard
cp database/database.json ~/.TermGuard
echo "Installation completed"
echo "https://t.me/TermGuard"