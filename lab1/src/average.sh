    #!/bin/bash
    count=0
    sum=0
    while [ -n "$1" ]
    do
    count=$[ $count+1 ]
    sum=$[ $sum+$1 ]
    shift
    done
    average=$[ $sum/$count ]
    echo "Amount of arguments is $count, their's average is $average"