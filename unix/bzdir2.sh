#!/bin/bash

for i in `ls` ; do
    if [ -d $i ]; then
	tar jcvf $i.tar.bz2 $i  
    fi
done

