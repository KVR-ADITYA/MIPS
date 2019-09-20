

#! /bin/bash

num=100
until [ $num -lt 1 ]; do
     echo $num
     let num-=1
done
