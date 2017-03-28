#!/bin/bash

CUR_DIR=$(cd `dirname $0`;pwd);

cd $CUR_DIR

../node_modules/.bin/kab -s ../language/c/source -t ../language/c/atlas -c
