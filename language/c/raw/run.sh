#!/bin/bash

gcc -o __gen_dist $1 && ./__gen_dist && rm __gen_dist
