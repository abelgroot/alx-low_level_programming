#!/bin/bash

password_prefix="jennieandjayloveasm="
expected_hash=""

for suffix in $(cat possible_suffixes.txt); do
    full_password="${password_prefix}${suffix}"
    computed_hash=$(echo -n "$full_password" | md5sum | awk '{print $1}')

    if [ "$computed_hash" == "$expected_hash" ]; then
        echo "Found password: $full_password"
        exit 0
    fi
done

echo "Password not found."
exit 1

