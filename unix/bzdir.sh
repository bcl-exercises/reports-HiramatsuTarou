#!/bin/bash

function Usage () {
    echo "指定された引数は$1個です。"
    echo "実行するには1個の引数が必要です。"
    exit 1
}


if [ $# -ne 1 ]; then
    Usage $#
fi

if [ -d $1 ]; then   
    echo "ディレクトリが見つかりました。"
else
    echo "現在のディレクトリでは対象を見つけられません。"
    exit 1
fi

tar jcvf $1.tar.bz2 $1  