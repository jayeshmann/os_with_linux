#!/bin/bash
ps
read -p "Enter process id: " pid
kill -SIGKILL $pid
echo "Killed!"
