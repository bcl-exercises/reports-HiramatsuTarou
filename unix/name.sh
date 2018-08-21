#!/bin/bash

FANAC=${1#*.}
if [ $FANAC = "tar.gz" ] ; then
    ent=${1%%.*}
    ans="${ent}.tar.bz2"
    echo "変換完了"
    echo $ans
else
    echo "変換対象ではありません"
fi
