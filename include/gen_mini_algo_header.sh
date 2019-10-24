#!/usr/bin/env bash

cat <<EOF > mini_algo.hpp
#ifndef MINI_ALGO_INC
#define MINI_ALGO_INC
EOF

find . -name "*.hpp" | grep -v 'mini_algo.hpp' | sed 's!^\./!!g' | \
while read line
do
    echo "#include \"$line\""
done >> mini_algo.hpp

cat <<EOF >> mini_algo.hpp
#endif
EOF
