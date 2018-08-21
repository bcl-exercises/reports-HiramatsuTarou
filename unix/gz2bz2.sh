#!/bin/bash
for i in `ls` ; do
    FANAC=${i#*.}
    if [ $FANAC = "tar.gz" ] ; then
	echo "gz形式です。容量(byte)は、"
	du -b $i
	echo "です。解凍、圧縮しなおしをします。"
	tar -zxvf $i
	ent=${i%%.*}
	ans="${ent}.tar.bz2"
	tar jcvf $ans $ent
	echo "bz2形式での容量(byte)は"
	du -b $ans
    fi
done